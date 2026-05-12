module systolic_array
import pkg::*;
(
        input  logic                             clk, rst,
    input  logic                             enable,
    input  logic                             clear_acc,
    input  logic                             wgt_load_strt,
    input  logic signed [ACT_WIDTH-1:0]     act_in [ROWS],
    input  logic signed [WGT_WIDTH-1:0]     wgt_in [COLS],
    output logic signed [ACC_WIDTH-1:0]     acc_out [ROWS][COLS],
        output logic                             overflow[ROWS][COLS],
    output logic                             wgt_loaded 
);
logic signed [ACT_WIDTH-1:0] act_h [ROWS][COLS+1];
logic signed [WGT_WIDTH-1:0] wgt_v [ROWS+1][COLS];


localparam int unsigned WGT_LOAD_CNT_WIDTH = $clog2(ROWS+1);
logic wgt_load_active;
logic [WGT_LOAD_CNT_WIDTH-1:0] wgt_load_cnt;
logic wgt_load_en;
localparam logic [WGT_LOAD_CNT_WIDTH-1:0] WGT_LOAD_LAST =
    WGT_LOAD_CNT_WIDTH'(ROWS - 1);

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        wgt_load_active <= 1'b0;
        wgt_load_cnt <= '0;
    end else begin
        if (wgt_load_strt) begin
            wgt_load_active <= 1'b1;
            wgt_load_cnt <= 1;
        end else if (wgt_load_active) begin
            if (wgt_load_cnt == WGT_LOAD_LAST) begin
                wgt_load_active <= 1'b0;
                wgt_load_cnt <= '0;
            end else begin
                wgt_load_cnt <= wgt_load_cnt + 1'b1;
            end
        end
    end
end
assign wgt_load_en = wgt_load_strt || wgt_load_active;
assign wgt_loaded = wgt_load_active && (wgt_load_cnt == WGT_LOAD_LAST);

generate
    genvar r, c;
    for (r = 0; r < ROWS; r++) begin : gen_row
        for (c = 0; c < COLS; c++) begin : gen_col
        mac_unit pe (
            .clk(clk),
            .rst(rst),
            .enable(enable),
            .clear_acc(clear_acc),
            .wgt_load(wgt_load_en),
            .act_in((c == 0) ? act_in[r] : act_h[r][c]),
            .wgt_in((r == 0) ? wgt_in[c] : wgt_v[r][c]),
            .act_out(act_h[r][c+1]),
            .wgt_out(wgt_v[r+1][c]),
            .acc_out(acc_out[r][c]),
            .overflow_flag(overflow[r][c])
        );
        end
    end
endgenerate

    
endmodule
