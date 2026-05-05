module sram_controller
  import pkg::*;
(
    input  logic clk,
    input  logic rst,

    input  logic                       s_wgt_tvalid,
    output logic                       s_wgt_tready,
    input  logic [WGT_ROW_WIDTH-1:0]   s_wgt_tdata,
    input  logic                       s_wgt_tlast,   

    input  logic                       s_act_tvalid,
    output logic                       s_act_tready,
    input  logic [ACT_ROW_WIDTH-1:0]   s_act_tdata,
    input  logic                       s_act_tlast,   

    input  logic                       bank_swap,     

    input  logic                       wgt_rd_next,   

    input  logic                       act_rd_next,   

    input  logic                       act_rd_rst,    

    output logic [WGT_ROW_WIDTH-1:0]   wgt_rd_data,   

    output logic                       wgt_rd_valid,

    output logic [ACT_ROW_WIDTH-1:0]   act_rd_data,   

    output logic                       act_rd_valid,

    output logic                       wgt_buf_ready,  

    output logic                       act_buf_ready,  

    output logic                       wgt_tlast_seen, 

    output logic                       act_tlast_seen  

);

logic bank_sel;

always_ff @(posedge clk or posedge rst) begin
    if (rst)           bank_sel <= 1'b0;
    else if (bank_swap) bank_sel <= ~bank_sel;
end

logic [WGT_ROW_WIDTH-1:0] wgt_bank_a [WGT_SRAM_DEPTH];
logic [WGT_ROW_WIDTH-1:0] wgt_bank_b [WGT_SRAM_DEPTH];

logic [WGT_SRAM_AWIDTH-1:0] wgt_wr_ptr;
logic                        wgt_wr_en;
logic                        wgt_wr_done; 

assign wgt_wr_en      = s_wgt_tvalid && s_wgt_tready;
assign s_wgt_tready   = 1'b1; // always ready — SRAM writes never stall

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        wgt_wr_ptr  <= '0;
        wgt_wr_done <= 1'b0;
    end else if (wgt_wr_en) begin

        if (!bank_sel)
            wgt_bank_b[wgt_wr_ptr] <= s_wgt_tdata;  

        else
            wgt_bank_a[wgt_wr_ptr] <= s_wgt_tdata;  

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

logic [WGT_SRAM_AWIDTH-1:0] wgt_rd_ptr;

always_ff @(posedge clk or posedge rst) begin
    if (rst)
        wgt_rd_ptr <= '0;
    else if (wgt_rd_next)
        wgt_rd_ptr <= wgt_rd_ptr + 1'b1;
    else if (bank_swap)
        wgt_rd_ptr <= '0;   // reset read pointer when swapping to new tile
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        wgt_rd_data  <= '0;
        wgt_rd_valid <= 1'b0;
    end else begin
        wgt_rd_valid <= wgt_rd_next;   

        wgt_rd_data  <= bank_sel ?
                        wgt_bank_b[wgt_rd_ptr] :  

                        wgt_bank_a[wgt_rd_ptr];   

    end
end

logic [ACT_ROW_WIDTH-1:0] act_sram [ACT_SRAM_DEPTH];

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