module tb_controller_fsm;
    import pkg::*;

    logic clk, rst, start;
    logic [15:0] cfg_num_ic, cfg_num_oc, cfg_num_spatial, cfg_k_depth, cfg_timeout;
    logic [1:0] cfg_act_type;
    logic wgt_buf_ready, act_buf_ready, wgt_rd_next, act_rd_next, act_rd_rst, bank_swap;
    logic wgt_load_start, enable, clear_acc, acc_valid, pp_done;
    logic [1:0] act_type;
    logic m_out_tvalid, m_out_tlast, m_out_tready;
    logic busy, error;
    logic [2:0] error_code;
    logic any_overflow;
    logic [31:0] perf_total_cycles, perf_compute_cycles, perf_stall_cycles;
    logic [31:0] perf_wgt_load_cycles, perf_drain_cycles, perf_tile_count;
    logic [31:0] perf_overflow_count, perf_timeout_count;

    int errors;
    int clear_seen;
    int load_seen;

    controller_fsm dut (.*);

    initial clk = 1'b0;
    always #5 clk = ~clk;

    task automatic tick;
        @(posedge clk);
        #1;
    endtask

    task automatic check_bit(input string name, input logic got, input logic exp);
        if (got !== exp) begin
            $display("FAIL %s: got %0b expected %0b", name, got, exp);
            errors++;
        end else $display("PASS %s", name);
    endtask

    task automatic check_int(input string name, input int got, input int exp);
        if (got !== exp) begin
            $display("FAIL %s: got %0d expected %0d", name, got, exp);
            errors++;
        end else $display("PASS %s", name);
    endtask

    task automatic reset_dut;
        rst = 1'b1;
        start = 0;
        cfg_num_ic = 1;
        cfg_num_oc = 1;
        cfg_num_spatial = 1;
        cfg_k_depth = 2;
        cfg_timeout = 16'h00ff;
        cfg_act_type = ACT_RELU;
        wgt_buf_ready = 0;
        act_buf_ready = 0;
        pp_done = 0;
        m_out_tready = 0;
        any_overflow = 0;
        clear_seen = 0;
        load_seen = 0;
        repeat (2) tick();
        rst = 1'b0;
        tick();
    endtask

    task automatic start_layer;
        start = 1'b1;
        tick();
        start = 1'b0;
    endtask

    initial begin
        errors = 0;
        reset_dut();

        start_layer();
        check_bit("start sets busy", busy, 1'b1);
        check_bit("wait buffers no reads", wgt_rd_next | act_rd_next, 1'b0);
        wgt_buf_ready = 1'b1;
        act_buf_ready = 1'b1;
        tick();
        wgt_buf_ready = 1'b0;
        act_buf_ready = 1'b0;
        repeat (ROWS + 1) begin
            if (wgt_load_start) load_seen++;
            if (clear_acc) clear_seen++;
            tick();
        end
        check_int("load weight start pulses once", load_seen, 1);
        check_int("clear_acc on first IC tile", clear_seen, 1);
        check_bit("compute enables array", enable, 1'b1);
        repeat (cfg_k_depth + MAC_LATENCY + 2) tick();
        check_bit("acc_valid eventually pulses", acc_valid, 1'b1);
        pp_done = 1'b1;
        tick();
        pp_done = 1'b0;
        check_bit("output valid after pp_done", m_out_tvalid, 1'b1);
        check_bit("single tile output last", m_out_tlast, 1'b1);
        m_out_tready = 1'b1;
        tick();
        m_out_tready = 1'b0;
        tick();
        check_bit("returns idle after single tile", busy, 1'b0);
        check_int("act_type registered", int'(act_type), int'(ACT_RELU));
        check_bit("perf tile count increments", perf_tile_count != 0, 1'b1);

        reset_dut();
        cfg_timeout = 2;
        start_layer();
        repeat (5) tick();
        check_bit("watchdog timeout fires", error, 1'b1);
        check_int("wait buffer timeout error code", int'(error_code), 1);
        check_bit("timeout perf increments", perf_timeout_count != 0, 1'b1);

        reset_dut();
        cfg_num_ic = 2;
        start_layer();
        wgt_buf_ready = 1'b1;
        act_buf_ready = 1'b1;
        tick();
        wgt_buf_ready = 1'b0;
        act_buf_ready = 1'b0;
        clear_seen = 0;
        repeat (80) begin
            if (clear_acc) clear_seen++;
            if (acc_valid) pp_done = 1'b1;
            else pp_done = 1'b0;
            tick();
        end
        check_int("IC loop clears only first IC tile", clear_seen, 1);

        if (errors == 0) begin
            $display("tb_controller_fsm PASS");
            $finish;
        end else begin
            $display("tb_controller_fsm FAIL errors=%0d", errors);
            $fatal(1);
        end
    end
endmodule
