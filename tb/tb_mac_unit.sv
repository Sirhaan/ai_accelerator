`timescale 1ns/1ps

module tb_mac_unit;
    import pkg::*;

    logic clk;
    logic rst;
    logic clear_acc;
    logic enable;
    logic wgt_load;
    logic [ACT_WIDTH-1:0] act_in;
    logic [WGT_WIDTH-1:0] wgt_in;
    logic [WGT_WIDTH-1:0] wgt_out;
    logic [ACT_WIDTH-1:0] act_out;
    logic [ACC_WIDTH-1:0] acc_out;
    logic overflow_flag;

    int errors;

    mac_unit dut (
        .clk(clk),
        .rst(rst),
        .clear_acc(clear_acc),
        .enable(enable),
        .wgt_load(wgt_load),
        .act_in(act_in),
        .wgt_in(wgt_in),
        .wgt_out(wgt_out),
        .act_out(act_out),
        .acc_out(acc_out),
        .overflow_flag(overflow_flag)
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
        clear_acc = 1'b0;
        enable = 1'b0;
        wgt_load = 1'b0;
        act_in = '0;
        wgt_in = '0;
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic load_weight(input signed [WGT_WIDTH-1:0] weight);
        wgt_in = weight;
        wgt_load = 1'b1;
        tick();
        wgt_load = 1'b0;
    endtask

    task automatic clear_accumulator;
        clear_acc = 1'b1;
        tick();
        clear_acc = 1'b0;
    endtask

    task automatic drive_act(input signed [ACT_WIDTH-1:0] act);
        act_in = act;
        enable = 1'b1;
        tick();
        act_in = '0;
    endtask

    task automatic flush_pipe(input int cycles);
        repeat (cycles) begin
            act_in = '0;
            enable = 1'b1;
            tick();
        end
        enable = 1'b0;
    endtask

    initial begin
        errors = 0;

        reset_dut();

        load_weight(4);
        drive_act(3);
        flush_pipe(2);
        check_int("basic multiply 3 * 4", $signed(acc_out), 12);

        clear_accumulator();
        load_weight(2);
        drive_act(1);
        drive_act(2);
        drive_act(3);
        flush_pipe(2);
        check_int("accumulation across K", $signed(acc_out), 12);

        clear_accumulator();
        check_int("clear_acc resets accumulator", $signed(acc_out), 0);
        check_bit("clear_acc clears overflow", overflow_flag, 1'b0);

        load_weight(5);
        drive_act(7);
        flush_pipe(2);
        enable = 1'b0;
        act_in = 8'sd9;
        repeat (4) tick();
        check_int("enable stall freezes accumulator", $signed(acc_out), 35);
        check_int("enable stall freezes act pipeline", $signed(act_out), 0);

        clear_accumulator();
        load_weight(6);
        wgt_in = 8'sd9;
        wgt_load = 1'b0;
        drive_act(2);
        flush_pipe(2);
        check_int("wgt_load keeps stationary weight", $signed(acc_out), 12);

        clear_accumulator();
        load_weight(-4);
        drive_act(3);
        flush_pipe(2);
        check_int("negative signed multiply", $signed(acc_out), -12);

        clear_accumulator();
        load_weight(127);
        enable = 1'b1;
        act_in = 127;
        while (!overflow_flag) begin
            tick();
        end
        check_bit("overflow detection fires", overflow_flag, 1'b1);

        reset_dut();
        load_weight(4);
        act_in = 3;
        enable = 1'b1;
        tick();
        check_int("pipeline latency cycle 1", $signed(acc_out), 0);
        tick();
        check_int("pipeline latency cycle 2", $signed(acc_out), 0);
        tick();
        check_int("pipeline latency cycle 3", $signed(acc_out), 12);
        enable = 1'b0;

        if (errors == 0) begin
            $display("tb_mac_unit PASS");
            $finish;
        end else begin
            $display("tb_mac_unit FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
