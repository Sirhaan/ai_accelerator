module quantRELU_unit(
    input clk,
    input rst,
    input logic enable,
    input logic relu_en,
    input logic [4:0] shift_amt, // amount to right shift for quantization
    input logic signed [OUT_WIDTH-1:0] zero_point,
    input logic [ACC_WIDTH*ARRAYS_COLS - 1:0] acc_in_packed, // concatenated accumulated results from all MAC units
    input logic                               acc_valid,
    output logic [OUT_WIDTH*ARRAYS_COLS - 1:0] quant_out_packed, // concatenated activation outputs to be sent to next layer
     output logic                          quant_valid,
  output logic                          any_saturated 
);

logic signed [ACC_WIDTH-1:0] stage1_data [ARRAYS_COLS-1:0]; // unpack in
logic          stage1_valid;

genvar s1;
generate
    for (s1 = 0; s1 < ARRAYS_COLS; s1 = s1 + 1) begin : UNPACK_STAGE
        logic signed [ACT_WIDTH-1:0] acc_in_elem;
        assign acc_in_elem = $signed(acc_in_packed[(s1+1)*ACC_WIDTH-1 -: ACC_WIDTH]); // extract each accumulator result
        always_ff @(posedge clk or posedge rst) begin
            if (rst) begin
                stage1_data[s1] <= '0;

            end else if (enable && acc_valid) begin

            if(relu_en && acc_in_elem[ACC_WIDTH-1] == 1) begin
                stage1_data[s1] <= '0; // apply ReLU (set negative values to 0)
            end else begin
                stage1_data[s1] <= acc_in_elem; // pass through if not negative or ReLU disabled
            end
        end
    end
endgenerate
// second stage: quantization (right shift and add zero point)
logic signed [OUT_WIDTH-1:0] stage2_data [ARRAYS_COLS];
logic          stage2_valid;
  logic [ARRAY_COLS-1:0]       sat_flags;


    
endmodule
