module tb_quant;
    import pkg::*;

    logic clk;
    logic rst;
    logic enable;
    logic signed [IN_WIDTH-1:0] data_in;
    logic [SCALE_WIDTH-1:0] inv_scale;
    logic signed [OUT_WIDTH-1:0] data_out;
    logic clip_flag;

    int errors;

    quant dut (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .data_in(data_in),
        .inv_scale(inv_scale),
        .data_out(data_out),
        .clip_flag(clip_flag)
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
        data_in = '0;
        inv_scale = '0;
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic apply_sample(
        input signed [IN_WIDTH-1:0] sample,
        input [SCALE_WIDTH-1:0] scale
    );
        data_in = sample;
        inv_scale = scale;
        enable = 1'b1;
        tick();
        data_in = '0;
        tick();
        enable = 1'b0;
    endtask

    initial begin
        errors = 0;
        reset_dut();

        apply_sample(0, 16'h8000);
        check_int("zero quantizes to zero", int'(data_out), 0);
        check_bit("zero no clip", clip_flag, 1'b0);

        apply_sample(127, 16'h8000);
        check_int("known max-range value maps to 127", int'(data_out), 127);
        check_bit("max-range no clip", clip_flag, 1'b0);

        apply_sample(200, 16'h8000);
        check_int("positive clip clamps to 127", int'(data_out), 127);
        check_bit("positive clip flag", clip_flag, 1'b1);

        apply_sample(-200, 16'h8000);
        check_int("negative clip clamps to -127", int'(data_out), -127);
        check_bit("negative clip flag", clip_flag, 1'b1);

        apply_sample(1, 16'h4000);
        check_int("rounding 0.5 rounds to 1", int'(data_out), 1);

        apply_sample(-4, 16'h8000);
        check_int("negative input quantization", int'(data_out), -4);

        reset_dut();
        data_in = 13;
        inv_scale = 16'h8000;
        enable = 1'b1;
        tick();
        check_int("pipeline latency cycle 1", int'(data_out), 0);
        tick();
        check_int("pipeline latency cycle 2", int'(data_out), 13);
        enable = 1'b0;

        if (errors == 0) begin
            $display("tb_quant PASS");
            $finish;
        end else begin
            $display("tb_quant FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
