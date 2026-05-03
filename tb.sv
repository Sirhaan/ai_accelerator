`timescale 1ns/1ps

module tb;
    import pkg::*;

    logic clk;
    logic rst;

    initial clk = 1'b0;
    always #5 clk = ~clk;

    int errors;

    task automatic tick;
        @(posedge clk);
        #1;
    endtask

    task automatic check_int(input string name, input longint signed got, input longint signed exp);
        if (got !== exp) begin
            $display("FAIL %-32s got=%0d expected=%0d", name, got, exp);
            errors++;
        end else begin
            $display("PASS %-32s value=%0d", name, got);
        end
    endtask

    task automatic check_bit(input string name, input logic got, input logic exp);
        if (got !== exp) begin
            $display("FAIL %-32s got=%0b expected=%0b", name, got, exp);
            errors++;
        end else begin
            $display("PASS %-32s value=%0b", name, got);
        end
    endtask

    // mac_unit DUT
    logic mac_clear_acc;
    logic mac_enable;
    logic mac_wgt_load;
    logic signed [ACT_WIDTH-1:0] mac_act_in;
    logic signed [WGT_WIDTH-1:0] mac_wgt_in;
    logic signed [WGT_WIDTH-1:0] mac_wgt_out;
    logic signed [ACT_WIDTH-1:0] mac_act_out;
    logic signed [ACC_WIDTH-1:0] mac_acc_out;
    logic mac_overflow;

    mac_unit u_mac (
        .clk(clk),
        .rst(rst),
        .clear_acc(mac_clear_acc),
        .enable(mac_enable),
        .wgt_load(mac_wgt_load),
        .act_in(mac_act_in),
        .wgt_in(mac_wgt_in),
        .wgt_out(mac_wgt_out),
        .act_out(mac_act_out),
        .acc_out(mac_acc_out),
        .overflow_flag(mac_overflow)
    );

    // quant DUT
    logic quant_enable;
    logic signed [IN_WIDTH-1:0] quant_data_in;
    logic [SCALE_WIDTH-1:0] quant_inv_scale;
    logic signed [OUT_WIDTH-1:0] quant_data_out;
    logic quant_clip_flag;

    quant u_quant (
        .clk(clk),
        .rst(rst),
        .enable(quant_enable),
        .data_in(quant_data_in),
        .inv_scale(quant_inv_scale),
        .data_out(quant_data_out),
        .clip_flag(quant_clip_flag)
    );

    // post_process DUT
    logic pp_enable;
    logic [1:0] pp_act_type;
    logic [SCALE_WIDTH-1:0] pp_scale_mult;
    logic signed [ACC_WIDTH-1:0] pp_bias [COLS];
    logic signed [ACC_WIDTH-1:0] pp_acc_in [COLS];
    logic pp_acc_valid;
    logic signed [ACT_WIDTH-1:0] pp_data_out [COLS];
    logic pp_out_valid;
    logic pp_any_saturated;

    post_process u_post_process (
        .clk(clk),
        .rst(rst),
        .enable(pp_enable),
        .act_type(pp_act_type),
        .scale_mult(pp_scale_mult),
        .bias(pp_bias),
        .acc_in(pp_acc_in),
        .acc_valid(pp_acc_valid),
        .data_out(pp_data_out),
        .out_valid(pp_out_valid),
        .any_saturated(pp_any_saturated)
    );

    // systolic_array DUT
    logic sa_enable;
    logic sa_clear_acc;
    logic sa_wgt_load_strt;
    logic signed [ACT_WIDTH-1:0] sa_act_in [ROWS];
    logic signed [WGT_WIDTH-1:0] sa_wgt_in [COLS];
    logic signed [ACC_WIDTH-1:0] sa_acc_out [ROWS][COLS];
    logic sa_overflow [ROWS][COLS];
    logic sa_wgt_loaded;

    systolic_array u_systolic_array (
        .clk(clk),
        .rst(rst),
        .enable(sa_enable),
        .clear_acc(sa_clear_acc),
        .wgt_load_strt(sa_wgt_load_strt),
        .act_in(sa_act_in),
        .wgt_in(sa_wgt_in),
        .acc_out(sa_acc_out),
        .overflow(sa_overflow),
        .wgt_loaded(sa_wgt_loaded)
    );

    task automatic reset_all;
        rst = 1'b1;

        mac_clear_acc = 1'b0;
        mac_enable = 1'b0;
        mac_wgt_load = 1'b0;
        mac_act_in = '0;
        mac_wgt_in = '0;

        quant_enable = 1'b0;
        quant_data_in = '0;
        quant_inv_scale = '0;

        pp_enable = 1'b0;
        pp_act_type = ACT_LINEAR;
        pp_scale_mult = '0;
        pp_acc_valid = 1'b0;
        for (int c = 0; c < COLS; c++) begin
            pp_bias[c] = '0;
            pp_acc_in[c] = '0;
        end

        sa_enable = 1'b0;
        sa_clear_acc = 1'b0;
        sa_wgt_load_strt = 1'b0;
        for (int r = 0; r < ROWS; r++)
            sa_act_in[r] = '0;
        for (int c = 0; c < COLS; c++)
            sa_wgt_in[c] = '0;

        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic test_mac_unit;
        $display("\n--- mac_unit simple test ---");
        mac_enable = 1'b1;
        mac_wgt_load = 1'b1;
        mac_act_in = 8'sd3;
        mac_wgt_in = 8'sd4;
        tick();

        mac_wgt_load = 1'b0;
        repeat (2) tick();
        check_int("mac 3*4 accumulated", mac_acc_out, 12);
        check_bit("mac overflow clear", mac_overflow, 1'b0);
        check_int("mac act piped", mac_act_out, 3);
        check_int("mac wgt piped", mac_wgt_out, 4);

        mac_clear_acc = 1'b1;
        tick();
        mac_clear_acc = 1'b0;
        check_int("mac clear_acc", mac_acc_out, 0);
    endtask

    task automatic test_quant;
        $display("\n--- quant simple test ---");
        quant_enable = 1'b1;
        quant_inv_scale = 16'd32768; // Q1.15 value of 1.0

        quant_data_in = 32'sd25;
        repeat (2) tick();
        check_int("quant identity", quant_data_out, 25);
        check_bit("quant no clip", quant_clip_flag, 1'b0);

        quant_data_in = 32'sd300;
        repeat (2) tick();
        check_int("quant positive clip", quant_data_out, 127);
        check_bit("quant positive clip flag", quant_clip_flag, 1'b1);

        quant_data_in = -32'sd300;
        repeat (2) tick();
        check_int("quant negative clip", quant_data_out, -127);
        check_bit("quant negative clip flag", quant_clip_flag, 1'b1);
    endtask

    task automatic test_post_process;
        $display("\n--- post_process simple test ---");
        pp_enable = 1'b1;
        pp_scale_mult = 16'd32768; // Q1.15 value of 1.0
        pp_act_type = ACT_LINEAR;
        pp_acc_valid = 1'b1;

        for (int c = 0; c < COLS; c++) begin
            pp_acc_in[c] = 32'sd10 + c;
            pp_bias[c] = c - 1;
        end

        repeat (3) tick();
        check_bit("post_process out_valid", pp_out_valid, 1'b1);
        for (int c = 0; c < COLS; c++)
            check_int($sformatf("post_process linear col%0d", c), pp_data_out[c], 9 + (2 * c));
        check_bit("post_process no saturation", pp_any_saturated, 1'b0);

        pp_act_type = ACT_RELU;
        pp_acc_in[0] = -32'sd10;
        pp_bias[0] = '0;
        for (int c = 1; c < COLS; c++) begin
            pp_acc_in[c] = 32'sd200;
            pp_bias[c] = '0;
        end

        repeat (3) tick();
        check_bit("post_process relu valid", pp_out_valid, 1'b1);
        check_int("post_process relu clamps neg", pp_data_out[0], 0);
        for (int c = 1; c < COLS; c++)
            check_int($sformatf("post_process saturation col%0d", c), pp_data_out[c], 127);
        check_bit("post_process saturation flag", pp_any_saturated, 1'b1);
    endtask

    task automatic test_systolic_array;
        int run_cycles;
        int expected;

        $display("\n--- systolic_array simple test ---");
        sa_enable = 1'b1;
        for (int c = 0; c < COLS; c++)
            sa_wgt_in[c] = 8'sd1;

        sa_wgt_load_strt = 1'b1;
        repeat (ROWS + 2) tick();
        sa_wgt_load_strt = 1'b0;
        check_bit("systolic wgt_loaded pulse reached bottom", sa_wgt_loaded, 1'b1);

        sa_clear_acc = 1'b1;
        tick();
        sa_clear_acc = 1'b0;

        for (int r = 0; r < ROWS; r++)
            sa_act_in[r] = r + 1;
        #1;

        run_cycles = COLS + 5;
        repeat (run_cycles) tick();

        for (int r = 0; r < ROWS; r++) begin
            for (int c = 0; c < COLS; c++) begin
                expected = (run_cycles - (c + 2)) * (r + 1);
                if (expected < 0)
                    expected = 0;
                check_int($sformatf("systolic acc r%0d c%0d", r, c), sa_acc_out[r][c], expected);
                check_bit($sformatf("systolic overflow r%0d c%0d", r, c), sa_overflow[r][c], 1'b0);
            end
        end
    endtask

    initial begin
        errors = 0;

        reset_all();
        test_mac_unit();

        reset_all();
        test_quant();

        reset_all();
        test_post_process();

        reset_all();
        test_systolic_array();

        if (errors == 0) begin
            $display("\nALL TESTS PASSED");
            $finish;
        end else begin
            $display("\nTESTS FAILED: %0d error(s)", errors);
            $fatal(1);
        end
    end
endmodule
