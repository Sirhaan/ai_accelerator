// ===========================================================================
// Module: sram_controller.sv
// Description:
//   Dual-port SRAM controller for weight and activation storage.
//
//   Write side: AXI4-Stream — data arrives in order, write pointer
//               increments automatically. No address calculation needed.
//
//   Read side:  FSM-controlled — sequential read pointer incremented
//               by rd_next pulses from FSM. One row per cycle.
//
//   Weight banks: ping-pong (bank A / bank B)
//     - Active bank feeds systolic array reads
//     - Inactive bank accepts new weight stream writes
//     - bank_swap toggles which is active
//
//   Activation: single bank, written by stream, read during COMPUTE
// ===========================================================================

module sram_controller
  import pkg::*;
(
    input  logic clk,
    input  logic rst,

    // ── Weight stream input (AXI4-Stream) ────────────────────────────────────
    // One transfer = one full weight row = COLS × WGT_WIDTH bits
    input  logic                       s_wgt_tvalid,
    output logic                       s_wgt_tready,
    input  logic [WGT_ROW_WIDTH-1:0]   s_wgt_tdata,
    input  logic                       s_wgt_tlast,   // last row of this tile

    // ── Activation stream input (AXI4-Stream) ────────────────────────────────
    // One transfer = one full activation row = ROWS × ACT_WIDTH bits
    input  logic                       s_act_tvalid,
    output logic                       s_act_tready,
    input  logic [ACT_ROW_WIDTH-1:0]   s_act_tdata,
    input  logic                       s_act_tlast,   // last token of sequence

    // ── FSM control ───────────────────────────────────────────────────────────
    input  logic                       bank_swap,     // toggle active weight bank
    input  logic                       wgt_rd_next,   // advance weight read pointer
    input  logic                       act_rd_next,   // advance act read pointer
    input  logic                       act_rd_rst,    // reset act read pointer (new tile)

    // ── Read data outputs → systolic array ───────────────────────────────────
    output logic [WGT_ROW_WIDTH-1:0]   wgt_rd_data,   // wgt_in[COLS] packed
    output logic                       wgt_rd_valid,

    output logic [ACT_ROW_WIDTH-1:0]   act_rd_data,   // act_in[ROWS] packed
    output logic                       act_rd_valid,

    // ── Status ────────────────────────────────────────────────────────────────
    output logic                       wgt_buf_ready,  // inactive bank has full tile
    output logic                       act_buf_ready,  // act SRAM has full tile
    output logic                       wgt_tlast_seen, // weight stream complete
    output logic                       act_tlast_seen  // activation stream complete
);

// ── Ping-pong bank select ─────────────────────────────────────────────────────
// bank_sel=0: bank A active (read), bank B inactive (write)
// bank_sel=1: bank B active (read), bank A inactive (write)
logic bank_sel;

always_ff @(posedge clk or posedge rst) begin
    if (rst)           bank_sel <= 1'b0;
    else if (bank_swap) bank_sel <= ~bank_sel;
end

// ── Weight SRAM — two banks (ping-pong) ───────────────────────────────────────
// Each bank: WGT_SRAM_DEPTH rows × WGT_ROW_WIDTH bits
logic [WGT_ROW_WIDTH-1:0] wgt_bank_a [WGT_SRAM_DEPTH];
logic [WGT_ROW_WIDTH-1:0] wgt_bank_b [WGT_SRAM_DEPTH];

// Write pointer — increments on every accepted stream transfer
// Always writes to INACTIVE bank
logic [WGT_SRAM_AWIDTH-1:0] wgt_wr_ptr;
logic                        wgt_wr_en;
logic                        wgt_wr_done; // went high on tlast

assign wgt_wr_en      = s_wgt_tvalid && s_wgt_tready;
assign s_wgt_tready   = 1'b1; // always ready — SRAM writes never stall
                               // stream must not overflow WGT_SRAM_DEPTH

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        wgt_wr_ptr  <= '0;
        wgt_wr_done <= 1'b0;
    end else if (wgt_wr_en) begin
        // Write to inactive bank
        if (!bank_sel)
            wgt_bank_b[wgt_wr_ptr] <= s_wgt_tdata;  // bank_sel=0 → B is inactive
        else
            wgt_bank_a[wgt_wr_ptr] <= s_wgt_tdata;  // bank_sel=1 → A is inactive

        if (s_wgt_tlast) begin
            wgt_wr_ptr  <= '0;       // reset for next tile
            wgt_wr_done <= 1'b1;
        end else begin
            wgt_wr_ptr  <= wgt_wr_ptr + 1'b1;
            wgt_wr_done <= 1'b0;
        end
    end else begin
        wgt_wr_done <= 1'b0;
    end
end

assign wgt_tlast_seen = wgt_wr_done;
assign wgt_buf_ready  = wgt_wr_done;

// Read pointer — incremented by FSM each cycle during LOAD_WEIGHTS
// Always reads from ACTIVE bank
logic [WGT_SRAM_AWIDTH-1:0] wgt_rd_ptr;

always_ff @(posedge clk or posedge rst) begin
    if (rst)
        wgt_rd_ptr <= '0;
    else if (wgt_rd_next)
        wgt_rd_ptr <= wgt_rd_ptr + 1'b1;
    else if (bank_swap)
        wgt_rd_ptr <= '0;   // reset read pointer when swapping to new tile
end

// Read data: 1-cycle registered output
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        wgt_rd_data  <= '0;
        wgt_rd_valid <= 1'b0;
    end else begin
        wgt_rd_valid <= wgt_rd_next;   // valid one cycle after rd_next
        wgt_rd_data  <= bank_sel ?
                        wgt_bank_b[wgt_rd_ptr] :  // bank_sel=1 → B active
                        wgt_bank_a[wgt_rd_ptr];   // bank_sel=0 → A active
    end
end

// ── Activation SRAM — single bank ────────────────────────────────────────────
logic [ACT_ROW_WIDTH-1:0] act_sram [ACT_SRAM_DEPTH];

// Write pointer — increments on every accepted stream transfer
logic [ACT_SRAM_AWIDTH-1:0] act_wr_ptr;
logic                        act_wr_en;
logic                        act_wr_done;

assign act_wr_en    = s_act_tvalid && s_act_tready;
assign s_act_tready = 1'b1;  // always ready

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        act_wr_ptr  <= '0;
        act_wr_done <= 1'b0;
    end else if (act_wr_en) begin
        act_sram[act_wr_ptr] <= s_act_tdata;

        if (s_act_tlast) begin
            act_wr_ptr  <= '0;
            act_wr_done <= 1'b1;
        end else begin
            act_wr_ptr  <= act_wr_ptr + 1'b1;
            act_wr_done <= 1'b0;
        end
    end else begin
        act_wr_done <= 1'b0;
    end
end

assign act_tlast_seen = act_wr_done;
assign act_buf_ready  = act_wr_done;

// Read pointer — incremented by FSM each cycle during COMPUTE
logic [ACT_SRAM_AWIDTH-1:0] act_rd_ptr;

always_ff @(posedge clk or posedge rst) begin
    if (rst)
        act_rd_ptr <= '0;
    else if (act_rd_rst)
        act_rd_ptr <= '0;   // reset at start of each new token pass
    else if (act_rd_next)
        act_rd_ptr <= act_rd_ptr + 1'b1;
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        act_rd_data  <= '0;
        act_rd_valid <= 1'b0;
    end else begin
        act_rd_valid <= act_rd_next;
        act_rd_data  <= act_sram[act_rd_ptr];
    end
end

endmodule   