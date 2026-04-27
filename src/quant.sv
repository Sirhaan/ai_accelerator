module quant
import pkg::*;
#(
    parameter IN_WIDTH = `IN_WIDTH,
    parameter SCALE_WIDTH = `SCALE_WIDTH,
    parameter SCALE_FRAC = `SCALE_FRAC,
    parameter OUT_WIDTH = `ACT_WIDTH
)(
        input  logic                           clk,
    input  logic                           rst,
    input  logic                           enable,

    input  logic signed [IN_WIDTH-1:0]  data_in,
    input  logic        [SCALE_WIDTH-1:0]  inv_scale,   // 1/S in Q1.15, unsigned

    output logic signed [OUT_WIDTH-1:0] data_out,
    output logic                           clip_flag
);

localparam signed [OUT_WIDTH-1:0] Q_MAX =  (2**(OUT_WIDTH-1)) - 1; //  127
localparam signed [OUT_WIDTH-1:0] Q_MIN = -(2**(OUT_WIDTH-1)) + 1; // -127
//stage 1: multiplication
logic signed [IN_WIDTH + SCALE_WIDTH - 1:0] scaled;
logic signed [IN_WIDTH + SCALE_WIDTH - 1:0] scaled_reg;
assign scaled = data_in * $signed({1'b0, inv_scale}); // unsigned inv_scale treated as positive signed
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        scaled_reg <= '0;
    end else if (enable) begin
        scaled_reg <= scaled; // register the scaled result
    end
end
    //stage 2: rounding
    logic signed [IN_WIDTH:0] shifted;
    logic sat_pos , sat_neg;
    assign shifted = scaled_reg + (1 <<< (SCALE_FRAC - 1)) >>>SCALE_FRAC;

    
    assign sat_pos = shifted > $signed({{(IN_WIDTH - OUT_WIDTH + 1){1'b0}}, Q_MAX});
    assign sat_neg = shifted < $signed({{(IN_WIDTH - OUT_WIDTH + 1){1'b1}}, Q_MIN});

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        data_out  <= '0;
        clip_flag <= 1'b0;
    end else if (enable) begin
        clip_flag <= sat_pos | sat_neg;
        if      (sat_pos) data_out <= Q_MAX;
        else if (sat_neg) data_out <= Q_MIN;
        else              data_out <= shifted[OUT_WIDTH-1:0];
    end
end
endmodule
