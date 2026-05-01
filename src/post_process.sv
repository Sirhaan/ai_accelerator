module post_process 
import pkg::*;
(
input logic                           clk,rst,enable,
input logic [1:0]                       act_type,
  input  logic [SCALE_WIDTH-1:0]       scale_mult,  // (S_act×S_wgt/S_out) Q1.15
    input  logic signed [ACC_WIDTH-1:0]  bias   [COLS], // int32 per column
    input  logic signed [ACC_WIDTH-1:0]  acc_in [COLS], // from systolic array
    input  logic                         acc_valid,

    output logic signed [ACT_WIDTH-1:0]  data_out [COLS],
    output logic                         out_valid,
    output logic                         any_saturated

);
localparam logic [1:0] ACT_LINEAR = 2'd0;
localparam logic [1:0] ACT_RELU   = 2'd1;
localparam logic [1:0] ACT_GELU   = 2'd2;

localparam signed [ACT_WIDTH-1:0] Q_MAX =  127;
localparam signed [ACT_WIDTH-1:0] Q_MIN = -127;
localparam PROD_WIDTH = ACC_WIDTH + SCALE_WIDTH; // 48 bits
localparam BIASED_WIDTH = ACC_WIDTH + SCALE_WIDTH + 1; // 49 bits (OVERFLOW_BIT for saturation detection)
localparam SHIFT_WIDTH = BIASED_WIDTH - SCALE_FRAC; // 34 bits for shift operations
localparam LUT_ENTRIES = 1024;
localparam LUT_ADDR    = 10;
localparam signed [BIASED_WIDTH-1:0] FP_WIN = (4 <<< SCALE_FRAC);
// Bit-slice positions in offset value (after +FP_WIN)
// offset = stage2_biased + FP_WIN → [0, 2×FP_WIN] = [0, 2^18]
// Take bits [17:8] for 10-bit index with 1/128 resolution
localparam LUT_MSB = SCALE_FRAC + 2;  // 17
localparam LUT_LSB = SCALE_FRAC - 7;  // 8
logic signed [ACT_WIDTH-1:0] gelu_lut [LUT_ENTRIES];
initial $readmemh("gelu_lut.hex", gelu_lut);
//stage 1 multiply acc and scale 
logic signed [PROD_WIDTH-1:0] s1_scaled [COLS];
logic s1_valid;
always_ff @(posedge clk or posedge rst) begin : STAGE1
    if (rst) begin
        for (int i = 0; i < COLS; i++)
            s1_scaled[i] <= '0;
        s1_valid <= 1'b0;
    end else if (enable) begin
        s1_valid <= acc_valid;
        if(acc_valid) begin
        for (int c = 0; c < COLS; c++) begin
            s1_scaled[c] <= acc_in[c] * $signed({1'b0, scale_mult}); // unsigned scale_mult treated as positive signed
        end
    end 
end else begin
        s1_valid <= 1'b0;
    end
end
//stage 2 add bias 
logic signed [BIASED_WIDTH-1:0] s2_biased [COLS];
logic                           s2_valid;
    genvar i ;
generate

    for (i = 0; i < COLS; i++) begin : gen_stage2
           logic signed [BIASED_WIDTH-1:0] bias_fp;
        assign bias_fp = BIASED_WIDTH'(bias[i]) <<< SCALE_FRAC;
          always_ff @(posedge clk or posedge rst) begin
            if (rst)
                s2_biased[i] <= '0;
            else if (enable && s1_valid)
                s2_biased[i] <= BIASED_WIDTH'(s1_scaled[i]) + bias_fp;
        end
    end
    
endgenerate
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        s2_valid <= 1'b0;
    end else if (enable) begin
        s2_valid <= s1_valid;
    end else begin
        s2_valid <= 1'b0;
    end
end
    //stage 3 round +shift the aplly activation function 
    logic signed [ACT_WIDTH - 1 : 0] s3_data[COLS];
    logic s3_valid;
    logic [COLS-1:0] any_sat;


    genvar s3;
    generate
        for(s3 = 0; s3 < COLS; s3++) begin : GEN_STAGE3
            logic signed [BIASED_WIDTH-1:0]  rounded;
        logic signed [SHIFT_WIDTH-1:0]   shifted;
        assign rounded = s2_biased[s3] + BIASED_WIDTH'(1 <<< (SCALE_FRAC - 1)); // rounding
        assign shifted = rounded >>> SCALE_FRAC; // shift back to integer range
   // ── Saturation on shifted result ─────────────────────────────────────
            logic                        saturated;
        logic signed [ACT_WIDTH-1:0] pre_act;

        assign saturated = (shifted >  SHIFT_WIDTH'(signed'(Q_MAX))) ||
                           (shifted <  SHIFT_WIDTH'(signed'(Q_MIN)));

        assign pre_act   = saturated ?
                           (shifted[SHIFT_WIDTH-1] ? Q_MIN : Q_MAX) :
                            shifted[ACT_WIDTH-1:0];

    //LUT SELECTION
                 logic signed [BIASED_WIDTH-1:0] win_clamped;
        logic        [BIASED_WIDTH-1:0] win_offset;
        logic        [LUT_ADDR-1:0]     lut_idx;

        assign win_clamped = (s2_biased[s3] >  FP_WIN) ?  FP_WIN :
                             (s2_biased[s3] < -FP_WIN) ? -FP_WIN :
                              s2_biased[s3];

        // Shift window to [0, 2×FP_WIN] = [0, 2^18], then take bits [17:8]
        assign win_offset = BIASED_WIDTH'(win_clamped + FP_WIN);
        assign lut_idx    = win_offset[LUT_MSB:LUT_LSB];
        //                             [  17  :   8  ] → 10-bit index
            logic signed [ACT_WIDTH-1:0] act_result;
        always_comb begin
            case (act_type)
                ACT_LINEAR: act_result = pre_act;
                ACT_RELU:   act_result = pre_act[ACT_WIDTH-1] ? '0 : pre_act;
                ACT_GELU:   act_result = gelu_lut[lut_idx];
                default:    act_result = pre_act;
            endcase
        end
         always_ff @(posedge clk or posedge rst) begin
            if (rst) begin
                s3_data[s3] <= '0;
                any_sat[s3]   <= 1'b0;
            end else if (enable && s2_valid) begin
                s3_data[s3] <= act_result;
                any_sat[s3]   <= saturated;
            end
        end
    end
    endgenerate
always_ff @(posedge clk or posedge rst) begin
    if (rst)         s3_valid <= 1'b0;
    else if (enable) s3_valid <= s2_valid;
    else             s3_valid <= 1'b0;
end
assign data_out      = s3_data;
assign out_valid     = s3_valid;
assign any_saturated = |any_sat;


endmodule