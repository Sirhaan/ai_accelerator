module tb_axi_master;
    import pkg::*;

    logic clk;
    logic rst;
    logic tvalid;
    logic tready;
    logic [OUT_ROW_WIDTH-1:0] tdata;
    logic tlast;
    logic tready_in;
    logic tvalid_in;
    logic [OUT_ROW_WIDTH-1:0] tdata_in;
    logic tlast_in;

    int errors;

    axi_master dut (
        .clk(clk),
        .rst(rst),
        .tvalid(tvalid),
        .tready(tready),
        .tdata(tdata),
        .tlast(tlast),
        .tready_in(tready_in),
        .tvalid_in(tvalid_in),
        .tdata_in(tdata_in),
        .tlast_in(tlast_in)
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
        tready = 1'b0;
        tvalid_in = 1'b0;
        tdata_in = '0;
        tlast_in = 1'b0;
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    initial begin
        errors = 0;
        reset_dut();

        check_bit("reset leaves output invalid", tvalid, 1'b0);
        check_bit("empty master ready for input", tready_in, 1'b1);

        tvalid_in = 1'b1;
        tdata_in = 32'h000000a5;
        tlast_in = 1'b0;
        tick();
        check_bit("captures first word valid", tvalid, 1'b1);
        check_int("captures first word data", int'(tdata), 32'h000000a5);
        check_bit("captures first word last", tlast, 1'b0);

        tready = 1'b0;
        tdata_in = 32'h0000005a;
        tlast_in = 1'b1;
        repeat (2) tick();
        check_int("holds data under backpressure", int'(tdata), 32'h000000a5);
        check_bit("not ready while holding data", tready_in, 1'b0);

        tready = 1'b1;
        tick();
        check_int("accepts next word after consume", int'(tdata), 32'h0000005a);
        check_bit("next word last propagates", tlast, 1'b1);

        tvalid_in = 1'b0;
        tlast_in = 1'b0;
        tdata_in = '0;
        tick();
        check_bit("clears valid after final consume", tvalid, 1'b0);
        check_bit("ready when empty again", tready_in, 1'b1);

        if (errors == 0) begin
            $display("tb_axi_master PASS");
            $finish;
        end else begin
            $display("tb_axi_master FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
