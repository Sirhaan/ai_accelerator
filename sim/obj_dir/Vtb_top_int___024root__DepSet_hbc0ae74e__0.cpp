// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_int.h for the primary calling header

#include "Vtb_top_int__pch.h"
#include "Vtb_top_int___024root.h"

VL_ATTR_COLD void Vtb_top_int___024root___eval_initial__TOP(Vtb_top_int___024root* vlSelf);
VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0(Vtb_top_int___024root* vlSelf);
VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__1(Vtb_top_int___024root* vlSelf);

void Vtb_top_int___024root___eval_initial(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial\n"); );
    // Body
    Vtb_top_int___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top_int___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__clk__0 
        = vlSelf->tb_top_int__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__rst__0 
        = vlSelf->tb_top_int__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__busy__0 
        = vlSelf->tb_top_int__DOT__busy;
    vlSelf->__Vtrigprevexpr_he392af5f__0 = (1U & (~ (IData)(vlSelf->tb_top_int__DOT__busy)));
}

VL_INLINE_OPT VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       236);
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       236);
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       236);
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       236);
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       236);
    vlSelf->tb_top_int__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       238);
    vlSelf->tb_top_int__DOT__start = 0U;
    VL_WRITEF("Start asserted\n");
    vlSelf->__Vfork_1__sync.done("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                 235);
}

VL_INLINE_OPT VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->tb_top_int__DOT__s_act_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_act_tdata[0U] = vlSelf->tb_top_int__DOT__act_stimulus
        [0U];
    vlSelf->tb_top_int__DOT__s_act_tdata[1U] = vlSelf->tb_top_int__DOT__act_stimulus
        [0U];
    vlSelf->tb_top_int__DOT__s_act_tdata[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->tb_top_int__DOT__act_stimulus
                                                                         [0U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [0U]))));
    vlSelf->tb_top_int__DOT__s_act_tdata[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [0U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->tb_top_int__DOT__act_stimulus
                                                                           [0U]))) 
                                                        >> 0x20U));
    vlSelf->tb_top_int__DOT__s_act_tlast = 0U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       229);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i = 1U;
    vlSelf->tb_top_int__DOT__s_act_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_act_tdata[0U] = vlSelf->tb_top_int__DOT__act_stimulus
        [1U];
    vlSelf->tb_top_int__DOT__s_act_tdata[1U] = vlSelf->tb_top_int__DOT__act_stimulus
        [1U];
    vlSelf->tb_top_int__DOT__s_act_tdata[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->tb_top_int__DOT__act_stimulus
                                                                         [1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [1U]))));
    vlSelf->tb_top_int__DOT__s_act_tdata[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->tb_top_int__DOT__act_stimulus
                                                                           [1U]))) 
                                                        >> 0x20U));
    vlSelf->tb_top_int__DOT__s_act_tlast = 0U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       229);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i = 2U;
    vlSelf->tb_top_int__DOT__s_act_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_act_tdata[0U] = vlSelf->tb_top_int__DOT__act_stimulus
        [2U];
    vlSelf->tb_top_int__DOT__s_act_tdata[1U] = vlSelf->tb_top_int__DOT__act_stimulus
        [2U];
    vlSelf->tb_top_int__DOT__s_act_tdata[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->tb_top_int__DOT__act_stimulus
                                                                         [2U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [2U]))));
    vlSelf->tb_top_int__DOT__s_act_tdata[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->tb_top_int__DOT__act_stimulus
                                                                           [2U]))) 
                                                        >> 0x20U));
    vlSelf->tb_top_int__DOT__s_act_tlast = 0U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       229);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i = 3U;
    vlSelf->tb_top_int__DOT__s_act_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_act_tdata[0U] = vlSelf->tb_top_int__DOT__act_stimulus
        [3U];
    vlSelf->tb_top_int__DOT__s_act_tdata[1U] = vlSelf->tb_top_int__DOT__act_stimulus
        [3U];
    vlSelf->tb_top_int__DOT__s_act_tdata[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->tb_top_int__DOT__act_stimulus
                                                                         [3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [3U]))));
    vlSelf->tb_top_int__DOT__s_act_tdata[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->tb_top_int__DOT__act_stimulus
                                                                          [3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->tb_top_int__DOT__act_stimulus
                                                                           [3U]))) 
                                                        >> 0x20U));
    vlSelf->tb_top_int__DOT__s_act_tlast = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       229);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i = 4U;
    vlSelf->tb_top_int__DOT__s_act_tvalid = 0U;
    VL_WRITEF("Activations streamed\n");
    vlSelf->__Vfork_1__sync.done("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                 223);
    vlSelf->__Vm_traceActivity[4U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       212);
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_wgt_tdata = vlSelf->tb_top_int__DOT__wgt_stimulus
        [0U];
    vlSelf->tb_top_int__DOT__s_wgt_tlast = 0U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       217);
    vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i = 1U;
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_wgt_tdata = vlSelf->tb_top_int__DOT__wgt_stimulus
        [1U];
    vlSelf->tb_top_int__DOT__s_wgt_tlast = 0U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       217);
    vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i = 2U;
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_wgt_tdata = vlSelf->tb_top_int__DOT__wgt_stimulus
        [2U];
    vlSelf->tb_top_int__DOT__s_wgt_tlast = 0U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       217);
    vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i = 3U;
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = 1U;
    vlSelf->tb_top_int__DOT__s_wgt_tdata = vlSelf->tb_top_int__DOT__wgt_stimulus
        [3U];
    vlSelf->tb_top_int__DOT__s_wgt_tlast = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       217);
    vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i = 4U;
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = 0U;
    VL_WRITEF("Weights streamed\n");
    vlSelf->__Vfork_1__sync.done("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                 211);
}

