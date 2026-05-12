module top_int
  import pkg::*;(
    input  logic clk,
    input  logic rst,

    input  logic                           s_wgt_tvalid,
    output logic                           s_wgt_tready,
    input  logic [WGT_ROW_WIDTH-1:0]       s_wgt_tdata,
    input  logic                           s_wgt_tlast,

    input  logic                           s_act_tvalid,
    output logic                           s_act_tready,
    input  logic [IN_WIDTH*ROWS-1:0]   s_act_tdata,
    input  logic                           s_act_tlast,

    output logic                           m_out_tvalid,
    input  logic                           m_out_tready,
    output logic [OUT_ROW_WIDTH-1:0]       m_out_tdata,
    output logic                           m_out_tlast,

    input  logic                           start,
    output logic                           busy,
    output logic                           error,
    output logic [2:0]                     error_code,
    output logic                           layer_complete,

    input  logic [15:0]  cfg_num_ic,
    input  logic [15:0]  cfg_num_oc,
    input  logic [15:0]  cfg_num_spatial,
    input  logic [15:0]  cfg_k_depth,
    input  logic [15:0]  cfg_timeout,
    input  logic [1:0]   cfg_act_type,

    input  logic [SCALE_WIDTH-1:0]         cfg_inv_scale,
    input  logic [SCALE_WIDTH-1:0]         cfg_scale_mult,

    input  logic signed [ACC_WIDTH-1:0]    cfg_bias [COLS],

    output logic [31:0]  perf_total_cycles,
    output logic [31:0]  perf_compute_cycles,
    output logic [31:0]  perf_stall_cycles,
    output logic [31:0]  perf_wgt_load_cycles,
    output logic [31:0]  perf_drain_cycles,
    output logic [31:0]  perf_tile_count,
    output logic [31:0]  perf_overflow_count,
    output logic [31:0]  perf_timeout_count
);

logic [WGT_ROW_WIDTH-1:0]      wgt_s2sram_data;
logic                          wgt_s2sram_valid;
logic                          wgt_s2sram_ready;
logic                          wgt_s2sram_last;

logic [IN_WIDTH*ROWS-1:0]  act_s2quant_data;
logic                          act_s2quant_valid;
logic                          act_s2quant_last;

logic [ACT_ROW_WIDTH-1:0]      act_q2sram_data;
logic [1:0]                    act_valid_sr;
logic [1:0]                    act_last_sr;
logic                          act_q2sram_valid;
logic                          act_q2sram_last;
logic [ROWS-1:0]               quant_clip;

logic [WGT_ROW_WIDTH-1:0]      wgt_rd_data;
logic                          wgt_rd_valid;
logic [ACT_ROW_WIDTH-1:0]      act_rd_data;
logic                          act_rd_valid;

logic signed [WGT_WIDTH-1:0]   wgt_in_arr  [COLS];
logic signed [ACT_WIDTH-1:0]   act_in_arr  [ROWS];

logic signed [ACC_WIDTH-1:0]   acc_out_arr [ROWS][COLS];
logic                          overflow_arr[ROWS][COLS];
logic                          any_overflow;
logic                          wgt_loaded;

logic signed [ACT_WIDTH-1:0]   pp_data_out [ROWS][COLS];
logic [ROWS-1:0]               pp_out_valid;
logic [ROWS-1:0]               pp_any_sat;

logic [OUT_ROW_WIDTH-1:0]      pp_packed [ROWS];

logic [$clog2(ROWS)-1:0]       out_row_cnt;
logic                          out_buf_valid;
logic [OUT_ROW_WIDTH-1:0]      out_buf [ROWS];
logic [OUT_ROW_WIDTH-1:0]      out_mux_data;
logic                          out_mux_valid;
logic                          out_mux_last;
logic                          out_mux_ready;

logic                          fsm_wgt_load_start;
logic                          fsm_enable;
logic                          fsm_clear_acc;
logic                          fsm_wgt_rd_next;
logic                          fsm_act_rd_next;
logic                          fsm_act_rd_rst;
logic                          fsm_bank_swap;
logic                          fsm_acc_valid;
logic [1:0]                    fsm_act_type;
logic                          fsm_m_out_tlast;

logic                          sram_wgt_buf_ready;
logic                          sram_act_buf_ready;
logic                          sram_wgt_buf_ready_lat;
logic                          sram_act_buf_ready_lat;

logic                          pp_done_to_fsm;

axi_slave #(
    .DATA_WIDTH(WGT_ROW_WIDTH)
) u_wgt_slave (
    .clk        (clk),
    .rst        (rst),
    .tvalid   (s_wgt_tvalid),
    .tready   (s_wgt_tready),
    .tdata    (s_wgt_tdata),
    .tlast    (s_wgt_tlast),
    .tvalid_out  (wgt_s2sram_valid),
    .tready_out  (wgt_s2sram_ready),
    .tdata_out   (wgt_s2sram_data),
    .tlast_out   (wgt_s2sram_last)
);

