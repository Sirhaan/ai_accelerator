module tb_sram_controller;
    import pkg::*;

    logic clk, rst;
    logic s_wgt_tvalid, s_wgt_tready, s_wgt_tlast;
    logic [WGT_ROW_WIDTH-1:0] s_wgt_tdata;
    logic s_act_tvalid, s_act_tready, s_act_tlast;
    logic [ACT_ROW_WIDTH-1:0] s_act_tdata;
    logic bank_swap, wgt_rd_next, act_rd_next, act_rd_rst;
    logic [WGT_ROW_WIDTH-1:0] wgt_rd_data;
    logic wgt_rd_valid;
    logic [ACT_ROW_WIDTH-1:0] act_rd_data;
    logic act_rd_valid;
    logic wgt_buf_ready, act_buf_ready, wgt_tlast_seen, act_tlast_seen;

    int errors;

    sram_controller dut (.*);

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
        end else $display("PASS %s", name);
    endtask

    task automatic check_bit(input string name, input logic got, input logic exp);
        if (got !== exp) begin
            $display("FAIL %s: got %0b expected %0b", name, got, exp);
            errors++;
        end else $display("PASS %s", name);
    endtask

    task automatic reset_dut;
        rst = 1'b1;
        s_wgt_tvalid = 0; s_wgt_tdata = '0; s_wgt_tlast = 0;
        s_act_tvalid = 0; s_act_tdata = '0; s_act_tlast = 0;
        bank_swap = 0; wgt_rd_next = 0; act_rd_next = 0; act_rd_rst = 0;
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic write_wgt(input [WGT_ROW_WIDTH-1:0] data, input logic last);
        s_wgt_tdata = data;
        s_wgt_tlast = last;
        s_wgt_tvalid = 1'b1;
        tick();
        s_wgt_tvalid = 1'b0;
        s_wgt_tlast = 1'b0;
    endtask

    task automatic write_act(input [ACT_ROW_WIDTH-1:0] data, input logic last);
        s_act_tdata = data;
        s_act_tlast = last;
        s_act_tvalid = 1'b1;
        tick();
        s_act_tvalid = 1'b0;
        s_act_tlast = 1'b0;
    endtask

    task automatic swap_bank;
        bank_swap = 1'b1;
        tick();
        bank_swap = 1'b0;
    endtask

    task automatic read_wgt;
        wgt_rd_next = 1'b1;
        tick();
        wgt_rd_next = 1'b0;
    endtask

    task automatic read_act;
        act_rd_next = 1'b1;
        tick();
        act_rd_next = 1'b0;
    endtask

    initial begin
        errors = 0;
        reset_dut();

        check_bit("weight stream always ready", s_wgt_tready, 1'b1);
        write_wgt(32'h11112222, 1'b0);
        check_bit("wgt_buf_ready low before tlast", wgt_buf_ready, 1'b0);
        write_wgt(32'h33334444, 1'b1);
        check_bit("wgt_buf_ready fires on tlast", wgt_buf_ready, 1'b1);
        check_bit("wgt_tlast_seen fires", wgt_tlast_seen, 1'b1);

        swap_bank();
        read_wgt();
        check_bit("wgt read valid", wgt_rd_valid, 1'b1);
        check_int("weight read first row", int'(wgt_rd_data), 32'h11112222);
        read_wgt();
        check_int("weight read second row", int'(wgt_rd_data), 32'h33334444);

        write_wgt(32'h55556666, 1'b1);
        check_bit("prefetch inactive bank ready", wgt_buf_ready, 1'b1);
        read_wgt();
        check_int("active bank unchanged during prefetch", int'(wgt_rd_data), 32'h33334444);
        swap_bank();
        read_wgt();
        check_int("bank_swap switches active bank", int'(wgt_rd_data), 32'h55556666);

        check_bit("activation stream always ready", s_act_tready, 1'b1);
        write_act(32'haaaa0001, 1'b0);
        write_act(32'hbbbb0002, 1'b1);
        check_bit("act_buf_ready fires on tlast", act_buf_ready, 1'b1);
        check_bit("act_tlast_seen fires", act_tlast_seen, 1'b1);
        read_act();
        check_bit("act read valid", act_rd_valid, 1'b1);
        check_int("activation read first", int'(act_rd_data), 32'haaaa0001);
        read_act();
        check_int("activation read second", int'(act_rd_data), 32'hbbbb0002);
        act_rd_rst = 1'b1;
        tick();
        act_rd_rst = 1'b0;
        read_act();
        check_int("act_rd_rst rewinds", int'(act_rd_data), 32'haaaa0001);

        if (errors == 0) begin
            $display("tb_sram_controller PASS");
            $finish;
        end else begin
            $display("tb_sram_controller FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