VL_INLINE_OPT VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__1(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                           56);
        vlSelf->__Vdlyvval__tb_top_int__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_top_int__DOT__clk)));
        vlSelf->__Vdlyvset__tb_top_int__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb_top_int___024root___act_comb__TOP__0(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire 
        = (1U & (IData)(vlSelf->tb_top_int__DOT__s_wgt_tvalid));
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
           & (IData)(vlSelf->tb_top_int__DOT__m_out_tready));
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready 
        = (1U & ((~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid)) 
                 | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm 
        = ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt)) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire));
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state;
    if (vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 9U;
    } else if ((8U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state 
            = ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                ? 0U : ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                         ? 0U : ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                                  ? 9U : (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc) 
                                           < ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc) 
                                              - (IData)(1U)))
                                           ? 1U : (
                                                   ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial) 
                                                    < 
                                                    ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial) 
                                                     - (IData)(1U)))
                                                    ? 1U
                                                    : 0U)))));
    } else if ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                if (vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm) {
                    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 8U;
                }
            } else if (vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state 
                = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic) 
                    < ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic) 
                       - (IData)(1U))) ? 2U : 6U);
        } else if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt) 
                 == ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth) 
                     - (IData)(1U)))) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 4U;
            }
        } else if ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat) 
             & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 2U;
        }
    } else if (vlSelf->tb_top_int__DOT__start) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 1U;
    }
}

