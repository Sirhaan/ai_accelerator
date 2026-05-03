package pkg;
    parameter int unsigned ACT_WIDTH   = 8;
    parameter int unsigned OUT_WIDTH   = ACT_WIDTH;
    parameter int unsigned WGT_WIDTH   = ACT_WIDTH;
    parameter int unsigned ACC_WIDTH   = 32;
    parameter int unsigned IN_WIDTH    = ACC_WIDTH;
    parameter int unsigned SCALE_WIDTH = 16;
    parameter int unsigned SCALE_FRAC  = 15;
    parameter int unsigned ROWS = 4;
    parameter int unsigned COLS = 4;

    parameter logic [1:0] ACT_LINEAR = 2'd0;
    parameter logic [1:0] ACT_RELU   = 2'd1;
    parameter logic [1:0] ACT_GELU   = 2'd2;

    parameter signed [ACT_WIDTH-1:0] Q_MAX =  127;
    parameter signed [ACT_WIDTH-1:0] Q_MIN = -127;
    parameter int unsigned PROD_WIDTH   = ACC_WIDTH + SCALE_WIDTH;
    parameter int unsigned BIASED_WIDTH = ACC_WIDTH + SCALE_WIDTH + 1;
    parameter int unsigned SHIFT_WIDTH  = BIASED_WIDTH - SCALE_FRAC;
    parameter int unsigned LUT_ENTRIES  = 1024;
    parameter int unsigned LUT_ADDR     = 10;
    parameter signed [BIASED_WIDTH-1:0] FP_WIN = (4 <<< SCALE_FRAC);
    parameter int unsigned LUT_MSB = SCALE_FRAC + 2;
    parameter int unsigned LUT_LSB = SCALE_FRAC - 7;
    parameter logic [2:0] ERR_NONE     = 3'd0;
    parameter logic [2:0] ERR_DESC     = 3'd1;  // descriptor failed validation
    parameter logic [2:0] ERR_WGT_TMO  = 3'd2;  // timeout during LOAD_WEIGHTS
    parameter logic [2:0] ERR_COMP_TMO = 3'd3;  // timeout during COMPUTE
    parameter logic [2:0] ERR_DRAIN_TMO= 3'd4;  // timeout during DRAIN
    parameter logic [2:0] ERR_PP_TMO   = 3'd5;  // timeout waiting for pp_done
    parameter logic [2:0] ERR_OUT_TMO  = 3'd6;  // timeout waiting for tile_ready
     parameter int MAC_LATENCY = 3;

    parameter int WGT_SRAM_DEPTH  = 1024;
    parameter int WGT_SRAM_AWIDTH = $clog2(WGT_SRAM_DEPTH);  

    parameter int ACT_SRAM_DEPTH  = 512;
    parameter int ACT_SRAM_AWIDTH = $clog2(ACT_SRAM_DEPTH);  

    parameter int WGT_ROW_WIDTH = COLS * WGT_WIDTH;  

    parameter int ACT_ROW_WIDTH = ROWS * ACT_WIDTH;  

    parameter int OUT_ROW_WIDTH = COLS * ACT_WIDTH;  

endpackage
