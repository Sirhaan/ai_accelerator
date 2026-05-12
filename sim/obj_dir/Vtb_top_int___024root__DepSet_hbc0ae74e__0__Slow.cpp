// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_int.h for the primary calling header

#include "Vtb_top_int__pch.h"
#include "Vtb_top_int___024root.h"

VL_ATTR_COLD void Vtb_top_int___024root___eval_static__TOP(Vtb_top_int___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_int___024root___eval_static(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_static\n"); );
    // Body
    Vtb_top_int___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_top_int___024root___eval_static__TOP(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_top_int__DOT__pass_count = 0U;
    vlSelf->tb_top_int__DOT__fail_count = 0U;
    vlSelf->tb_top_int__DOT__output_idx = 0U;
}

VL_ATTR_COLD void Vtb_top_int___024root___eval_final(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__stl(Vtb_top_int___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top_int___024root___eval_phase__stl(Vtb_top_int___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_int___024root___eval_settle(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_top_int___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_top_int___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__stl(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_int___024root___stl_sequent__TOP__0(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__output_fire 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid;
    vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__output_fire 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid;
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_valid 
        = vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire 
        = (1U & (IData)(vlSelf->tb_top_int__DOT__s_wgt_tvalid));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
        = (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
           + (((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg)));
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap = 0U;
    vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid 
        = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_valid) 
            << 3U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_valid) 
                       << 2U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_valid) 
                                  << 1U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_valid))));
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
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast = 0U;
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
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[0U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[1U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[2U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[4U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[3U][4U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout 
        = (((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt) 
            >= (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout)) 
           & ((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state)) 
              & (9U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state))));
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
           & (IData)(vlSelf->tb_top_int__DOT__m_out_tready));
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[0U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[1U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[2U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][0U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][1U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][2U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg;
    vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[3U][3U] 
        = vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg;
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
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_en 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start) 
           | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active));
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready 
        = (1U & ((~ (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid)) 
                 | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire)));
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
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire 
        = ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid) 
           & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready));
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

VL_ATTR_COLD void Vtb_top_int___024root___eval_stl(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_top_int___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_top_int___024root___eval_triggers__stl(Vtb_top_int___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top_int___024root___eval_phase__stl(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top_int___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_top_int___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__act(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_int.clk or posedge tb_top_int.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_top_int.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_top_int.busy)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] (~ tb_top_int.busy))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__nba(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_int.clk or posedge tb_top_int.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_top_int.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_top_int.busy)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] (~ tb_top_int.busy))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_int___024root___ctor_var_reset(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_top_int__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__s_wgt_tdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__s_wgt_tlast = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__s_act_tvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_top_int__DOT__s_act_tdata);
    vlSelf->tb_top_int__DOT__s_act_tlast = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__m_out_tready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__cfg_num_ic = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__cfg_num_oc = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__cfg_num_spatial = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__cfg_k_depth = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__cfg_timeout = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__cfg_act_type = VL_RAND_RESET_I(2);
    vlSelf->tb_top_int__DOT__cfg_inv_scale = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__cfg_scale_mult = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__cfg_bias[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__perf_total_cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_compute_cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_wgt_load_cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_drain_cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_tile_count = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_overflow_count = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__perf_timeout_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__wgt_stimulus[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_top_int__DOT__act_stimulus[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__num_wgt_vectors = 0;
    vlSelf->tb_top_int__DOT__num_act_vectors = 0;
    vlSelf->tb_top_int__DOT__num_expected = 0;
    vlSelf->tb_top_int__DOT__pass_count = 0;
    vlSelf->tb_top_int__DOT__fail_count = 0;
    vlSelf->tb_top_int__DOT__output_idx = 0;
    vlSelf->tb_top_int__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr = VL_RAND_RESET_I(2);
    vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr = VL_RAND_RESET_I(2);
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__act_rd_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__out_buf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__clip_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__clip_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__clip_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__clip_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__output_fire = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data);
    vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__output_fire = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_a[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_bank_b[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_done = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr = VL_RAND_RESET_I(9);
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_done = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__m_out_tvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type = VL_RAND_RESET_I(2);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__err_code_reg = VL_RAND_RESET_I(3);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg = VL_RAND_RESET_Q(48);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg = VL_RAND_RESET_Q(48);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg = VL_RAND_RESET_Q(48);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg = VL_RAND_RESET_Q(48);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[__Vi0] = VL_RAND_RESET_Q(49);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[__Vi0] = VL_RAND_RESET_Q(49);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[__Vi0] = VL_RAND_RESET_Q(49);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[__Vi0] = VL_RAND_RESET_Q(49);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat = VL_RAND_RESET_I(4);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated = VL_RAND_RESET_I(1);
    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tb_top_int__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_top_int__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__busy__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_he392af5f__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
