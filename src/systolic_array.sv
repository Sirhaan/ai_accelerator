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


logic wgt_load_sr [ROWS];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < ROWS; i++)
            wgt_load_sr[i] <= 1'b0;
    end else begin
        wgt_load_sr[0] <= wgt_load_strt;       // first row loads immediately
        for (int i = 1; i < ROWS; i++)
            wgt_load_sr[i] <= wgt_load_sr[i-1]; // each row one cycle later
    end
end
assign wgt_loaded = wgt_load_sr[ROWS-1];
generate
    genvar r, c;
    for (r = 0; r < ROWS; r++) begin
        assign act_h[r][0] = act_in[r];   
    end
    for (c = 0; c < COLS; c++) begin
        assign wgt_v[0][c] = wgt_in[c];  
    end
    for (r = 0; r < ROWS; r++) begin
        for (c = 0; c < COLS; c++) begin
        mac_unit pe (
            .clk(clk),
            .rst(rst),
            .enable(enable),
            .clear_acc(clear_acc),
            .wgt_load(wgt_load_sr[r]),
            .act_in(act_h[r][c]),
            .wgt_in(wgt_v[r][c]),
            .act_out(act_h[r][c+1]),
            .wgt_out(wgt_v[r+1][c]),
            .acc_out(acc_out[r][c]),
            .overflow_flag(overflow[r][c])
        );
        end
    end
endgenerate

    
endmodule