void Vtb_top_int___024root___eval_act(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_act\n"); );
    // Body
    if ((0x1cULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_top_int___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_top_int__ConstPool__TABLE_hde253d4f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_int__ConstPool__TABLE_h2aabc56c_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtb_top_int__ConstPool__TABLE_h85cc0e3a_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_top_int__ConstPool__TABLE_h7ba8c2da_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtb_top_int__ConstPool__TABLE_h390cec9b_0;

VL_INLINE_OPT void Vtb_top_int___024root___nba_sequent__TOP__0(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__tb_top_int__DOT__dut__DOT__act_valid_sr;
    __Vdly__tb_top_int__DOT__dut__DOT__act_valid_sr = 0;
    CData/*1:0*/ __Vdly__tb_top_int__DOT__dut__DOT__act_last_sr;
    __Vdly__tb_top_int__DOT__dut__DOT__act_last_sr = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v2 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v4 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v6 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v7 = 0;
    CData/*1:0*/ __Vdly__tb_top_int__DOT__dut__DOT__out_row_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__out_row_cnt = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel = 0;
    SData/*9:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0;
    __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0;
    __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 = 0;
    SData/*9:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr = 0;
    SData/*8:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr = 0;
    SData/*8:0*/ __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0;
    __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 = 0;
    SData/*8:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*0:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0;
    CData/*7:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt = 0;
    SData/*15:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt = 0;
    CData/*3:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt = 0;
    SData/*15:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic = 0;
    SData/*15:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc = 0;
    SData/*15:0*/ __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_timeout_count;
    __Vdly__tb_top_int__DOT__perf_timeout_count = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_overflow_count;
    __Vdly__tb_top_int__DOT__perf_overflow_count = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_tile_count;
    __Vdly__tb_top_int__DOT__perf_tile_count = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_drain_cycles;
    __Vdly__tb_top_int__DOT__perf_drain_cycles = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_wgt_load_cycles;
    __Vdly__tb_top_int__DOT__perf_wgt_load_cycles = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_stall_cycles;
    __Vdly__tb_top_int__DOT__perf_stall_cycles = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_total_cycles;
    __Vdly__tb_top_int__DOT__perf_total_cycles = 0;
    IData/*31:0*/ __Vdly__tb_top_int__DOT__perf_compute_cycles;
    __Vdly__tb_top_int__DOT__perf_compute_cycles = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v5 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v6;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v6 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v0 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v2 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v4 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v6 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v5 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v6;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v6 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v0 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v2 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v4 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v6 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v5 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v6;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v6 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v0 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v2 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v4 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v6 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v5 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v6;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v6 = 0;
    QData/*47:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v0 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v2 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v4 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v6 = 0;
    QData/*48:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v0;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v2;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v4;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v6;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 = 0;
    // Body
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr;
    __Vdly__tb_top_int__DOT__perf_timeout_count = vlSelf->tb_top_int__DOT__perf_timeout_count;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v7 = 0U;
    __Vdly__tb_top_int__DOT__dut__DOT__act_valid_sr 
        = vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr;
    __Vdly__tb_top_int__DOT__dut__DOT__out_row_cnt 
        = vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7 = 0U;
    __Vdly__tb_top_int__DOT__perf_compute_cycles = vlSelf->tb_top_int__DOT__perf_compute_cycles;
    __Vdly__tb_top_int__DOT__perf_total_cycles = vlSelf->tb_top_int__DOT__perf_total_cycles;
    __Vdly__tb_top_int__DOT__perf_stall_cycles = vlSelf->tb_top_int__DOT__perf_stall_cycles;
    __Vdly__tb_top_int__DOT__perf_wgt_load_cycles = vlSelf->tb_top_int__DOT__perf_wgt_load_cycles;
    __Vdly__tb_top_int__DOT__perf_drain_cycles = vlSelf->tb_top_int__DOT__perf_drain_cycles;
    __Vdly__tb_top_int__DOT__perf_tile_count = vlSelf->tb_top_int__DOT__perf_tile_count;
    __Vdly__tb_top_int__DOT__perf_overflow_count = vlSelf->tb_top_int__DOT__perf_overflow_count;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt;
    __Vdly__tb_top_int__DOT__dut__DOT__act_last_sr 
        = vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 = 0U;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial;
    __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v0 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v2 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v4 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v6 = 0U;
    __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst)))) {
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid) {
            vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 4U;
            vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 4U;
            vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 4U;
            vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 4U;
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt) 
                     << 3U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active) 
                                << 2U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start) 
                                           << 1U) | (IData)(vlSelf->tb_top_int__DOT__rst))));
    if ((1U & Vtb_top_int__ConstPool__TABLE_hde253d4f_0
         [__Vtableidx1])) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active 
            = Vtb_top_int__ConstPool__TABLE_h2aabc56c_0
            [__Vtableidx1];
    }
    if ((2U & Vtb_top_int__ConstPool__TABLE_hde253d4f_0
         [__Vtableidx1])) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt 
            = Vtb_top_int__ConstPool__TABLE_h85cc0e3a_0
            [__Vtableidx1];
    }
    vlSelf->tb_top_int__DOT__dut__DOT__act_rd_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next));
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next));
    __Vtableidx2 = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                     << 5U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state) 
                                << 1U) | (IData)(vlSelf->tb_top_int__DOT__rst)));
    if (Vtb_top_int__ConstPool__TABLE_h7ba8c2da_0[__Vtableidx2]) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__err_code_reg 
            = Vtb_top_int__ConstPool__TABLE_h390cec9b_0
            [__Vtableidx2];
    }
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__clip_flag 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))) 
               | VL_GTS_IQQ(33, 0x1ffffff81ULL, (0x1ffffffffULL 
                                                 & VL_SHIFTRS_QQI(48,48,32, 
                                                                  (0xffffffffffffULL 
                                                                   & (0x4000ULL 
                                                                      + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__clip_flag 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))) 
               | VL_GTS_IQQ(33, 0x1ffffff81ULL, (0x1ffffffffULL 
                                                 & VL_SHIFTRS_QQI(48,48,32, 
                                                                  (0xffffffffffffULL 
                                                                   & (0x4000ULL 
                                                                      + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__clip_flag 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))) 
               | VL_GTS_IQQ(33, 0x1ffffff81ULL, (0x1ffffffffULL 
                                                 & VL_SHIFTRS_QQI(48,48,32, 
                                                                  (0xffffffffffffULL 
                                                                   & (0x4000ULL 
                                                                      + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__clip_flag 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))) 
               | VL_GTS_IQQ(33, 0x1ffffff81ULL, (0x1ffffffffULL 
                                                 & VL_SHIFTRS_QQI(48,48,32, 
                                                                  (0xffffffffffffULL 
                                                                   & (0x4000ULL 
                                                                      + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_valid 
        = ((~ (IData)(vlSelf->tb_top_int__DOT__rst)) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_valid 
        = ((~ (IData)(vlSelf->tb_top_int__DOT__rst)) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_valid 
        = ((~ (IData)(vlSelf->tb_top_int__DOT__rst)) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_valid 
        = ((~ (IData)(vlSelf->tb_top_int__DOT__rst)) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 4U;
        __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel = 0U;
        __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr = 0U;
        __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr = 0U;
        __Vdly__tb_top_int__DOT__perf_timeout_count = 0U;
        vlSelf->tb_top_int__DOT__perf_timeout_count 
            = __Vdly__tb_top_int__DOT__perf_timeout_count;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v6 = 1U;
        __Vdly__tb_top_int__DOT__dut__DOT__act_valid_sr = 0U;
        __Vdly__tb_top_int__DOT__dut__DOT__out_row_cnt = 0U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v6 = 1U;
    } else {
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel 
                = (1U & (~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel)));
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr = 0U;
        } else if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr)));
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr)));
        } else if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr = 0U;
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout) {
            __Vdly__tb_top_int__DOT__perf_timeout_count 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_timeout_count);
        }
        vlSelf->tb_top_int__DOT__perf_timeout_count 
            = __Vdly__tb_top_int__DOT__perf_timeout_count;
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in
                                                                    [0U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v5 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in
                                                                    [1U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v6 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in
                                                                    [2U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v7 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in
                                                                    [3U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in
                                                                    [0U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v5 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in
                                                                    [1U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v6 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in
                                                                    [2U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v7 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in
                                                                    [3U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in
                                                                    [0U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v5 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in
                                                                    [1U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v6 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in
                                                                    [2U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v7 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in
                                                                    [3U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in
                                                                    [0U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v5 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in
                                                                    [1U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v6 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in
                                                                    [2U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v7 
                = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,32, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in
                                                                    [3U])), 
                                                   (0xffffffffffffULL 
                                                    & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_scale_mult)))));
        }
        if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
                [0U];
            __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v1 = 1U;
        }
        if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
                [1U];
            __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v3 = 1U;
        }
        if ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
                [2U];
            __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v5 = 1U;
        }
        if ((8U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
                [3U];
            __Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v7 = 1U;
        }
        __Vdly__tb_top_int__DOT__dut__DOT__act_valid_sr 
            = ((2U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr) 
                      << 1U)) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid));
        if (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid) 
             & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready))) {
            __Vdly__tb_top_int__DOT__dut__DOT__out_row_cnt 
                = ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt))));
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_valid) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1 
                = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                       vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled
                                                       [0U]) 
                                         + VL_SHIFTL_QQI(49,49,32, 
                                                         VL_EXTENDS_QI(49,32, 
                                                                       vlSelf->tb_top_int__DOT__cfg_bias
                                                                       [0U]), 0xfU)));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3 
                = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                       vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled
                                                       [1U]) 
                                         + VL_SHIFTL_QQI(49,49,32, 
                                                         VL_EXTENDS_QI(49,32, 
                                                                       vlSelf->tb_top_int__DOT__cfg_bias
                                                                       [1U]), 0xfU)));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5 
                = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                       vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled
                                                       [2U]) 
                                         + VL_SHIFTL_QQI(49,49,32, 
                                                         VL_EXTENDS_QI(49,32, 
                                                                       vlSelf->tb_top_int__DOT__cfg_bias
                                                                       [2U]), 0xfU)));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5 = 1U;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7 
                = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                       vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled
                                                       [3U]) 
                                         + VL_SHIFTL_QQI(49,49,32, 
                                                         VL_EXTENDS_QI(49,32, 
                                                                       vlSelf->tb_top_int__DOT__cfg_bias
                                                                       [3U]), 0xfU)));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7 = 1U;
        }
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[0U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[1U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[2U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v4;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v5;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v6;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v6 = 1U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_valid) {
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled
                                                   [0U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [0U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled
                                                   [1U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [1U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled
                                                   [2U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [2U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled
                                                   [3U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [3U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7 = 1U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[0U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[1U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[2U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v4;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v5;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v6;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v6 = 1U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_valid) {
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled
                                                   [0U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [0U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled
                                                   [1U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [1U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled
                                                   [2U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [2U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled
                                                   [3U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [3U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7 = 1U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[0U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[1U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[2U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v4;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v5;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v6;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v6 = 1U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_valid) {
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled
                                                   [0U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [0U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled
                                                   [1U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [1U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled
                                                   [2U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [2U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5 = 1U;
        __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7 
            = (0x1ffffffffffffULL & (VL_EXTENDS_QQ(49,48, 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled
                                                   [3U]) 
                                     + VL_SHIFTL_QQI(49,49,32, 
                                                     VL_EXTENDS_QI(49,32, 
                                                                   vlSelf->tb_top_int__DOT__cfg_bias
                                                                   [3U]), 0xfU)));
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7 = 1U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[0U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[1U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[2U] = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v4;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v5;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v6;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdly__tb_top_int__DOT__perf_compute_cycles = 0U;
        vlSelf->tb_top_int__DOT__perf_compute_cycles 
            = __Vdly__tb_top_int__DOT__perf_compute_cycles;
        __Vdly__tb_top_int__DOT__perf_total_cycles = 0U;
        vlSelf->tb_top_int__DOT__perf_total_cycles 
            = __Vdly__tb_top_int__DOT__perf_total_cycles;
        __Vdly__tb_top_int__DOT__perf_stall_cycles = 0U;
        vlSelf->tb_top_int__DOT__perf_stall_cycles 
            = __Vdly__tb_top_int__DOT__perf_stall_cycles;
        __Vdly__tb_top_int__DOT__perf_wgt_load_cycles = 0U;
        vlSelf->tb_top_int__DOT__perf_wgt_load_cycles 
            = __Vdly__tb_top_int__DOT__perf_wgt_load_cycles;
        __Vdly__tb_top_int__DOT__perf_drain_cycles = 0U;
        vlSelf->tb_top_int__DOT__perf_drain_cycles 
            = __Vdly__tb_top_int__DOT__perf_drain_cycles;
        __Vdly__tb_top_int__DOT__perf_tile_count = 0U;
        vlSelf->tb_top_int__DOT__perf_tile_count = __Vdly__tb_top_int__DOT__perf_tile_count;
        __Vdly__tb_top_int__DOT__perf_overflow_count = 0U;
        vlSelf->tb_top_int__DOT__perf_overflow_count 
            = __Vdly__tb_top_int__DOT__perf_overflow_count;
        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt;
        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt = 0U;
        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic;
        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt;
        __Vdly__tb_top_int__DOT__dut__DOT__act_last_sr = 0U;
        __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr;
        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc = 0U;
        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v6 = 1U;
    } else {
        if ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            __Vdly__tb_top_int__DOT__perf_compute_cycles 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_compute_cycles);
        }
        vlSelf->tb_top_int__DOT__perf_compute_cycles 
            = __Vdly__tb_top_int__DOT__perf_compute_cycles;
        if (((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
             & (9U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
            __Vdly__tb_top_int__DOT__perf_total_cycles 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_total_cycles);
        }
        vlSelf->tb_top_int__DOT__perf_total_cycles 
            = __Vdly__tb_top_int__DOT__perf_total_cycles;
        if (((((((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
                 | (4U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) 
                | (1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) 
               | (6U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) 
              | (7U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) 
             | (5U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
            __Vdly__tb_top_int__DOT__perf_stall_cycles 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_stall_cycles);
        }
        vlSelf->tb_top_int__DOT__perf_stall_cycles 
            = __Vdly__tb_top_int__DOT__perf_stall_cycles;
        if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            __Vdly__tb_top_int__DOT__perf_wgt_load_cycles 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_wgt_load_cycles);
        }
        vlSelf->tb_top_int__DOT__perf_wgt_load_cycles 
            = __Vdly__tb_top_int__DOT__perf_wgt_load_cycles;
        if ((4U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            __Vdly__tb_top_int__DOT__perf_drain_cycles 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_drain_cycles);
        }
        vlSelf->tb_top_int__DOT__perf_drain_cycles 
            = __Vdly__tb_top_int__DOT__perf_drain_cycles;
        if (((7U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
             & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm))) {
            __Vdly__tb_top_int__DOT__perf_tile_count 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_tile_count);
        }
        vlSelf->tb_top_int__DOT__perf_tile_count = __Vdly__tb_top_int__DOT__perf_tile_count;
        if ((((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
              | (4U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) 
             & (0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)))) {
            __Vdly__tb_top_int__DOT__perf_overflow_count 
                = ((IData)(1U) + vlSelf->tb_top_int__DOT__perf_overflow_count);
        }
        vlSelf->tb_top_int__DOT__perf_overflow_count 
            = __Vdly__tb_top_int__DOT__perf_overflow_count;
        if ((2U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
            if ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt 
                    = ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                        ? (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt)))
                        : 0U);
            } else if ((4U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt = 0U;
            }
            if ((3U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt 
                    = ((4U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))
                        ? ((4U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt)))
                            : 0U) : 0U);
            }
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt 
            = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))
                ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt))));
        if ((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if (vlSelf->tb_top_int__DOT__start) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic = 0U;
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc = 0U;
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial = 0U;
            }
        } else {
            if ((5U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic)));
            } else if ((8U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic = 0U;
            }
            if ((5U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                if ((8U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                    if (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc) 
                         < ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc) 
                            - (IData)(1U)))) {
                        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc)));
                    } else {
                        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial)));
                        __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc = 0U;
                    }
                }
            }
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic;
        if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt 
                = ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt)))
                    : 0U);
        } else if ((3U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
            if ((4U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state))) {
                __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt = 0U;
            }
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt;
        __Vdly__tb_top_int__DOT__dut__DOT__act_last_sr 
            = ((2U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr) 
                      << 1U)) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last));
        if (vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid) {
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel) {
                __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 
                    = vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data;
                __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 = 1U;
                __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0 
                    = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr;
            } else {
                __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 
                    = vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data;
                __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 = 1U;
                __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0 
                    = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr;
            }
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last)
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr))));
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial;
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = 0U;
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = 0U;
        } else if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable) {
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
            __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg) 
                   | (((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                        >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                            >> 0xfU))) 
                      & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                          >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                        >> 0x1fU))));
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
        if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 
                = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out) 
                    << 0x18U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out) 
                                  << 0x10U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out) 
                                                << 8U) 
                                               | (IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out))));
            __Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 = 1U;
            __Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr;
            __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr 
                = ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr))
                    ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr))));
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr 
            = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr;
        if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid) {
            if ((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
            } else if ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 
                    = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                        ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act));
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 
                    = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                        ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act));
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 
                    = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                        ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act));
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 
                    = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                        ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act));
            } else if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                    [(0x3ffU & (IData)((0x1ffffffffffULL 
                                        & ((0x20000ULL 
                                            + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U])
                                                ? 0x20000ULL
                                                : (
                                                   VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [0U])
                                                    ? 0x1fffffffe0000ULL
                                                    : 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                   [0U]))) 
                                           >> 8U))))];
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                    [(0x3ffU & (IData)((0x1ffffffffffULL 
                                        & ((0x20000ULL 
                                            + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U])
                                                ? 0x20000ULL
                                                : (
                                                   VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [1U])
                                                    ? 0x1fffffffe0000ULL
                                                    : 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                   [1U]))) 
                                           >> 8U))))];
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                    [(0x3ffU & (IData)((0x1ffffffffffULL 
                                        & ((0x20000ULL 
                                            + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U])
                                                ? 0x20000ULL
                                                : (
                                                   VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [2U])
                                                    ? 0x1fffffffe0000ULL
                                                    : 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                   [2U]))) 
                                           >> 8U))))];
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                    [(0x3ffU & (IData)((0x1ffffffffffULL 
                                        & ((0x20000ULL 
                                            + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U])
                                                ? 0x20000ULL
                                                : (
                                                   VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [3U])
                                                    ? 0x1fffffffe0000ULL
                                                    : 
                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                   [3U]))) 
                                           >> 8U))))];
            } else {
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
                __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 
                    = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
            }
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1 = 1U;
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3 = 1U;
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5 = 1U;
            __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7 = 1U;
        }
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[0U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[1U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[2U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased__v7;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[0U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[1U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[2U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[3U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v6 = 1U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid) {
        if ((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
        } else if ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act));
        } else if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                      [0U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                               [0U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                      [1U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                               [1U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                      [2U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                               [2U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                      [3U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                               [3U]))) 
                                       >> 8U))))];
        } else {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
        }
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7 = 1U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[0U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[1U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[2U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased__v7;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[0U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[1U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[2U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[3U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v6 = 1U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid) {
        if ((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
        } else if ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act));
        } else if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                      [0U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                               [0U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                      [1U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                               [1U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                      [2U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                               [2U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                      [3U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                               [3U]))) 
                                       >> 8U))))];
        } else {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
        }
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7 = 1U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[0U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[1U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[2U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased__v7;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[0U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[1U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[2U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[3U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v0 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v2 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v4 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v6 = 1U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid) {
        if ((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
        } else if ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act));
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 
                = ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                    ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act));
        } else if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))) {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                      [0U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                               [0U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                      [1U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                               [1U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                      [2U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                               [2U]))) 
                                       >> 8U))))];
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                [(0x3ffU & (IData)((0x1ffffffffffULL 
                                    & ((0x20000ULL 
                                        + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                      vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                      [3U])
                                            ? 0x20000ULL
                                            : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U])
                                                ? 0x1fffffffe0000ULL
                                                : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                               [3U]))) 
                                       >> 8U))))];
        } else {
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act;
            __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 
                = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act;
        }
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5 = 1U;
        __Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7 = 1U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[0U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[1U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[2U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[3U] = 0ULL;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased__v7;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[0U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[1U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[2U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[3U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data__v7;
    }
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data = 0U;
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data 
            = vlSelf->tb_top_int__DOT__dut__DOT__out_buf
            [vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt];
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[0U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v1) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[0U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v1;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v2) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[1U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v3) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[1U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v3;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v4) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[2U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v5) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[2U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v5;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v6) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[3U] = 0U;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__out_buf__v7) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[3U] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__out_buf__v7;
    }
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth = 1U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic = 1U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout = 0xffffU;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial = 1U;
        vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = (0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat));
    } else {
        if (vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last 
                = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast) 
                   & (3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt)));
            vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid = 1U;
        } else if (vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid = 0U;
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [3U][3U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [3U][2U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [3U][1U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [3U][0U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [2U][3U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [2U][2U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [2U][1U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [2U][0U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [1U][3U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [1U][2U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [1U][1U];
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
            [1U][0U];
        if (vlSelf->tb_top_int__DOT__busy) {
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_done) {
                vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat = 1U;
            }
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_done) {
                vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat = 1U;
            }
        } else {
            vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat = 0U;
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg 
            = (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
               >> 0x18U);
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg 
            = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                        >> 0x10U));
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg 
            = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                        >> 8U));
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg 
            = (0xffU & vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data);
        if (((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
             & (IData)(vlSelf->tb_top_int__DOT__start))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth 
                = vlSelf->tb_top_int__DOT__cfg_k_depth;
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic 
                = vlSelf->tb_top_int__DOT__cfg_num_ic;
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout 
                = vlSelf->tb_top_int__DOT__cfg_timeout;
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial 
                = vlSelf->tb_top_int__DOT__cfg_num_spatial;
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid) {
            vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
                = ((0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat)) 
                   | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
        }
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                  [0U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = (0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = ((0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated) 
                  << 1U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                  [1U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = (0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = ((0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated) 
                  << 2U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                  [2U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = (7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat 
            = ((7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated) 
                  << 3U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                  [3U])), 0xfU))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data
        [3U];
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = (0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = ((0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat)) 
               | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                  [0U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = (0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = ((0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated) 
                  << 1U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                  [1U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = (0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = ((0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated) 
                  << 2U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                  [2U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = (7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat 
            = ((7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated) 
                  << 3U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                  [3U])), 0xfU))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data
        [3U];
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = (0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = ((0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat)) 
               | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                  [0U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = (0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = ((0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated) 
                  << 1U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                  [1U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = (0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = ((0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated) 
                  << 2U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                  [2U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = (7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat 
            = ((7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated) 
                  << 3U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                  [3U])), 0xfU))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data
        [3U];
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = (0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = ((0xeU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat)) 
               | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                  [0U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = (0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = ((0xdU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated) 
                  << 1U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                  [1U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = (0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = ((0xbU & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated) 
                  << 2U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                  [2U])), 0xfU))));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = (7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat));
    } else if (vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat 
            = ((7U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat)) 
               | ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated) 
                  << 3U));
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated 
        = (VL_LTS_IQQ(34, 0x7fULL, (0x3ffffffffULL 
                                    & VL_SHIFTRS_QQI(49,49,32, 
                                                     (0x1ffffffffffffULL 
                                                      & (0x4000ULL 
                                                         + 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])), 0xfU))) 
           | VL_GTS_IQQ(34, 0x3ffffff81ULL, (0x3ffffffffULL 
                                             & VL_SHIFTRS_QQI(49,49,32, 
                                                              (0x1ffffffffffffULL 
                                                               & (0x4000ULL 
                                                                  + 
                                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                  [3U])), 0xfU))));
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data
        [3U];
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_done 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && ((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr) 
                      >> 1U)) && (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr) 
                                        >> 1U))));
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_done 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid) 
               && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last)));
    if (vlSelf->tb_top_int__DOT__rst) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc = 1U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg = 0ULL;
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U] = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U] = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U] = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U] = 0U;
        vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid = 0U;
    } else {
        if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid))) {
            vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid = 1U;
        } else if ((((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt)) 
                     & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_valid)) 
                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready))) {
            vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid = 0U;
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data 
                = vlSelf->tb_top_int__DOT__s_wgt_tdata;
            vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last 
                = vlSelf->tb_top_int__DOT__s_wgt_tlast;
            vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid = 1U;
        } else {
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last = 0U;
            }
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__output_fire) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid = 0U;
            }
        }
        if (((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
             & (IData)(vlSelf->tb_top_int__DOT__start))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc 
                = vlSelf->tb_top_int__DOT__cfg_num_oc;
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type 
                = vlSelf->tb_top_int__DOT__cfg_act_type;
        }
        if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = 0U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = 0U;
        } else if (vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next;
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [3U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [3U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [3U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [2U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [2U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [2U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [1U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [1U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [1U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg 
                = (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                   >> 0x18U);
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg 
                = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                            >> 0x10U));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg 
                = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                            >> 8U));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [0U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [0U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                [0U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg 
                = (0xffU & vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data);
        }
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out 
            = (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                      (0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(48,48,32, 
                                                        (0xffffffffffffULL 
                                                         & (0x4000ULL 
                                                            + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                            ? 0x81U : (0xffU & (IData)(
                                                       (0xffffffffffffULL 
                                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                                         (0xffffffffffffULL 
                                                                          & (0x4000ULL 
                                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))))));
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out 
            = (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                      (0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(48,48,32, 
                                                        (0xffffffffffffULL 
                                                         & (0x4000ULL 
                                                            + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                            ? 0x81U : (0xffU & (IData)(
                                                       (0xffffffffffffULL 
                                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                                         (0xffffffffffffULL 
                                                                          & (0x4000ULL 
                                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))))));
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out 
            = (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                      (0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(48,48,32, 
                                                        (0xffffffffffffULL 
                                                         & (0x4000ULL 
                                                            + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                            ? 0x81U : (0xffU & (IData)(
                                                       (0xffffffffffffULL 
                                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                                         (0xffffffffffffULL 
                                                                          & (0x4000ULL 
                                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))))));
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out 
            = (VL_LTS_IQQ(33, 0x7fULL, (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                      (0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(48,48,32, 
                                                        (0xffffffffffffULL 
                                                         & (0x4000ULL 
                                                            + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))
                            ? 0x81U : (0xffU & (IData)(
                                                       (0xffffffffffffULL 
                                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                                         (0xffffffffffffULL 
                                                                          & (0x4000ULL 
                                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))))));
        if (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_en) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [3U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [3U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [3U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [2U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [2U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [2U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [1U][3U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [1U][2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [1U][1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [3U][0U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [2U][0U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg 
                = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                [1U][0U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg 
                = (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                   >> 0x18U);
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg 
                = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                            >> 0x10U));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg 
                = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                            >> 8U));
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg 
                = (0xffU & vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data);
        }
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg 
            = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U])), 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))));
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg 
            = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U])), 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))));
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg 
            = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U])), 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))));
        vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg 
            = (0xffffffffffffULL & VL_MULS_QQQ(48, 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U])), 
                                               (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))));
        if (vlSelf->tb_top_int__DOT__s_act_tvalid) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last 
                = vlSelf->tb_top_int__DOT__s_act_tlast;
            vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid = 1U;
            vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U] 
                = vlSelf->tb_top_int__DOT__s_act_tdata[0U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U] 
                = vlSelf->tb_top_int__DOT__s_act_tdata[1U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U] 
                = vlSelf->tb_top_int__DOT__s_act_tdata[2U];
            vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U] 
                = vlSelf->tb_top_int__DOT__s_act_tdata[3U];
        } else {
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last = 0U;
            }
            if (vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__output_fire) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid = 0U;
            }
        }
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state;
        vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
            = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel)
                ? vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b
               [vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr]
                : vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a
               [vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr]);
        vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
            = vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram
            [vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr];
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid 
        = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_valid) 
            << 3U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_valid) 
                       << 2U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_valid) 
                                  << 1U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_valid))));
    vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt 
        = __Vdly__tb_top_int__DOT__dut__DOT__out_row_cnt;
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xfffcU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [0U]
                                                       [1U] 
                                                       << 1U) 
                                                      | vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                      [0U]
                                                      [0U]));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xfff3U 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [0U]
                                                       [3U] 
                                                       << 3U) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [0U]
                                                         [2U] 
                                                         << 2U)));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xffcfU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [1U]
                                                       [1U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [1U]
                                                         [0U] 
                                                         << 4U)));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xff3fU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [1U]
                                                       [3U] 
                                                       << 7U) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [1U]
                                                         [2U] 
                                                         << 6U)));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xfcffU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [2U]
                                                       [1U] 
                                                       << 9U) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [2U]
                                                         [0U] 
                                                         << 8U)));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xf3ffU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [2U]
                                                       [3U] 
                                                       << 0xbU) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [2U]
                                                         [2U] 
                                                         << 0xaU)));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0xcfffU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [3U]
                                                       [1U] 
                                                       << 0xdU) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [3U]
                                                         [0U] 
                                                         << 0xcU)));
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = (
                                                   (0x3fffU 
                                                    & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat)) 
                                                   | ((vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                       [3U]
                                                       [3U] 
                                                       << 0xfU) 
                                                      | (vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                                                         [3U]
                                                         [2U] 
                                                         << 0xeU)));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                           [0U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                          [0U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                           [1U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                          [1U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                           [2U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                          [2U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                           [3U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                          [3U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out
        [3U];
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                           [0U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                          [0U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                           [1U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                          [1U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                           [2U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                          [2U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                           [3U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                          [3U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out
        [3U];
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                           [0U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                          [0U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                           [1U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                          [1U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                           [2U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                          [2U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                           [3U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                          [3U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out
        [3U];
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                           [0U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                          [0U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                           [1U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                          [1U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                           [2U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                          [2U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act 
        = (0xffU & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated)
                     ? ((1U & (IData)((0xffffULL & 
                                       (VL_SHIFTRS_QQI(49,49,32, 
                                                       (0x1ffffffffffffULL 
                                                        & (0x4000ULL 
                                                           + 
                                                           vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                           [3U])), 0xfU) 
                                        >> 0x21U))))
                         ? 0x81U : 0x7fU) : (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                                      (0x1ffffffffffffULL 
                                                                       & (0x4000ULL 
                                                                          + 
                                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                          [3U])), 0xfU)))));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[0U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out
        [0U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out
        [1U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out
        [2U];
    vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out
        [3U];
    vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr 
        = __Vdly__tb_top_int__DOT__dut__DOT__act_valid_sr;
    vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr 
        = __Vdly__tb_top_int__DOT__dut__DOT__act_last_sr;
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_valid 
        = vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[0U] 
        = ((0xffffff00U & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [0U]) | vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
           [0U][0U]);
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[0U] 
        = ((0xffff00ffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [0U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [0U][1U] << 8U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[0U] 
        = ((0xff00ffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [0U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [0U][2U] << 0x10U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[0U] 
        = ((0xffffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [0U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [0U][3U] << 0x18U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[1U] 
        = ((0xffffff00U & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [1U]) | vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
           [1U][0U]);
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[1U] 
        = ((0xffff00ffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [1U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [1U][1U] << 8U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[1U] 
        = ((0xff00ffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [1U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [1U][2U] << 0x10U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[1U] 
        = ((0xffffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [1U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [1U][3U] << 0x18U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[2U] 
        = ((0xffffff00U & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [2U]) | vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
           [2U][0U]);
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[2U] 
        = ((0xffff00ffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [2U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [2U][1U] << 8U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[2U] 
        = ((0xff00ffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [2U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [2U][2U] << 0x10U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[2U] 
        = ((0xffffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [2U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [2U][3U] << 0x18U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[3U] 
        = ((0xffffff00U & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [3U]) | vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
           [3U][0U]);
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[3U] 
        = ((0xffff00ffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [3U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [3U][1U] << 8U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[3U] 
        = ((0xff00ffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [3U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [3U][2U] << 0x10U));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[3U] 
        = ((0xffffffU & vlSelf->tb_top_int__DOT__dut__DOT__pp_packed
            [3U]) | (vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                     [3U][3U] << 0x18U));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_valid 
        = ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__rst))) 
           && (IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [0U][0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [0U][1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [0U][2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [0U][3U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [1U][0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [1U][1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [1U][2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [1U][3U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [2U][0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [2U][1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [2U][2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [2U][3U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [3U][0U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [3U][1U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [3U][2U];
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
        [3U][3U];
    vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__output_fire 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__error = 0U;
    vlSelf->tb_top_int__DOT__busy = 1U;
    if ((8U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                    vlSelf->tb_top_int__DOT__error = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            vlSelf->tb_top_int__DOT__busy = 0U;
        } else if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            vlSelf->tb_top_int__DOT__busy = 0U;
        } else if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            vlSelf->tb_top_int__DOT__busy = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
                vlSelf->tb_top_int__DOT__busy = 0U;
            }
        }
    }
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__m_out_tvalid = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__m_out_tvalid = 1U;
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast 
                        = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc) 
                            == ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc) 
                                - (IData)(1U))) & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial) 
                                                   == 
                                                   ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial) 
                                                    - (IData)(1U))));
                }
                if ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
                vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid 
                    = (2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt));
            }
        } else if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)))) {
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next = 1U;
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst 
                        = (0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt));
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc 
                        = ((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt)) 
                           & (0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic)));
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap 
                        = (((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt)) 
                            & (0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic))) 
                           & (0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)));
                    vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start 
                        = (0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt));
                }
            }
        }
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout 
        = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt) 
            >= (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout)) 
           & ((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
              & (9U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))));
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr 
        = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr;
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel 
        = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel;
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b[__Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b__v0;
    }
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a[__Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a__v0;
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr 
        = __Vdly__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr;
    if (__Vdlyvset__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram[__Vdlyvdim0__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0] 
            = __Vdlyvval__tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram__v0;
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_en 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start) 
           | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active));
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[0U] 
        = (0xffU & vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data);
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[1U] 
        = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                    >> 8U));
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[2U] 
        = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                    >> 0x10U));
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[3U] 
        = (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
           >> 0x18U);
    vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[0U] 
        = (0xffU & vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data);
    vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[1U] 
        = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                    >> 8U));
    vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[2U] 
        = (0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                    >> 0x10U));
    vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[3U] 
        = (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
           >> 0x18U);
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__output_fire 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid;
}

VL_INLINE_OPT void Vtb_top_int___024root___nba_sequent__TOP__1(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_top_int__DOT__clk__v0) {
        vlSelf->tb_top_int__DOT__clk = vlSelf->__Vdlyvval__tb_top_int__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_top_int__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vtb_top_int___024root___nba_comb__TOP__0(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
           & (IData)(vlSelf->tb_top_int__DOT__m_out_tready));
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire 
        = (1U & (IData)(vlSelf->tb_top_int__DOT__s_wgt_tvalid));
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready 
        = (1U & ((~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid)) 
                 | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready));
    vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm 
        = ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt)) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire));
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state;
    if (vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 9U;
    } else if ((8U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state 
            = ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                ? 0U : ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                         ? 0U : ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))
                                  ? 9U : (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc) 
                                           < ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc) 
                                              - (IData)(1U)))
                                           ? 1U : (
                                                   ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial) 
                                                    < 
                                                    ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial) 
                                                     - (IData)(1U)))
                                                    ? 1U
                                                    : 0U)))));
    } else if ((4U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
                if (vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm) {
                    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 8U;
                }
            } else if (vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state 
                = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic) 
                    < ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic) 
                       - (IData)(1U))) ? 2U : 6U);
        } else if ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
            if (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt) 
                 == ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth) 
                     - (IData)(1U)))) {
                vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 4U;
            }
        } else if ((3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))) {
        if (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat) 
             & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat))) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 2U;
        }
    } else if (vlSelf->tb_top_int__DOT__start) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = 1U;
    }
}

void Vtb_top_int___024root___eval_nba(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_top_int___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_top_int___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x1dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_top_int___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
}

void Vtb_top_int___024root___timing_resume(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc1be2c8c__0.resume("@(posedge tb_top_int.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3a2e7aa0__0.resume("@([changed] tb_top_int.busy)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h43a5e771__0.resume("@([changed] (~ tb_top_int.busy))");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_top_int___024root___timing_commit(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc1be2c8c__0.commit("@(posedge tb_top_int.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3a2e7aa0__0.commit("@([changed] tb_top_int.busy)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h43a5e771__0.commit("@([changed] (~ tb_top_int.busy))");
    }
}

void Vtb_top_int___024root___eval_triggers__act(Vtb_top_int___024root* vlSelf);

bool Vtb_top_int___024root___eval_phase__act(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top_int___024root___eval_triggers__act(vlSelf);
    Vtb_top_int___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_top_int___024root___timing_resume(vlSelf);
        Vtb_top_int___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top_int___024root___eval_phase__nba(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top_int___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__nba(Vtb_top_int___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__act(Vtb_top_int___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_int___024root___eval(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_top_int___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_int___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_top_int___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_top_int___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top_int___024root___eval_debug_assertions(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
