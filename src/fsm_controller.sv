module controller_fsm
  import pkg::*;
(
    input  logic clk,
    input  logic rst,

    input  logic         start,
    input  logic [15:0]  cfg_num_ic,
    input  logic [15:0]  cfg_num_oc,
    input  logic [15:0]  cfg_num_spatial,
    input  logic [15:0]  cfg_k_depth,
    input  logic [15:0]  cfg_timeout,
    input  logic [1:0]   cfg_act_type,

    input  logic         wgt_buf_ready,  

    input  logic         act_buf_ready,  

    output logic         wgt_rd_next,    

    output logic         act_rd_next,    

    output logic         act_rd_rst,     

    output logic         bank_swap,      

    output logic         wgt_load_start,
    output logic         enable,
    output logic         clear_acc,

    output logic         acc_valid,
    output logic [1:0]   act_type,
    input  logic         pp_done,

    output logic         m_out_tvalid,
    output logic         m_out_tlast,    

    input  logic         m_out_tready,

    output logic         busy,
    output logic         error,
    output logic [2:0]   error_code,

    input  logic         any_overflow,

    output logic [31:0]  perf_total_cycles,
    output logic [31:0]  perf_compute_cycles,
    output logic [31:0]  perf_stall_cycles,
    output logic [31:0]  perf_wgt_load_cycles,
    output logic [31:0]  perf_drain_cycles,
    output logic [31:0]  perf_tile_count,
    output logic [31:0]  perf_overflow_count,
    output logic [31:0]  perf_timeout_count
);

typedef enum logic [3:0] {
    S_IDLE         = 4'd0,
    S_WAIT_BUFFERS = 4'd1,   // wait for both SRAMs to be filled by streams
    S_LOAD_WEIGHTS = 4'd2,   // pulse wgt_load_start, step wgt_rd_next × ROWS
    S_COMPUTE      = 4'd3,   // step act_rd_next × k_depth
    S_DRAIN        = 4'd4,   // wait MAC_LATENCY cycles
    S_IC_ADVANCE   = 4'd5,
    S_REQUANT      = 4'd6,
    S_OUTPUT       = 4'd7,
    S_TILE_ADVANCE = 4'd8,
    S_ERROR        = 4'd9
} state_t;

state_t state, next_state;

localparam logic [2:0] ERR_NONE    = 3'd0;
localparam logic [2:0] ERR_BUF_TMO = 3'd1;
localparam logic [2:0] ERR_WGT_TMO = 3'd2;
localparam logic [2:0] ERR_COMP_TMO= 3'd3;
localparam logic [2:0] ERR_PP_TMO  = 3'd4;
localparam logic [2:0] ERR_OUT_TMO = 3'd5;

logic [15:0] r_num_ic, r_num_oc, r_num_spatial, r_k_depth, r_timeout;
logic [1:0]  r_act_type;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        r_num_ic      <= 16'd1;
        r_num_oc      <= 16'd1;
        r_num_spatial <= 16'd1;
        r_k_depth     <= 16'd1;
        r_timeout     <= 16'hFFFF;
        r_act_type    <= 2'd0;
    end else if (state == S_IDLE && start) begin
        r_num_ic      <= cfg_num_ic;
        r_num_oc      <= cfg_num_oc;
        r_num_spatial <= cfg_num_spatial;
        r_k_depth     <= cfg_k_depth;
        r_timeout     <= cfg_timeout;
        r_act_type    <= cfg_act_type;
    end
end

logic [7:0]  wgt_load_cnt;
logic [15:0] compute_cnt;
logic [3:0]  drain_cnt;

logic [15:0] cnt_ic, cnt_oc, cnt_spatial;

logic [15:0] watchdog_cnt;
logic        watchdog_timeout;

assign watchdog_timeout = (watchdog_cnt >= r_timeout) &&
                          (state != S_IDLE) &&
                          (state != S_ERROR);

always_ff @(posedge clk or posedge rst) begin
    if (rst)                   watchdog_cnt <= '0;
    else if (state != next_state) watchdog_cnt <= '0;
    else                       watchdog_cnt <= watchdog_cnt + 1'b1;
end

logic [2:0] err_code_reg;

always_ff @(posedge clk or posedge rst) begin
    if (rst) err_code_reg <= ERR_NONE;
    else if (next_state == S_ERROR && state != S_ERROR) begin
        case (state)
            S_WAIT_BUFFERS: err_code_reg <= ERR_BUF_TMO;
            S_LOAD_WEIGHTS: err_code_reg <= ERR_WGT_TMO;
            S_COMPUTE:      err_code_reg <= ERR_COMP_TMO;
            S_REQUANT:      err_code_reg <= ERR_PP_TMO;
            S_OUTPUT:       err_code_reg <= ERR_OUT_TMO;
            default:        err_code_reg <= ERR_NONE;
        endcase
    end
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) state <= S_IDLE;
    else     state <= next_state;
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        wgt_load_cnt <= '0;
        compute_cnt  <= '0;
        drain_cnt    <= '0;
    end else begin
        case (next_state)
            S_LOAD_WEIGHTS: wgt_load_cnt <= (state == S_LOAD_WEIGHTS) ?
                                             wgt_load_cnt + 1'b1 : '0;
            S_COMPUTE:      compute_cnt  <= (state == S_COMPUTE) ?
                                             compute_cnt  + 1'b1 : '0;
            S_DRAIN:        drain_cnt    <= (state == S_DRAIN) ?
                                             drain_cnt    + 1'b1 : '0;
            default: begin
                wgt_load_cnt <= '0;
                compute_cnt  <= '0;
                drain_cnt    <= '0;
            end
        endcase
    end
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        cnt_ic <= '0; cnt_oc <= '0; cnt_spatial <= '0;
    end else begin
        case (state)
            S_IDLE:
                if (start) begin
                    cnt_ic <= '0; cnt_oc <= '0; cnt_spatial <= '0;
                end

            S_IC_ADVANCE:
                cnt_ic <= cnt_ic + 1'b1;

            S_TILE_ADVANCE: begin
                cnt_ic <= '0;
                if (cnt_oc < r_num_oc - 1)
                    cnt_oc <= cnt_oc + 1'b1;
                else begin
                    cnt_oc      <= '0;
                    cnt_spatial <= cnt_spatial + 1'b1;
                end
            end
            default: ;
        endcase
    end
