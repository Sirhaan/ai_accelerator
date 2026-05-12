module tb_post_process;
    import pkg::*;

    logic clk;
    logic rst;
    logic enable;
    logic [1:0] act_type;
    logic [SCALE_WIDTH-1:0] scale_mult;
    logic signed [ACC_WIDTH-1:0] bias [COLS];
    logic signed [ACC_WIDTH-1:0] acc_in [COLS];
    logic acc_valid;
    logic signed [ACT_WIDTH-1:0] data_out [COLS];
    logic out_valid;
    logic any_saturated;
    logic signed [ACT_WIDTH-1:0] lut_ref [LUT_ENTRIES];

    int errors;

    post_process dut (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .act_type(act_type),
        .scale_mult(scale_mult),
        .bias(bias),
        .acc_in(acc_in),
        .acc_valid(acc_valid),
        .data_out(data_out),
        .out_valid(out_valid),
        .any_saturated(any_saturated)
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

    task automatic reset_dut;
        rst = 1'b1;
        enable = 1'b0;
        act_type = ACT_LINEAR;
        scale_mult = 16'h8000;
        acc_valid = 1'b0;
        for (int i = 0; i < COLS; i++) begin
            bias[i] = '0;
            acc_in[i] = '0;
        end
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic run_sample(input logic [1:0] activation);
        act_type = activation;
        enable = 1'b1;
        acc_valid = 1'b1;
        tick();
        acc_valid = 1'b0;
        repeat (2) tick();
        enable = 1'b0;
    endtask

    initial begin
        errors = 0;
        $readmemh("gelu_lut.hex", lut_ref);
        reset_dut();

        acc_in[0] = 10;
        bias[0] = 0;
        run_sample(ACT_LINEAR);
        check_bit("linear out_valid", out_valid, 1'b1);
        check_int("linear shifted value", int'(data_out[0]), 10);
        check_bit("linear no saturation", any_saturated, 1'b0);

        reset_dut();
        acc_in[0] = 10;
        bias[0] = 3;
        run_sample(ACT_LINEAR);
        check_int("bias adds at full precision", int'(data_out[0]), 13);

        reset_dut();
        acc_in[0] = -5;
        run_sample(ACT_RELU);
        check_int("relu negative zeroed", int'(data_out[0]), 0);

        reset_dut();
        acc_in[0] = 6;
        run_sample(ACT_RELU);
        check_int("relu positive passes", int'(data_out[0]), 6);

        reset_dut();
        acc_in[0] = 0;
        run_sample(ACT_GELU);
        check_int("gelu known zero LUT", int'(data_out[0]), int'(lut_ref[512]));

        reset_dut();
        acc_in[0] = 1000;
        run_sample(ACT_LINEAR);
        check_int("saturation clips positive", int'(data_out[0]), 127);
        check_bit("sat_flag fires", any_saturated, 1'b1);

        reset_dut();
        acc_in[0] = 21;
        enable = 1'b1;
        acc_valid = 1'b1;
        tick();
        check_bit("pipeline latency cycle 1", out_valid, 1'b0);
        acc_valid = 1'b0;
        tick();
        check_bit("pipeline latency cycle 2", out_valid, 1'b0);
        tick();
        check_bit("pipeline latency cycle 3", out_valid, 1'b1);
        check_int("pipeline latency data", int'(data_out[0]), 21);

        if (errors == 0) begin
            $display("tb_post_process PASS");
            $finish;
        end else begin
            $display("tb_post_process FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