axi_slave #(
    .DATA_WIDTH(IN_WIDTH*ROWS)
) u_act_slave (
    .clk        (clk),
    .rst        (rst),
    .tvalid   (s_act_tvalid),
    .tready   (s_act_tready),
    .tdata    (s_act_tdata),
    .tlast    (s_act_tlast),
    .tvalid_out  (act_s2quant_valid),
    .tready_out  (1'b1),             // quantizer never stalls
    .tdata_out   (act_s2quant_data),
    .tlast_out   (act_s2quant_last)
);

// ─────────────────────────────────────────────────────────────────────────────
// 3. Activation Quantizers — ROWS instances in parallel
//    Each handles one element of the activation row
// ─────────────────────────────────────────────────────────────────────────────
genvar qi;
generate
    for (qi = 0; qi < ROWS; qi++) begin : gen_quant
        quant  u_quant (
            .clk        (clk),
            .rst        (rst),
            .enable     (1'b1),
            .data_in    (act_s2quant_data[qi*IN_WIDTH +: IN_WIDTH]),
            .inv_scale  (cfg_inv_scale),
            .data_out   (act_q2sram_data[qi*ACT_WIDTH +: ACT_WIDTH]),
            .clip_flag  (quant_clip[qi])
        );
    end
endgenerate

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        act_valid_sr <= '0;
        act_last_sr  <= '0;
    end else begin
        act_valid_sr <= {act_valid_sr[0], act_s2quant_valid};
        act_last_sr  <= {act_last_sr[0],  act_s2quant_last};
    end
end

assign act_q2sram_valid = act_valid_sr[1];
assign act_q2sram_last  = act_last_sr[1];

sram_controller u_sram (
    .clk              (clk),
    .rst              (rst),

    .s_wgt_tvalid     (wgt_s2sram_valid),
    .s_wgt_tready     (wgt_s2sram_ready),
    .s_wgt_tdata      (wgt_s2sram_data),
    .s_wgt_tlast      (wgt_s2sram_last),

    .s_act_tvalid     (act_q2sram_valid),
    .s_act_tready     (),
    .s_act_tdata      (act_q2sram_data),
    .s_act_tlast      (act_q2sram_last),

    .bank_swap        (fsm_bank_swap),
    .wgt_rd_next      (fsm_wgt_rd_next),
    .act_rd_next      (fsm_act_rd_next),
    .act_rd_rst       (fsm_act_rd_rst),

    .wgt_rd_data      (wgt_rd_data),
    .wgt_rd_valid     (wgt_rd_valid),
    .act_rd_data      (act_rd_data),
    .act_rd_valid     (act_rd_valid),

    .wgt_buf_ready    (sram_wgt_buf_ready),
    .act_buf_ready    (sram_act_buf_ready),
    .wgt_tlast_seen   (),
    .act_tlast_seen   ()
);

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        sram_wgt_buf_ready_lat <= 1'b0;
        sram_act_buf_ready_lat <= 1'b0;
    end else if (~busy) begin
        sram_wgt_buf_ready_lat <= 1'b0;
        sram_act_buf_ready_lat <= 1'b0;
    end else begin
        if (sram_wgt_buf_ready) sram_wgt_buf_ready_lat <= 1'b1;
        if (sram_act_buf_ready) sram_act_buf_ready_lat <= 1'b1;
    end
end

genvar ui;
generate
    for (ui = 0; ui < COLS; ui++) begin : gen_wgt_unpack
        assign wgt_in_arr[ui] = $signed(wgt_rd_data[ui*WGT_WIDTH +: WGT_WIDTH]);
    end
    for (ui = 0; ui < ROWS; ui++) begin : gen_act_unpack
        assign act_in_arr[ui] = $signed(act_rd_data[ui*ACT_WIDTH +: ACT_WIDTH]);
    end
endgenerate

systolic_array u_array (
    .clk            (clk),
    .rst            (rst),
    .enable         (fsm_enable),
    .clear_acc      (fsm_clear_acc),
    .wgt_load_strt (fsm_wgt_load_start),
    .act_in         (act_in_arr),
    .wgt_in         (wgt_in_arr),
    .acc_out        (acc_out_arr),
    .overflow       (overflow_arr),
    .wgt_loaded     (wgt_loaded)
);

logic [ROWS*COLS-1:0] ovf_flat;
genvar fi, fj;
generate
    for (fi = 0; fi < ROWS; fi++) begin : gen_ovf_r
        for (fj = 0; fj < COLS; fj++) begin : gen_ovf_c
            assign ovf_flat[fi*COLS + fj] = overflow_arr[fi][fj];
        end
    end
endgenerate

assign any_overflow = |ovf_flat;

genvar pi;
generate
    for (pi = 0; pi < ROWS; pi++) begin : gen_pp
        post_process
             u_pp (
            .clk            (clk),
            .rst            (rst),
            .enable         (1'b1),
            .act_type       (fsm_act_type),
            .scale_mult     (cfg_scale_mult),
            .bias           (cfg_bias),
            .acc_in         (acc_out_arr[pi]),  // row pi of accumulator
            .acc_valid      (fsm_acc_valid),
            .data_out       (pp_data_out[pi]),
            .out_valid      (pp_out_valid[pi]),
            .any_saturated  (pp_any_sat[pi])
        );

        // Pack int8 output array into flat vector for output mux
        for (genvar c = 0; c < COLS; c++) begin : gen_pp_pack
            assign pp_packed[pi][c*ACT_WIDTH +: ACT_WIDTH] = pp_data_out[pi][c];
        end
    end
endgenerate

// ─────────────────────────────────────────────────────────────────────────────
// Output Row Serializer
//   Captures all ROWS post_process outputs when they complete (same cycle)
//   then feeds them one at a time to axis_master
//   ROWS=8 so 8 sequential transfers per tile
// ─────────────────────────────────────────────────────────────────────────────

// Capture all rows into output buffer when post_process completes
// All ROWS instances complete simultaneously (same acc_valid → same latency)
genvar bi;
generate
    for (bi = 0; bi < ROWS; bi++) begin : gen_out_buf
        always_ff @(posedge clk or posedge rst) begin
            if (rst)
                out_buf[bi] <= '0;
            else if (pp_out_valid[bi])
                out_buf[bi] <= pp_packed[bi];
        end
    end
endgenerate

always_ff @(posedge clk or posedge rst) begin
    if (rst)
        out_buf_valid <= 1'b0;
    else if (pp_out_valid[0])                               // all rows ready
        out_buf_valid <= 1'b1;
    else if (out_row_cnt == ROWS-1 && out_mux_valid
             && out_mux_ready)
        out_buf_valid <= 1'b0;
end

// Row counter — advances on each accepted transfer
always_ff @(posedge clk or posedge rst) begin
    if (rst)
        out_row_cnt <= '0;
    else if (out_buf_valid && out_mux_ready) begin
        if (out_row_cnt == ROWS-1)
            out_row_cnt <= '0;
        else
            out_row_cnt <= out_row_cnt + 1'b1;
    end
end

assign out_mux_data  = out_buf[out_row_cnt];
assign out_mux_valid = out_buf_valid;

assign out_mux_last  = fsm_m_out_tlast &&
                       (out_row_cnt == ROWS - 1);

assign pp_done_to_fsm = (out_row_cnt == ROWS-1) &&
                         out_buf_valid            &&
                         out_mux_ready;

axi_master  u_out_master (
    .clk        (clk),
    .rst        (rst),
    .tvalid   (m_out_tvalid),
    .tready   (m_out_tready),
    .tdata    (m_out_tdata),
    .tlast    (m_out_tlast),
    .tvalid_in   (out_mux_valid),
    .tready_in   (out_mux_ready),
    .tdata_in    (out_mux_data),
    .tlast_in    (out_mux_last)
);

controller_fsm u_fsm (
    .clk                (clk),
    .rst                (rst),

    .start              (start),

    .cfg_num_ic         (cfg_num_ic),
    .cfg_num_oc         (cfg_num_oc),
    .cfg_num_spatial    (cfg_num_spatial),
    .cfg_k_depth        (cfg_k_depth),
    .cfg_timeout        (cfg_timeout),
    .cfg_act_type       (cfg_act_type),

    .wgt_buf_ready      (sram_wgt_buf_ready_lat),
    .act_buf_ready      (sram_act_buf_ready_lat),
    .wgt_rd_next        (fsm_wgt_rd_next),
    .act_rd_next        (fsm_act_rd_next),
    .act_rd_rst         (fsm_act_rd_rst),
    .bank_swap          (fsm_bank_swap),

    .wgt_load_start     (fsm_wgt_load_start),
    .enable             (fsm_enable),
    .clear_acc          (fsm_clear_acc),

    .acc_valid          (fsm_acc_valid),
    .act_type           (fsm_act_type),
    .pp_done            (pp_done_to_fsm),

    .m_out_tvalid       (),
    .m_out_tlast        (fsm_m_out_tlast),
    .m_out_tready       (pp_done_to_fsm),

    .busy               (busy),
    .error              (error),
    .error_code         (error_code),

    .any_overflow       (any_overflow),

    .perf_total_cycles    (perf_total_cycles),
    .perf_compute_cycles  (perf_compute_cycles),
    .perf_stall_cycles    (perf_stall_cycles),
    .perf_wgt_load_cycles (perf_wgt_load_cycles),
    .perf_drain_cycles    (perf_drain_cycles),
    .perf_tile_count      (perf_tile_count),
    .perf_overflow_count  (perf_overflow_count),
    .perf_timeout_count   (perf_timeout_count)
);

assign layer_complete = m_out_tlast && m_out_tvalid && m_out_tready;

endmodule