end

always_comb begin
    next_state = state;

    if (watchdog_timeout) begin
        next_state = S_ERROR;
    end else begin
        case (state)
            S_IDLE:
                if (start)
                    next_state = S_WAIT_BUFFERS;

            S_WAIT_BUFFERS:
                if (wgt_buf_ready && act_buf_ready)
                    next_state = S_LOAD_WEIGHTS;

            S_LOAD_WEIGHTS:

                if (wgt_load_cnt == (ROWS - 1))
                    next_state = S_COMPUTE;

            S_COMPUTE:

                if (compute_cnt == r_k_depth - 1)
                    next_state = S_DRAIN;

            S_DRAIN:
                if (drain_cnt == (MAC_LATENCY - 1))
                    next_state = S_IC_ADVANCE;

            S_IC_ADVANCE:
                if (cnt_ic < r_num_ic - 1)
                    next_state = S_LOAD_WEIGHTS; 

                else
                    next_state = S_REQUANT;      

            S_REQUANT:
                if (pp_done)
                    next_state = S_OUTPUT;

            S_OUTPUT:
                if (m_out_tready)
                    next_state = S_TILE_ADVANCE;

            S_TILE_ADVANCE:
                if (cnt_oc < r_num_oc - 1)
                    next_state = S_WAIT_BUFFERS; 

                else if (cnt_spatial < r_num_spatial - 1)
                    next_state = S_WAIT_BUFFERS; 

                else
                    next_state = S_IDLE;

            S_ERROR: next_state = S_ERROR;
            default: next_state = S_IDLE;
        endcase
    end
end

always_comb begin

    wgt_rd_next   = 1'b0;
    act_rd_next   = 1'b0;
    act_rd_rst    = 1'b0;
    bank_swap     = 1'b0;
    wgt_load_start= 1'b0;
    enable        = 1'b0;
    clear_acc     = 1'b0;
    acc_valid     = 1'b0;
    act_type      = r_act_type;
    m_out_tvalid  = 1'b0;
    m_out_tlast   = 1'b0;
    busy          = 1'b1;
    error         = 1'b0;
    error_code    = err_code_reg;

    case (state)
        S_IDLE: begin
            busy = 1'b0;
        end

        S_WAIT_BUFFERS: begin

        end

        S_LOAD_WEIGHTS: begin

            wgt_load_start = (wgt_load_cnt == '0);

            wgt_rd_next = 1'b1;

            clear_acc = (wgt_load_cnt == '0) && (cnt_ic == '0);

            act_rd_rst = (wgt_load_cnt == '0);

            bank_swap = (wgt_load_cnt == '0) && (cnt_ic == '0) &&
                        (state != S_IDLE);
        end

        S_COMPUTE: begin
            enable      = 1'b1;
            act_rd_next = 1'b1;  // step SRAM read pointer each cycle

        end

        S_DRAIN: begin
            enable = 1'b1;       // keep pipeline flushing

            acc_valid = (drain_cnt == MAC_LATENCY - 1);
        end

        S_IC_ADVANCE: ; 

        S_REQUANT: begin
            acc_valid = 1'b1;    // hold until pp_done
        end

        S_OUTPUT: begin
            m_out_tvalid = 1'b1;

            m_out_tlast  = (cnt_oc      == r_num_oc      - 1) &&
                           (cnt_spatial == r_num_spatial  - 1);
        end

        S_TILE_ADVANCE: ; 

        S_ERROR: begin
            error = 1'b1;
            busy  = 1'b0;
        end

        default: busy = 1'b0;
    endcase
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        perf_total_cycles    <= '0;
        perf_compute_cycles  <= '0;
        perf_stall_cycles    <= '0;
        perf_wgt_load_cycles <= '0;
        perf_drain_cycles    <= '0;
        perf_tile_count      <= '0;
        perf_overflow_count  <= '0;
        perf_timeout_count   <= '0;
    end else begin
        if (state != S_IDLE  && state != S_ERROR)
            perf_total_cycles    <= perf_total_cycles    + 1'b1;
        if (state == S_COMPUTE)
            perf_compute_cycles  <= perf_compute_cycles  + 1'b1;
        if (state == S_LOAD_WEIGHTS || state == S_DRAIN   ||
            state == S_WAIT_BUFFERS || state == S_REQUANT ||
            state == S_OUTPUT       || state == S_IC_ADVANCE)
            perf_stall_cycles    <= perf_stall_cycles    + 1'b1;
        if (state == S_LOAD_WEIGHTS)
            perf_wgt_load_cycles <= perf_wgt_load_cycles + 1'b1;
        if (state == S_DRAIN)
            perf_drain_cycles    <= perf_drain_cycles    + 1'b1;
        if (state == S_OUTPUT && m_out_tready)
            perf_tile_count      <= perf_tile_count      + 1'b1;
        if ((state == S_COMPUTE || state == S_DRAIN) && any_overflow)
            perf_overflow_count  <= perf_overflow_count  + 1'b1;
        if (watchdog_timeout)
            perf_timeout_count   <= perf_timeout_count   + 1'b1;
    end
end

endmodule