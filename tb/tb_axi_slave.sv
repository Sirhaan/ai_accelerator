module tb_axi_slave;
    import pkg::*;

    logic clk;
    logic rst;
    logic tvalid;
    logic tready;
    logic [IN_WIDTH-1:0] tdata;
    logic tlast;
    logic tready_out;
    logic tvalid_out;
    logic [IN_WIDTH-1:0] tdata_out;
    logic tlast_out;

    int errors;

    axi_slave dut (
        .clk(clk),
        .rst(rst),
        .tvalid(tvalid),
        .tready(tready),
        .tdata(tdata),
        .tlast(tlast),
        .tready_out(tready_out),
        .tvalid_out(tvalid_out),
        .tdata_out(tdata_out),
        .tlast_out(tlast_out)
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
        tvalid = 1'b0;
        tdata = '0;
        tlast = 1'b0;
        tready_out = 1'b0;
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic drive_word(input [IN_WIDTH-1:0] data, input logic last);
        tdata = data;
        tlast = last;
        tvalid = 1'b1;
        tick();
        tvalid = 1'b0;
        tlast = 1'b0;
        tdata = '0;
    endtask

    initial begin
        errors = 0;
        reset_dut();

        tready_out = 1'b1;
        drive_word(32'h000000a5, 1'b0);
        check_bit("normal flow valid", tvalid_out, 1'b1);
        check_int("normal flow data", int'(tdata_out), 32'h000000a5);
        check_bit("normal flow tlast", tlast_out, 1'b0);

        drive_word(32'h0000005a, 1'b1);
        check_int("second transfer data", int'(tdata_out), 32'h0000005a);
        check_bit("tlast propagates", tlast_out, 1'b1);

        reset_dut();
        tready_out = 1'b0;
        drive_word(32'h00000011, 1'b0);
        check_bit("backpressure data held valid", tvalid_out, 1'b1);
        check_int("backpressure data held", int'(tdata_out), 32'h00000011);
        repeat (3) tick();
        check_int("hold while out_ready low", int'(tdata_out), 32'h00000011);

        tvalid = 1'b1;
        tdata = 32'h00000022;
        tlast = 1'b1;
        tick();
        check_bit("backpressure deasserts input ready", tready, 1'b0);

        tready_out = 1'b1;
        tick();
        check_int("resume first word", int'(tdata_out), 32'h00000022);
        check_bit("resume tlast from skid", tlast_out, 1'b1);
        tvalid = 1'b0;
        tlast = 1'b0;
        tdata = '0;
        tick();
        check_bit("no duplicate valid after consume", tvalid_out, 1'b0);

        if (errors == 0) begin
            $display("tb_axi_slave PASS");
            $finish;
        end else begin
            $display("tb_axi_slave FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
