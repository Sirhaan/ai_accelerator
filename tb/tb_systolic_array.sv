module tb_systolic_array;
    import pkg::*;

    logic clk;
    logic rst;
    logic enable;
    logic clear_acc;
    logic wgt_load_strt;
    logic signed [ACT_WIDTH-1:0] act_in [ROWS];
    logic signed [WGT_WIDTH-1:0] wgt_in [COLS];
    logic signed [ACC_WIDTH-1:0] acc_out [ROWS][COLS];
    logic overflow [ROWS][COLS];
    logic wgt_loaded;

    int errors;

    systolic_array dut (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .clear_acc(clear_acc),
        .wgt_load_strt(wgt_load_strt),
        .act_in(act_in),
        .wgt_in(wgt_in),
        .acc_out(acc_out),
        .overflow(overflow),
        .wgt_loaded(wgt_loaded)
    );

    initial clk = 1'b0;
    always #5 clk = ~clk;

    task automatic tick;
        @(posedge clk);
        #1;
    endtask

    task automatic check_int(input string name, input int got, input int exp);
        if (got !== exp) begin
            $display("FAIL %s: got %0d expected %0d", name, got, exp);
            errors++;
        end else begin
            $display("PASS %s", name);
        end
    endtask

    task automatic check_bit(input string name, input logic got, input logic exp);
        if (got !== exp) begin
            $display("FAIL %s: got %0b expected %0b", name, got, exp);
            errors++;
        end else begin
            $display("PASS %s", name);
        end
    endtask

    task automatic zero_inputs;
        for (int r = 0; r < ROWS; r++) act_in[r] = '0;
        for (int c = 0; c < COLS; c++) wgt_in[c] = '0;
    endtask

    task automatic reset_dut;
        rst = 1'b1;
        enable = 1'b0;
        clear_acc = 1'b0;
        wgt_load_strt = 1'b0;
        zero_inputs();
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic pulse_clear;
        clear_acc = 1'b1;
        enable = 1'b0;
        tick();
        clear_acc = 1'b0;
    endtask

    task automatic load_2x2_weights(
        input signed [WGT_WIDTH-1:0] w00,
        input signed [WGT_WIDTH-1:0] w01,
        input signed [WGT_WIDTH-1:0] w10,
        input signed [WGT_WIDTH-1:0] w11
    );
        zero_inputs();
        wgt_in[0] = '0;
        wgt_in[1] = '0;
        wgt_load_strt = 1'b1;
        tick();
        wgt_load_strt = 1'b0;
        wgt_in[0] = '0;
        wgt_in[1] = '0;
        tick();
        wgt_in[0] = w10;
        wgt_in[1] = w11;
        tick();
        wgt_in[0] = w00;
        wgt_in[1] = w01;
        tick();
        zero_inputs();
        repeat (4) tick();
        @(posedge clk);
        #1;
        $display("wgt_load_reg check - PE(0,0) wgt should be %0d actual=%0d",
                  w00,
                  dut.gen_row[0].gen_col[0].pe.wgt_reg);
    endtask

    task automatic drive_acts(input signed [ACT_WIDTH-1:0] a0, input signed [ACT_WIDTH-1:0] a1);
        act_in[0] = a0;
        act_in[1] = a1;
        enable = 1'b1;
        tick();
        $display("mult_result - PE(0,0): act_reg=%0d wgt_load_reg=%0d",
                  dut.gen_row[0].gen_col[0].pe.act_reg,
                  dut.gen_row[0].gen_col[0].pe.wgt_reg);
        zero_inputs();
    endtask

    task automatic flush_compute(input int cycles);
        enable = 1'b1;
        repeat (cycles) begin
            zero_inputs();
            tick();
        end
        enable = 1'b0;
    endtask

    initial begin
        errors = 0;
        reset_dut();

        load_2x2_weights(1, 0, 0, 1);
        pulse_clear();
        drive_acts(9, 4);
        flush_compute(12);
        check_int("2x2 identity row0 col0", int'(acc_out[0][0]), 9);
        check_int("2x2 identity row0 col1", int'(acc_out[0][1]), 0);
        check_int("2x2 identity row1 col0", int'(acc_out[1][0]), 0);
        check_int("2x2 identity row1 col1", int'(acc_out[1][1]), 4);

        pulse_clear();
        check_int("clear_acc resets PE 0,0", int'(acc_out[0][0]), 0);
        check_int("clear_acc resets PE 1,1", int'(acc_out[1][1]), 0);

        load_2x2_weights(5, 6, 7, 8);
        pulse_clear();
        drive_acts(1, 1);
        flush_compute(12);
        check_int("known matmul row0 col0", int'(acc_out[0][0]), 5);
        check_int("known matmul row0 col1", int'(acc_out[0][1]), 6);
        check_int("known matmul row1 col0", int'(acc_out[1][0]), 7);
        check_int("known matmul row1 col1", int'(acc_out[1][1]), 8);

        pulse_clear();
        drive_acts(1, 1);
        drive_acts(2, 2);
        flush_compute(12);
        check_int("accumulation row0 col0", int'(acc_out[0][0]), 15);
        check_int("accumulation row1 col1", int'(acc_out[1][1]), 24);

        reset_dut();
        load_2x2_weights(127, 0, 0, 0);
        pulse_clear();
        enable = 1'b1;
        act_in[0] = 127;
        for (int n = 0; n < 200 && !overflow[0][0]; n++) tick();
        check_bit("no false overflow in bounded run", overflow[0][0], 1'b0);

        if (errors == 0) begin
            $display("tb_systolic_array PASS");
            $finish;
        end else begin
            $display("tb_systolic_array FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
