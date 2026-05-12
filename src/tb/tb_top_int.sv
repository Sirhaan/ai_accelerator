module tb_top_int;
  import pkg::*;

  // ── DUT signals ───────────────────────────────────────────────────────────────
  logic clk, rst;

  // Weight slave interface
  logic                      s_wgt_tvalid;
  logic                      s_wgt_tready;
  logic [WGT_ROW_WIDTH-1:0]  s_wgt_tdata;
  logic                      s_wgt_tlast;

  // Activation slave interface
  logic                      s_act_tvalid;
  logic                      s_act_tready;
  logic [IN_WIDTH*ROWS-1:0]  s_act_tdata;
  logic                      s_act_tlast;

  // Output master interface
  logic                      m_out_tvalid;
  logic                      m_out_tready;
  logic [OUT_ROW_WIDTH-1:0]  m_out_tdata;
  logic                      m_out_tlast;

  // Control signals
  logic                      start;
  logic                      busy;
  logic                      error;
  logic [2:0]                error_code;
  logic                      layer_complete;

  // Configuration
  logic [15:0]               cfg_num_ic;
  logic [15:0]               cfg_num_oc;
  logic [15:0]               cfg_num_spatial;
  logic [15:0]               cfg_k_depth;
  logic [15:0]               cfg_timeout;
  logic [1:0]                cfg_act_type;

  logic [SCALE_WIDTH-1:0]    cfg_inv_scale;
  logic [SCALE_WIDTH-1:0]    cfg_scale_mult;
  logic signed [ACC_WIDTH-1:0] cfg_bias [COLS];

  // Performance counters
  logic [31:0]               perf_total_cycles;
  logic [31:0]               perf_compute_cycles;
  logic [31:0]               perf_stall_cycles;
  logic [31:0]               perf_wgt_load_cycles;
  logic [31:0]               perf_drain_cycles;
  logic [31:0]               perf_tile_count;
  logic [31:0]               perf_overflow_count;
  logic [31:0]               perf_timeout_count;

  // ── Clock generation ──────────────────────────────────────────────────────────
  initial clk = 0;
  always #5 clk <= ~clk;  // 100MHz

  // ── Test vectors and stimulus ─────────────────────────────────────────────────
  logic [31:0]  wgt_stimulus   [1024];    // Weight input vectors
  logic [31:0]  act_stimulus   [512];     // Activation input vectors
  logic [31:0]  expected_out   [1024];    // Golden reference outputs
  int           num_wgt_vectors;
  int           num_act_vectors;
  int           num_expected;

  // ── Pass/fail tracking ────────────────────────────────────────────────────────
  int pass_count = 0;
  int fail_count = 0;
  int output_idx = 0;

  string wgt_file, act_file, out_file;

  task automatic check(
    input string  test_name,
    input logic   [31:0] got,
    input logic   [31:0] expected
  );
    if (got === expected) begin
      $display("PASS: %s", test_name);
      pass_count++;
    end else begin
      $display("FAIL: %s | got=0x%08x expected=0x%08x", test_name, got, expected);
      fail_count++;
    end
  endtask

  task automatic check_bit(
    input string  test_name,
    input logic   [31:0] got,
    input logic   [31:0] expected
  );
    if (got === expected) begin
      $display("PASS: %s", test_name);
      pass_count++;
    end else begin
      $display("FAIL: %s | got=%0d expected=%0d", test_name, got, expected);
      fail_count++;
    end
  endtask

  // ── DUT instantiation ─────────────────────────────────────────────────────────
  top_int dut (
    .clk              (clk),
    .rst              (rst),
    .s_wgt_tvalid     (s_wgt_tvalid),
    .s_wgt_tready     (s_wgt_tready),
    .s_wgt_tdata      (s_wgt_tdata),
    .s_wgt_tlast      (s_wgt_tlast),
    .s_act_tvalid     (s_act_tvalid),
    .s_act_tready     (s_act_tready),
    .s_act_tdata      (s_act_tdata),
    .s_act_tlast      (s_act_tlast),
    .m_out_tvalid     (m_out_tvalid),
    .m_out_tready     (m_out_tready),
    .m_out_tdata      (m_out_tdata),
    .m_out_tlast      (m_out_tlast),
    .start            (start),
    .busy             (busy),
    .error            (error),
    .error_code       (error_code),
    .layer_complete   (layer_complete),
    .cfg_num_ic       (cfg_num_ic),
    .cfg_num_oc       (cfg_num_oc),
    .cfg_num_spatial  (cfg_num_spatial),
    .cfg_k_depth      (cfg_k_depth),
    .cfg_timeout      (cfg_timeout),
    .cfg_act_type     (cfg_act_type),
    .cfg_inv_scale    (cfg_inv_scale),
    .cfg_scale_mult   (cfg_scale_mult),
    .cfg_bias         (cfg_bias),
    .perf_total_cycles    (perf_total_cycles),
    .perf_compute_cycles  (perf_compute_cycles),
    .perf_stall_cycles    (perf_stall_cycles),
    .perf_wgt_load_cycles (perf_wgt_load_cycles),
    .perf_drain_cycles    (perf_drain_cycles),
    .perf_tile_count      (perf_tile_count),
    .perf_overflow_count  (perf_overflow_count),
    .perf_timeout_count   (perf_timeout_count)
  );

  // ── Load golden reference vectors from simulation arguments ─────────────────
  initial begin
    if ($value$plusargs("wgt_file=%s", wgt_file)) begin
      $readmemh(wgt_file, wgt_stimulus);
      $display("[INFO] Loaded weight vectors from %s", wgt_file);
    end else begin
      $display("[WARN] No +wgt_file specified");
    end

    if ($value$plusargs("act_file=%s", act_file)) begin
      $readmemh(act_file, act_stimulus);
      $display("[INFO] Loaded activation vectors from %s", act_file);
    end else begin
      $display("[WARN] No +act_file specified");
    end

    if ($value$plusargs("out_file=%s", out_file)) begin
      $readmemh(out_file, expected_out);
      $display("[INFO] Loaded expected output vectors from %s", out_file);
    end else begin
      $display("[WARN] No +out_file specified");
    end
  end

  // ── Test sequence ─────────────────────────────────────────────────────────────
  initial begin
    $timeformat(-9, 2, " ns", 10);

    $display("╔════════════════════════════════════════════════════════╗");
    $display("║       AI Accelerator Top-Level Testbench               ║");
    $display("╚════════════════════════════════════════════════════════╝");

    // Initialize signals
    rst = 1;
    s_wgt_tvalid = 0;
    s_act_tvalid = 0;
    m_out_tready = 1;
    start = 0;
    cfg_num_ic = 16'd4;
    cfg_num_oc = 16'd4;
    cfg_num_spatial = 16'd1;
    cfg_k_depth = 16'd4;
    cfg_timeout = 16'd1000;
    cfg_act_type = ACT_RELU;
    cfg_inv_scale = 16'h4000;
    cfg_scale_mult = 16'h4000;

    for (int i = 0; i < COLS; i++) begin
      cfg_bias[i] = 0;
    end

    // Reset for 4 clock cycles
    repeat(4) @(posedge clk);
    rst = 0;
    $display("\n[%t] Reset released", $time);

    // Wait for vectors to load
    repeat(10) @(posedge clk);

    // ── Test 1: Control signals ────────────────────────────────────────────────
    $display("\n┌─ Test 1: Control Signal Check ─────────────────────┐");
    check_bit("busy should be 0 after reset", busy, 1'b0);
    check_bit("error should be 0 after reset", error, 1'b0);
    check_bit("error_code should be 0 after reset", error_code, 3'd0);
    $display("└──────────────────────────────────────────────────┘");

    // ── Test 2: Stream data ────────────────────────────────────────────────────
    $display("\n┌─ Test 2: Streaming Test Data ──────────────────────┐");
    
    fork
      begin
        @(posedge clk);
        for (int i = 0; i < 4; i++) begin
          s_wgt_tvalid = 1;
          s_wgt_tdata = wgt_stimulus[i];
          s_wgt_tlast = (i == 3) ? 1 : 0;
          @(posedge clk);
        end
        s_wgt_tvalid = 0;
        $display("Weights streamed");
      end

      begin
        @(posedge clk);
        for (int i = 0; i < 4; i++) begin
          s_act_tvalid = 1;
          s_act_tdata = {act_stimulus[i][31:0], act_stimulus[i][31:0], act_stimulus[i][31:0], act_stimulus[i][31:0]};
          s_act_tlast = (i == 3) ? 1 : 0;
          @(posedge clk);
        end
        s_act_tvalid = 0;
        $display("Activations streamed");
      end

      begin
        repeat(5) @(posedge clk);
        start = 1;
        @(posedge clk);
        start = 0;
        $display("Start asserted");
      end
    join

    $display("└──────────────────────────────────────────────────┘");

    // ── Test 3: Output collection ──────────────────────────────────────────────
    $display("\n┌─ Test 3: Output Collection ────────────────────────┐");
    output_idx = 0;

    wait (busy);
    $display("Computation started");

    wait (!busy);
    $display("Computation complete");

    repeat(20) @(posedge clk) begin
      if (m_out_tvalid && m_out_tready) begin
        $display("  Output[%0d]: 0x%08x", output_idx, m_out_tdata);
        output_idx++;
      end
    end

    $display("└──────────────────────────────────────────────────┘");

    // ── Test 4: Performance metrics ────────────────────────────────────────────
    $display("\n┌─ Test 4: Performance Metrics ──────────────────────┐");
    $display("Total cycles:       %0d", perf_total_cycles);
    $display("Compute cycles:     %0d", perf_compute_cycles);
    $display("Stall cycles:       %0d", perf_stall_cycles);
    $display("Weight load cycles: %0d", perf_wgt_load_cycles);
    $display("Drain cycles:       %0d", perf_drain_cycles);
    $display("Tile count:         %0d", perf_tile_count);
    $display("Overflow count:     %0d", perf_overflow_count);
    $display("Timeout count:      %0d", perf_timeout_count);

    check_bit("perf_timeout_count should be 0", perf_timeout_count, 32'd0);
    check_bit("perf_total_cycles should be > 0", perf_total_cycles != 0, 1'b1);
    $display("└──────────────────────────────────────────────────┘");

    // ── Summary ─────────────────────────────────────────────────────────────────
    repeat(5) @(posedge clk);
    $display("\n╔════════════════════════════════════════════════════════╗");
    $display("║                    TEST SUMMARY                        ║");
    $display("║────────────────────────────────────────────────────────║");
    $display("║  PASSED: %0d", pass_count);
    $display("║  FAILED: %0d", fail_count);
    if (fail_count == 0)
      $display("║  ✓ ALL TESTS PASSED                                    ║");
    else
      $display("║  ✗ SOME TESTS FAILED                                   ║");
    $display("╚════════════════════════════════════════════════════════╝\n");

    $finish;
  end

  // ── Waveform dump ─────────────────────────────────────────────────────────────
  initial begin
    $dumpfile("tb_top_int.vcd");
    $dumpvars(0, tb_top_int);
  end

endmodule
