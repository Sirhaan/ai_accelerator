module mac_unit
import pkg::*;
(
    input logic clk, rst,
      input  logic                          clear_acc,   // Reset accumulator to 0
  input  logic                          enable,      // Pipeline enable (stall when low)
    input logic [ACT_WIDTH-1:0] act_in, // east input (activation from left neighbour)
    input logic [WGT_WIDTH-1:0] wgt_in, // north input (weight from upper neighbour)
    output logic [WGT_WIDTH-1:0] wgt_out, // south output (weight to lower neighbour)
    output logic [ACT_WIDTH-1:0] act_out,   // west output (MAC result to right neighbour)
     output logic [ACC_WIDTH-1:0] acc_out, // accumulated result 
     output logic overflow_flag // flag to indicate overflow in accumulation


);
// first stage 
logic signed [ACT_WIDTH-1:0] act_reg;
logic signed [WGT_WIDTH-1:0] wgt_reg;
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        act_reg <= '0;
        wgt_reg <= '0;
    end else if (clear_acc) begin
        act_reg <= '0;
        wgt_reg <= '0;
    end
    else if (enable) begin
        act_reg <= act_in;
        wgt_reg <= wgt_in;
    end
end
// 1 cycle delay in every pe hop
always_comb begin
    wgt_out = wgt_reg; // pass weight to south neighbour
    act_out =  wgt_reg; // perform multiplication 
end
// second stage: MAC operation (8x8 = 16bit result)
logic signed [ACT_WIDTH + WGT_WIDTH - 1:0] mult_result;
logic signed [ACT_WIDTH + WGT_WIDTH - 1:0] mult_reg;
assign mult_result = act_reg * wgt_reg; // multiplication result
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        mult_reg <= '0;
    end else if (clear_acc) begin
        mult_reg <= '0;
    end else if (enable) begin
        mult_reg <= mult_result; // register the multiplication result
    end
end
// third stage: accumulation
logic signed [ACC_WIDTH-1:0] acc_reg;
logic                        ovf_reg;

logic signed [ACC_WIDTH-1:0] mul_extended;

assign mul_extended = {{(ACC_WIDTH - (ACT_WIDTH + WGT_WIDTH)){mult_reg[ACT_WIDTH + WGT_WIDTH - 1]}}, mult_reg}; // sign-extend multiplication

logic signed [ACC_WIDTH-1:0] sum_next;
logic ovf_detect;
assign sum_next = acc_reg + mul_extended; // next accumulated value

assign ovf_detect = (acc_reg[ACC_WIDTH-1] == mul_extended[ACC_WIDTH-1]) &&
                      (sum_next[ACC_WIDTH-1] != acc_reg[ACC_WIDTH-1]);
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        acc_reg <= '0;  
        ovf_reg <= 1'b0;
    end else if (clear_acc) begin
        acc_reg <= '0; // reset accumulator
        ovf_reg <= 1'b0; // clear overflow flag
    end else if (enable) begin
        acc_reg <= sum_next; // update accumulator with new sum
        ovf_reg <= ovf_reg | ovf_detect; // update overflow flag
    end
end
assign acc_out = acc_reg; // output accumulated result
assign overflow_flag = ovf_reg; // output overflow flag
endmodule
