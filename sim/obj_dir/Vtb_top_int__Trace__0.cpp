// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top_int__Syms.h"


void Vtb_top_int___024root__trace_chg_0_sub_0(Vtb_top_int___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top_int___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_chg_0\n"); );
    // Init
    Vtb_top_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_int___024root*>(voidSelf);
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_top_int___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top_int___024root__trace_chg_0_sub_0(Vtb_top_int___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_top_int__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->tb_top_int__DOT__m_out_tready));
        bufp->chgSData(oldp+2,(vlSelf->tb_top_int__DOT__cfg_num_ic),16);
        bufp->chgSData(oldp+3,(vlSelf->tb_top_int__DOT__cfg_num_oc),16);
        bufp->chgSData(oldp+4,(vlSelf->tb_top_int__DOT__cfg_num_spatial),16);
        bufp->chgSData(oldp+5,(vlSelf->tb_top_int__DOT__cfg_k_depth),16);
        bufp->chgSData(oldp+6,(vlSelf->tb_top_int__DOT__cfg_timeout),16);
        bufp->chgCData(oldp+7,(vlSelf->tb_top_int__DOT__cfg_act_type),2);
        bufp->chgSData(oldp+8,(vlSelf->tb_top_int__DOT__cfg_inv_scale),16);
        bufp->chgSData(oldp+9,(vlSelf->tb_top_int__DOT__cfg_scale_mult),16);
        bufp->chgIData(oldp+10,(vlSelf->tb_top_int__DOT__cfg_bias[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_top_int__DOT__cfg_bias[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_top_int__DOT__cfg_bias[2]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_top_int__DOT__cfg_bias[3]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_top_int__DOT__pass_count),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_top_int__DOT__fail_count),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_top_int__DOT__output_idx),32);
        bufp->chgQData(oldp+17,((0x1ffffffffffffULL 
                                 & VL_SHIFTL_QQI(49,49,32, 
                                                 VL_EXTENDS_QI(49,32, 
                                                               vlSelf->tb_top_int__DOT__cfg_bias
                                                               [0U]), 0xfU))),49);
        bufp->chgQData(oldp+19,((0x1ffffffffffffULL 
                                 & VL_SHIFTL_QQI(49,49,32, 
                                                 VL_EXTENDS_QI(49,32, 
                                                               vlSelf->tb_top_int__DOT__cfg_bias
                                                               [1U]), 0xfU))),49);
        bufp->chgQData(oldp+21,((0x1ffffffffffffULL 
                                 & VL_SHIFTL_QQI(49,49,32, 
                                                 VL_EXTENDS_QI(49,32, 
                                                               vlSelf->tb_top_int__DOT__cfg_bias
                                                               [2U]), 0xfU))),49);
        bufp->chgQData(oldp+23,((0x1ffffffffffffULL 
                                 & VL_SHIFTL_QQI(49,49,32, 
                                                 VL_EXTENDS_QI(49,32, 
                                                               vlSelf->tb_top_int__DOT__cfg_bias
                                                               [3U]), 0xfU))),49);
        bufp->chgIData(oldp+25,(vlSelf->tb_top_int__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+26,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                             [0U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                              [0U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+27,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                             [1U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                              [1U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+28,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                             [2U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                              [2U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+29,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                             [3U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                              [3U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+30,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                             [0U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                              [0U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+31,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                             [1U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                              [1U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+32,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                             [2U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                              [2U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+33,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                             [3U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                              [3U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+34,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                             [0U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                              [0U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+35,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                             [1U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                              [1U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+36,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                             [2U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                              [2U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+37,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                             [3U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                              [3U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+38,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                             [0U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                              [0U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+39,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                             [1U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                              [1U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+40,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                             [2U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                              [2U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act))))),8);
        bufp->chgCData(oldp+41,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                  ? (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act)
                                  : ((1U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                      ? ((0x80U & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                          ? 0U : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))
                                      : ((2U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
                                          ? vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut
                                         [(0x3ffU & (IData)(
                                                            (0x1ffffffffffULL 
                                                             & ((0x20000ULL 
                                                                 + 
                                                                 (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                             [3U])
                                                                   ? 0x20000ULL
                                                                   : 
                                                                  (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                              [3U])
                                                                    ? 0x1fffffffe0000ULL
                                                                    : 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U]))) 
                                                                >> 8U))))]
                                          : (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act))))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgWData(oldp+42,(vlSelf->tb_top_int__DOT__s_act_tdata),128);
        bufp->chgBit(oldp+46,(vlSelf->tb_top_int__DOT__s_act_tlast));
        bufp->chgIData(oldp+47,(vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+48,(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready));
        bufp->chgBit(oldp+49,(vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm));
        bufp->chgCData(oldp+50,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state),4);
        bufp->chgBit(oldp+51,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire));
        bufp->chgBit(oldp+52,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire));
        bufp->chgBit(oldp+53,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+54,(1U));
        bufp->chgBit(oldp+55,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid));
        bufp->chgIData(oldp+56,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data),32);
        bufp->chgBit(oldp+57,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last));
        bufp->chgBit(oldp+58,(vlSelf->tb_top_int__DOT__busy));
        bufp->chgBit(oldp+59,(vlSelf->tb_top_int__DOT__error));
        bufp->chgCData(oldp+60,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__err_code_reg),3);
        bufp->chgIData(oldp+61,(vlSelf->tb_top_int__DOT__perf_total_cycles),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_top_int__DOT__perf_compute_cycles),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_top_int__DOT__perf_stall_cycles),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_top_int__DOT__perf_wgt_load_cycles),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_top_int__DOT__perf_drain_cycles),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_top_int__DOT__perf_tile_count),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_top_int__DOT__perf_overflow_count),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_top_int__DOT__perf_timeout_count),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data),32);
        bufp->chgBit(oldp+70,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid));
        bufp->chgBit(oldp+71,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last));
        bufp->chgWData(oldp+72,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data),128);
        bufp->chgBit(oldp+76,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid));
        bufp->chgBit(oldp+77,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last));
        bufp->chgIData(oldp+78,((((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out) 
                                  << 0x18U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out))))),32);
        bufp->chgCData(oldp+79,(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr),2);
        bufp->chgCData(oldp+80,(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr),2);
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr) 
                                     >> 1U))));
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr) 
                                     >> 1U))));
        bufp->chgCData(oldp+83,((((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__clip_flag) 
                                  << 3U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__clip_flag) 
                                             << 2U) 
                                            | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__clip_flag) 
                                                << 1U) 
                                               | (IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__clip_flag))))),4);
        bufp->chgIData(oldp+84,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data),32);
        bufp->chgBit(oldp+85,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_valid));
        bufp->chgIData(oldp+86,(vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data),32);
        bufp->chgBit(oldp+87,(vlSelf->tb_top_int__DOT__dut__DOT__act_rd_valid));
        bufp->chgCData(oldp+88,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[0]),8);
        bufp->chgCData(oldp+89,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[1]),8);
        bufp->chgCData(oldp+90,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[2]),8);
        bufp->chgCData(oldp+91,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[3]),8);
        bufp->chgCData(oldp+92,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[0]),8);
        bufp->chgCData(oldp+93,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[1]),8);
        bufp->chgCData(oldp+94,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[2]),8);
        bufp->chgCData(oldp+95,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[3]),8);
        bufp->chgIData(oldp+96,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                [0U][0U]),32);
        bufp->chgIData(oldp+97,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                [0U][1U]),32);
        bufp->chgIData(oldp+98,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                [0U][2U]),32);
        bufp->chgIData(oldp+99,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                [0U][3U]),32);
        bufp->chgIData(oldp+100,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [1U][0U]),32);
        bufp->chgIData(oldp+101,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [1U][1U]),32);
        bufp->chgIData(oldp+102,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [1U][2U]),32);
        bufp->chgIData(oldp+103,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [1U][3U]),32);
        bufp->chgIData(oldp+104,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [2U][0U]),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [2U][1U]),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [2U][2U]),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [2U][3U]),32);
        bufp->chgIData(oldp+108,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [3U][0U]),32);
        bufp->chgIData(oldp+109,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [3U][1U]),32);
        bufp->chgIData(oldp+110,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [3U][2U]),32);
        bufp->chgIData(oldp+111,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                                 [3U][3U]),32);
        bufp->chgBit(oldp+112,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [0U][0U]));
        bufp->chgBit(oldp+113,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [0U][1U]));
        bufp->chgBit(oldp+114,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [0U][2U]));
        bufp->chgBit(oldp+115,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [0U][3U]));
        bufp->chgBit(oldp+116,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [1U][0U]));
        bufp->chgBit(oldp+117,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [1U][1U]));
        bufp->chgBit(oldp+118,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [1U][2U]));
        bufp->chgBit(oldp+119,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [1U][3U]));
        bufp->chgBit(oldp+120,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [2U][0U]));
        bufp->chgBit(oldp+121,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [2U][1U]));
        bufp->chgBit(oldp+122,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [2U][2U]));
        bufp->chgBit(oldp+123,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [2U][3U]));
        bufp->chgBit(oldp+124,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [3U][0U]));
        bufp->chgBit(oldp+125,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [3U][1U]));
        bufp->chgBit(oldp+126,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [3U][2U]));
        bufp->chgBit(oldp+127,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                               [3U][3U]));
        bufp->chgBit(oldp+128,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat))));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active) 
                                & (3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt)))));
        bufp->chgCData(oldp+130,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [0U][0U]),8);
        bufp->chgCData(oldp+131,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [0U][1U]),8);
        bufp->chgCData(oldp+132,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [0U][2U]),8);
        bufp->chgCData(oldp+133,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [0U][3U]),8);
        bufp->chgCData(oldp+134,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [1U][0U]),8);
        bufp->chgCData(oldp+135,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [1U][1U]),8);
        bufp->chgCData(oldp+136,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [1U][2U]),8);
        bufp->chgCData(oldp+137,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [1U][3U]),8);
        bufp->chgCData(oldp+138,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [2U][0U]),8);
        bufp->chgCData(oldp+139,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [2U][1U]),8);
        bufp->chgCData(oldp+140,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [2U][2U]),8);
        bufp->chgCData(oldp+141,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [2U][3U]),8);
        bufp->chgCData(oldp+142,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [3U][0U]),8);
        bufp->chgCData(oldp+143,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [3U][1U]),8);
        bufp->chgCData(oldp+144,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [3U][2U]),8);
        bufp->chgCData(oldp+145,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                                 [3U][3U]),8);
        bufp->chgCData(oldp+146,(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid),4);
        bufp->chgCData(oldp+147,((((IData)((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat))) 
                                                 << 1U) 
                                                | (0U 
                                                   != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat)))))),4);
        bufp->chgIData(oldp+148,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[0]),32);
        bufp->chgIData(oldp+149,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[1]),32);
        bufp->chgIData(oldp+150,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[2]),32);
        bufp->chgIData(oldp+151,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[3]),32);
        bufp->chgCData(oldp+152,(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt),2);
        bufp->chgBit(oldp+153,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid));
        bufp->chgIData(oldp+154,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[0]),32);
        bufp->chgIData(oldp+155,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[1]),32);
        bufp->chgIData(oldp+156,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[2]),32);
        bufp->chgIData(oldp+157,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[3]),32);
        bufp->chgIData(oldp+158,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf
                                 [vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt]),32);
        bufp->chgBit(oldp+159,(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast) 
                                & (3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt)))));
        bufp->chgBit(oldp+160,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start));
        bufp->chgBit(oldp+161,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable));
        bufp->chgBit(oldp+162,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc));
        bufp->chgBit(oldp+163,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next));
        bufp->chgBit(oldp+164,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next));
        bufp->chgBit(oldp+165,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst));
        bufp->chgBit(oldp+166,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap));
        bufp->chgBit(oldp+167,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid));
        bufp->chgCData(oldp+168,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type),2);
        bufp->chgBit(oldp+169,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast));
        bufp->chgBit(oldp+170,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_done));
        bufp->chgBit(oldp+171,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_done));
        bufp->chgBit(oldp+172,(vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat));
        bufp->chgBit(oldp+173,(vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat));
        bufp->chgSData(oldp+174,(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat),16);
        bufp->chgIData(oldp+175,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[0]),32);
        bufp->chgIData(oldp+176,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[1]),32);
        bufp->chgIData(oldp+177,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[2]),32);
        bufp->chgIData(oldp+178,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[3]),32);
        bufp->chgCData(oldp+179,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[0]),8);
        bufp->chgCData(oldp+180,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[1]),8);
        bufp->chgCData(oldp+181,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[2]),8);
        bufp->chgCData(oldp+182,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[3]),8);
        bufp->chgBit(oldp+183,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_valid));
        bufp->chgBit(oldp+184,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat))));
        bufp->chgQData(oldp+185,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
        bufp->chgQData(oldp+187,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
        bufp->chgQData(oldp+189,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
        bufp->chgQData(oldp+191,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
        bufp->chgBit(oldp+193,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_valid));
        bufp->chgQData(oldp+194,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[0]),49);
        bufp->chgQData(oldp+196,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[1]),49);
        bufp->chgQData(oldp+198,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[2]),49);
        bufp->chgQData(oldp+200,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[3]),49);
        bufp->chgBit(oldp+202,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid));
        bufp->chgCData(oldp+203,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[0]),8);
        bufp->chgCData(oldp+204,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[1]),8);
        bufp->chgCData(oldp+205,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[2]),8);
        bufp->chgCData(oldp+206,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[3]),8);
        bufp->chgCData(oldp+207,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat),4);
        bufp->chgQData(oldp+208,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                     [0U]))),49);
        bufp->chgQData(oldp+210,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                     [0U])), 0xfU))),34);
        bufp->chgBit(oldp+212,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
        bufp->chgCData(oldp+213,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+214,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                             [0U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                 [0U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                      [0U]))),49);
        bufp->chgQData(oldp+216,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                              [0U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                               [0U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                    [0U]))))),49);
        bufp->chgSData(oldp+218,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                    [0U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                     [0U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+219,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                     [1U]))),49);
        bufp->chgQData(oldp+221,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                     [1U])), 0xfU))),34);
        bufp->chgBit(oldp+223,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
        bufp->chgCData(oldp+224,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+225,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                             [1U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                 [1U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                      [1U]))),49);
        bufp->chgQData(oldp+227,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                              [1U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                               [1U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                    [1U]))))),49);
        bufp->chgSData(oldp+229,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                    [1U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                     [1U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+230,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                     [2U]))),49);
        bufp->chgQData(oldp+232,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                     [2U])), 0xfU))),34);
        bufp->chgBit(oldp+234,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
        bufp->chgCData(oldp+235,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+236,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                             [2U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                 [2U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                      [2U]))),49);
        bufp->chgQData(oldp+238,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                              [2U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                               [2U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                    [2U]))))),49);
        bufp->chgSData(oldp+240,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                    [2U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                     [2U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+241,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                     [3U]))),49);
        bufp->chgQData(oldp+243,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                     [3U])), 0xfU))),34);
        bufp->chgBit(oldp+245,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
        bufp->chgCData(oldp+246,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+247,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                             [3U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                 [3U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                      [3U]))),49);
        bufp->chgQData(oldp+249,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                              [3U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                               [3U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                    [3U]))))),49);
        bufp->chgSData(oldp+251,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                    [3U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                     [3U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U]))) 
                                                       >> 8U))))),10);
        bufp->chgIData(oldp+252,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+253,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
        bufp->chgIData(oldp+254,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[0]),32);
        bufp->chgIData(oldp+255,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[1]),32);
        bufp->chgIData(oldp+256,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[2]),32);
        bufp->chgIData(oldp+257,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[3]),32);
        bufp->chgCData(oldp+258,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[0]),8);
        bufp->chgCData(oldp+259,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[1]),8);
        bufp->chgCData(oldp+260,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[2]),8);
        bufp->chgCData(oldp+261,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[3]),8);
        bufp->chgBit(oldp+262,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_valid));
        bufp->chgBit(oldp+263,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat))));
        bufp->chgQData(oldp+264,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
        bufp->chgQData(oldp+266,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
        bufp->chgQData(oldp+268,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
        bufp->chgQData(oldp+270,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
        bufp->chgBit(oldp+272,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_valid));
        bufp->chgQData(oldp+273,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[0]),49);
        bufp->chgQData(oldp+275,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[1]),49);
        bufp->chgQData(oldp+277,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[2]),49);
        bufp->chgQData(oldp+279,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[3]),49);
        bufp->chgBit(oldp+281,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid));
        bufp->chgCData(oldp+282,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[0]),8);
        bufp->chgCData(oldp+283,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[1]),8);
        bufp->chgCData(oldp+284,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[2]),8);
        bufp->chgCData(oldp+285,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[3]),8);
        bufp->chgCData(oldp+286,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat),4);
        bufp->chgQData(oldp+287,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                     [0U]))),49);
        bufp->chgQData(oldp+289,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                     [0U])), 0xfU))),34);
        bufp->chgBit(oldp+291,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
        bufp->chgCData(oldp+292,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+293,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                             [0U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                 [0U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                      [0U]))),49);
        bufp->chgQData(oldp+295,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                              [0U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                               [0U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                    [0U]))))),49);
        bufp->chgSData(oldp+297,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                    [0U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                     [0U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+298,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                     [1U]))),49);
        bufp->chgQData(oldp+300,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                     [1U])), 0xfU))),34);
        bufp->chgBit(oldp+302,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
        bufp->chgCData(oldp+303,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+304,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                             [1U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                 [1U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                      [1U]))),49);
        bufp->chgQData(oldp+306,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                              [1U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                               [1U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                    [1U]))))),49);
        bufp->chgSData(oldp+308,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                    [1U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                     [1U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+309,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                     [2U]))),49);
        bufp->chgQData(oldp+311,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                     [2U])), 0xfU))),34);
        bufp->chgBit(oldp+313,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
        bufp->chgCData(oldp+314,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+315,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                             [2U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                 [2U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                      [2U]))),49);
        bufp->chgQData(oldp+317,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                              [2U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                               [2U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                    [2U]))))),49);
        bufp->chgSData(oldp+319,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                    [2U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                     [2U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+320,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                     [3U]))),49);
        bufp->chgQData(oldp+322,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                     [3U])), 0xfU))),34);
        bufp->chgBit(oldp+324,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
        bufp->chgCData(oldp+325,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+326,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                             [3U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                 [3U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                      [3U]))),49);
        bufp->chgQData(oldp+328,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                              [3U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                               [3U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                    [3U]))))),49);
        bufp->chgSData(oldp+330,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                    [3U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                     [3U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U]))) 
                                                       >> 8U))))),10);
        bufp->chgIData(oldp+331,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+332,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
        bufp->chgIData(oldp+333,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[0]),32);
        bufp->chgIData(oldp+334,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[1]),32);
        bufp->chgIData(oldp+335,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[2]),32);
        bufp->chgIData(oldp+336,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[3]),32);
        bufp->chgCData(oldp+337,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[0]),8);
        bufp->chgCData(oldp+338,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[1]),8);
        bufp->chgCData(oldp+339,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[2]),8);
        bufp->chgCData(oldp+340,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[3]),8);
        bufp->chgBit(oldp+341,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_valid));
        bufp->chgBit(oldp+342,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat))));
        bufp->chgQData(oldp+343,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
        bufp->chgQData(oldp+345,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
        bufp->chgQData(oldp+347,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
        bufp->chgQData(oldp+349,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
        bufp->chgBit(oldp+351,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_valid));
        bufp->chgQData(oldp+352,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[0]),49);
        bufp->chgQData(oldp+354,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[1]),49);
        bufp->chgQData(oldp+356,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[2]),49);
        bufp->chgQData(oldp+358,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[3]),49);
        bufp->chgBit(oldp+360,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid));
        bufp->chgCData(oldp+361,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[0]),8);
        bufp->chgCData(oldp+362,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[1]),8);
        bufp->chgCData(oldp+363,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[2]),8);
        bufp->chgCData(oldp+364,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[3]),8);
        bufp->chgCData(oldp+365,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat),4);
        bufp->chgQData(oldp+366,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                     [0U]))),49);
        bufp->chgQData(oldp+368,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                     [0U])), 0xfU))),34);
        bufp->chgBit(oldp+370,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
        bufp->chgCData(oldp+371,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+372,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                             [0U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                 [0U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                      [0U]))),49);
        bufp->chgQData(oldp+374,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                              [0U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                               [0U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                    [0U]))))),49);
        bufp->chgSData(oldp+376,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                    [0U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                     [0U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+377,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                     [1U]))),49);
        bufp->chgQData(oldp+379,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                     [1U])), 0xfU))),34);
        bufp->chgBit(oldp+381,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
        bufp->chgCData(oldp+382,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+383,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                             [1U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                 [1U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                      [1U]))),49);
        bufp->chgQData(oldp+385,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                              [1U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                               [1U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                    [1U]))))),49);
        bufp->chgSData(oldp+387,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                    [1U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                     [1U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+388,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                     [2U]))),49);
        bufp->chgQData(oldp+390,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                     [2U])), 0xfU))),34);
        bufp->chgBit(oldp+392,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
        bufp->chgCData(oldp+393,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+394,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                             [2U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                 [2U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                      [2U]))),49);
        bufp->chgQData(oldp+396,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                              [2U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                               [2U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                    [2U]))))),49);
        bufp->chgSData(oldp+398,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                    [2U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                     [2U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+399,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                     [3U]))),49);
        bufp->chgQData(oldp+401,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                     [3U])), 0xfU))),34);
        bufp->chgBit(oldp+403,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
        bufp->chgCData(oldp+404,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+405,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                             [3U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                 [3U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                      [3U]))),49);
        bufp->chgQData(oldp+407,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                              [3U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                               [3U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                    [3U]))))),49);
        bufp->chgSData(oldp+409,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                    [3U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                     [3U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U]))) 
                                                       >> 8U))))),10);
        bufp->chgIData(oldp+410,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+411,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
        bufp->chgIData(oldp+412,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[0]),32);
        bufp->chgIData(oldp+413,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[1]),32);
        bufp->chgIData(oldp+414,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[2]),32);
        bufp->chgIData(oldp+415,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[3]),32);
        bufp->chgCData(oldp+416,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[0]),8);
        bufp->chgCData(oldp+417,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[1]),8);
        bufp->chgCData(oldp+418,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[2]),8);
        bufp->chgCData(oldp+419,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[3]),8);
        bufp->chgBit(oldp+420,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_valid));
        bufp->chgBit(oldp+421,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat))));
        bufp->chgQData(oldp+422,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
        bufp->chgQData(oldp+424,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
        bufp->chgQData(oldp+426,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
        bufp->chgQData(oldp+428,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
        bufp->chgBit(oldp+430,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_valid));
        bufp->chgQData(oldp+431,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[0]),49);
        bufp->chgQData(oldp+433,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[1]),49);
        bufp->chgQData(oldp+435,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[2]),49);
        bufp->chgQData(oldp+437,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[3]),49);
        bufp->chgBit(oldp+439,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid));
        bufp->chgCData(oldp+440,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[0]),8);
        bufp->chgCData(oldp+441,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[1]),8);
        bufp->chgCData(oldp+442,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[2]),8);
        bufp->chgCData(oldp+443,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[3]),8);
        bufp->chgCData(oldp+444,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat),4);
        bufp->chgQData(oldp+445,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                     [0U]))),49);
        bufp->chgQData(oldp+447,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                     [0U])), 0xfU))),34);
        bufp->chgBit(oldp+449,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
        bufp->chgCData(oldp+450,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+451,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                             [0U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                 [0U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                      [0U]))),49);
        bufp->chgQData(oldp+453,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [0U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                               [0U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                    [0U]))))),49);
        bufp->chgSData(oldp+455,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                    [0U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                     [0U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [0U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+456,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                     [1U]))),49);
        bufp->chgQData(oldp+458,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                     [1U])), 0xfU))),34);
        bufp->chgBit(oldp+460,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
        bufp->chgCData(oldp+461,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+462,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                             [1U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                 [1U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                      [1U]))),49);
        bufp->chgQData(oldp+464,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [1U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                               [1U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                    [1U]))))),49);
        bufp->chgSData(oldp+466,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                    [1U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                     [1U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [1U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+467,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                     [2U]))),49);
        bufp->chgQData(oldp+469,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                     [2U])), 0xfU))),34);
        bufp->chgBit(oldp+471,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
        bufp->chgCData(oldp+472,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+473,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                             [2U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                 [2U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                      [2U]))),49);
        bufp->chgQData(oldp+475,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [2U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                               [2U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                    [2U]))))),49);
        bufp->chgSData(oldp+477,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                    [2U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                     [2U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [2U]))) 
                                                       >> 8U))))),10);
        bufp->chgQData(oldp+478,((0x1ffffffffffffULL 
                                  & (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                     [3U]))),49);
        bufp->chgQData(oldp+480,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(49,49,32, 
                                                 (0x1ffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + 
                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                     [3U])), 0xfU))),34);
        bufp->chgBit(oldp+482,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
        bufp->chgCData(oldp+483,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
        bufp->chgQData(oldp+484,((VL_LTS_IQQ(49, 0x20000ULL, 
                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                             [3U]) ? 0x20000ULL
                                   : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                 vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                 [3U])
                                       ? 0x1fffffffe0000ULL
                                       : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                      [3U]))),49);
        bufp->chgQData(oldp+486,((0x1ffffffffffffULL 
                                  & (0x20000ULL + (
                                                   VL_LTS_IQQ(49, 0x20000ULL, 
                                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                              [3U])
                                                    ? 0x20000ULL
                                                    : 
                                                   (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                               vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                               [3U])
                                                     ? 0x1fffffffe0000ULL
                                                     : 
                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                    [3U]))))),49);
        bufp->chgSData(oldp+488,((0x3ffU & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & ((0x20000ULL 
                                                        + 
                                                        (VL_LTS_IQQ(49, 0x20000ULL, 
                                                                    vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                    [3U])
                                                          ? 0x20000ULL
                                                          : 
                                                         (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                                     vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                     [3U])
                                                           ? 0x1fffffffe0000ULL
                                                           : 
                                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                          [3U]))) 
                                                       >> 8U))))),10);
        bufp->chgIData(oldp+489,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+490,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
        bufp->chgIData(oldp+491,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U]),32);
        bufp->chgCData(oldp+492,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out),8);
        bufp->chgBit(oldp+493,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__clip_flag));
        bufp->chgQData(oldp+494,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg),48);
        bufp->chgQData(oldp+496,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(48,48,32, 
                                                 (0xffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
        bufp->chgBit(oldp+498,(VL_LTS_IQQ(33, 0x7fULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgBit(oldp+499,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgIData(oldp+500,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U]),32);
        bufp->chgCData(oldp+501,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out),8);
        bufp->chgBit(oldp+502,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__clip_flag));
        bufp->chgQData(oldp+503,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg),48);
        bufp->chgQData(oldp+505,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(48,48,32, 
                                                 (0xffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
        bufp->chgBit(oldp+507,(VL_LTS_IQQ(33, 0x7fULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgBit(oldp+508,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgIData(oldp+509,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U]),32);
        bufp->chgCData(oldp+510,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out),8);
        bufp->chgBit(oldp+511,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__clip_flag));
        bufp->chgQData(oldp+512,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg),48);
        bufp->chgQData(oldp+514,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(48,48,32, 
                                                 (0xffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
        bufp->chgBit(oldp+516,(VL_LTS_IQQ(33, 0x7fULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgBit(oldp+517,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgIData(oldp+518,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U]),32);
        bufp->chgCData(oldp+519,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out),8);
        bufp->chgBit(oldp+520,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__clip_flag));
        bufp->chgQData(oldp+521,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg),48);
        bufp->chgQData(oldp+523,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(48,48,32, 
                                                 (0xffffffffffffULL 
                                                  & (0x4000ULL 
                                                     + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
        bufp->chgBit(oldp+525,(VL_LTS_IQQ(33, 0x7fULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgBit(oldp+526,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                          (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, 
                                                            (0xffffffffffffULL 
                                                             & (0x4000ULL 
                                                                + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
        bufp->chgCData(oldp+527,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][0U]),8);
        bufp->chgCData(oldp+528,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][1U]),8);
        bufp->chgCData(oldp+529,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][2U]),8);
        bufp->chgCData(oldp+530,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][3U]),8);
        bufp->chgCData(oldp+531,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][4U]),8);
        bufp->chgCData(oldp+532,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][0U]),8);
        bufp->chgCData(oldp+533,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][1U]),8);
        bufp->chgCData(oldp+534,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][2U]),8);
        bufp->chgCData(oldp+535,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][3U]),8);
        bufp->chgCData(oldp+536,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][4U]),8);
        bufp->chgCData(oldp+537,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][0U]),8);
        bufp->chgCData(oldp+538,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][1U]),8);
        bufp->chgCData(oldp+539,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][2U]),8);
        bufp->chgCData(oldp+540,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][3U]),8);
        bufp->chgCData(oldp+541,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][4U]),8);
        bufp->chgCData(oldp+542,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][0U]),8);
        bufp->chgCData(oldp+543,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][1U]),8);
        bufp->chgCData(oldp+544,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][2U]),8);
        bufp->chgCData(oldp+545,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][3U]),8);
        bufp->chgCData(oldp+546,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][4U]),8);
        bufp->chgCData(oldp+547,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [0U][0U]),8);
        bufp->chgCData(oldp+548,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [0U][1U]),8);
        bufp->chgCData(oldp+549,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [0U][2U]),8);
        bufp->chgCData(oldp+550,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [0U][3U]),8);
        bufp->chgCData(oldp+551,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][0U]),8);
        bufp->chgCData(oldp+552,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][1U]),8);
        bufp->chgCData(oldp+553,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][2U]),8);
        bufp->chgCData(oldp+554,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][3U]),8);
        bufp->chgCData(oldp+555,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][0U]),8);
        bufp->chgCData(oldp+556,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][1U]),8);
        bufp->chgCData(oldp+557,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][2U]),8);
        bufp->chgCData(oldp+558,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][3U]),8);
        bufp->chgCData(oldp+559,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][0U]),8);
        bufp->chgCData(oldp+560,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][1U]),8);
        bufp->chgCData(oldp+561,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][2U]),8);
        bufp->chgCData(oldp+562,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][3U]),8);
        bufp->chgCData(oldp+563,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [4U][0U]),8);
        bufp->chgCData(oldp+564,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [4U][1U]),8);
        bufp->chgCData(oldp+565,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [4U][2U]),8);
        bufp->chgCData(oldp+566,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [4U][3U]),8);
        bufp->chgBit(oldp+567,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active));
        bufp->chgCData(oldp+568,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt),3);
        bufp->chgBit(oldp+569,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_en));
        bufp->chgCData(oldp+570,((0xffU & vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data)),8);
        bufp->chgCData(oldp+571,((0xffU & vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data)),8);
        bufp->chgCData(oldp+572,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+573,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+574,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+575,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+576,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+577,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+578,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+579,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+580,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+581,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+582,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][1U]),8);
        bufp->chgCData(oldp+583,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+584,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+585,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+586,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+587,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+588,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+589,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+590,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+591,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+592,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+593,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+594,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][2U]),8);
        bufp->chgCData(oldp+595,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+596,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+597,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+598,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+599,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+600,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+601,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+602,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+603,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+604,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+605,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+606,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [0U][3U]),8);
        bufp->chgCData(oldp+607,((vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+608,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+609,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+610,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+611,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+612,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+613,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+614,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+615,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+616,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+617,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+618,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+619,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][0U]),8);
        bufp->chgCData(oldp+620,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+621,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+622,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+623,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+624,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+625,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+626,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+627,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+628,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+629,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+630,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][1U]),8);
        bufp->chgCData(oldp+631,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][1U]),8);
        bufp->chgCData(oldp+632,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+633,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+634,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+635,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+636,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+637,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+638,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+639,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+640,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+641,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+642,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][2U]),8);
        bufp->chgCData(oldp+643,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][2U]),8);
        bufp->chgCData(oldp+644,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+645,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+646,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+647,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+648,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+649,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+650,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+651,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+652,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+653,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+654,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [1U][3U]),8);
        bufp->chgCData(oldp+655,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [1U][3U]),8);
        bufp->chgCData(oldp+656,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+657,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+658,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+659,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+660,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+661,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+662,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+663,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+664,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+665,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+666,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+667,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][0U]),8);
        bufp->chgCData(oldp+668,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+669,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+670,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+671,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+672,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+673,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+674,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+675,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+676,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+677,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+678,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][1U]),8);
        bufp->chgCData(oldp+679,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][1U]),8);
        bufp->chgCData(oldp+680,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+681,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+682,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+683,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+684,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+685,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+686,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+687,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+688,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+689,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+690,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][2U]),8);
        bufp->chgCData(oldp+691,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][2U]),8);
        bufp->chgCData(oldp+692,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+693,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+694,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+695,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+696,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+697,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+698,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+699,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+700,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+701,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+702,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [2U][3U]),8);
        bufp->chgCData(oldp+703,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [2U][3U]),8);
        bufp->chgCData(oldp+704,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+705,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+706,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+707,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+708,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+709,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+710,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+711,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+712,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+713,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+714,((vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+715,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][0U]),8);
        bufp->chgCData(oldp+716,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+717,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+718,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+719,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+720,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+721,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+722,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+723,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+724,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+725,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+726,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][1U]),8);
        bufp->chgCData(oldp+727,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][1U]),8);
        bufp->chgCData(oldp+728,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+729,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+730,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+731,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+732,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+733,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+734,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+735,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+736,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+737,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+738,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][2U]),8);
        bufp->chgCData(oldp+739,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][2U]),8);
        bufp->chgCData(oldp+740,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+741,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+742,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+743,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+744,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+745,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+746,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+747,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+748,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+749,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgCData(oldp+750,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                                 [3U][3U]),8);
        bufp->chgCData(oldp+751,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                                 [3U][3U]),8);
        bufp->chgCData(oldp+752,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
        bufp->chgCData(oldp+753,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
        bufp->chgIData(oldp+754,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
        bufp->chgBit(oldp+755,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
        bufp->chgCData(oldp+756,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
        bufp->chgSData(oldp+757,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
        bufp->chgSData(oldp+758,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
        bufp->chgIData(oldp+759,((((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
        bufp->chgIData(oldp+760,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
        bufp->chgBit(oldp+761,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                  >> 0x1fU) == (1U 
                                                & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                                & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                    >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+762,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__m_out_tvalid));
        bufp->chgCData(oldp+763,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state),4);
        bufp->chgSData(oldp+764,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic),16);
        bufp->chgSData(oldp+765,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc),16);
        bufp->chgSData(oldp+766,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial),16);
        bufp->chgSData(oldp+767,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth),16);
        bufp->chgSData(oldp+768,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout),16);
        bufp->chgCData(oldp+769,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt),8);
        bufp->chgSData(oldp+770,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt),16);
        bufp->chgCData(oldp+771,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt),4);
        bufp->chgSData(oldp+772,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic),16);
        bufp->chgSData(oldp+773,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc),16);
        bufp->chgSData(oldp+774,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial),16);
        bufp->chgSData(oldp+775,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt),16);
        bufp->chgBit(oldp+776,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout));
        bufp->chgBit(oldp+777,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel));
        bufp->chgSData(oldp+778,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr),10);
        bufp->chgSData(oldp+779,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr),10);
        bufp->chgSData(oldp+780,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr),9);
        bufp->chgSData(oldp+781,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr),9);
    }
    bufp->chgBit(oldp+782,(vlSelf->tb_top_int__DOT__clk));
    bufp->chgBit(oldp+783,(vlSelf->tb_top_int__DOT__s_wgt_tvalid));
    bufp->chgIData(oldp+784,(vlSelf->tb_top_int__DOT__s_wgt_tdata),32);
    bufp->chgBit(oldp+785,(vlSelf->tb_top_int__DOT__s_wgt_tlast));
    bufp->chgBit(oldp+786,(vlSelf->tb_top_int__DOT__s_act_tvalid));
    bufp->chgBit(oldp+787,(vlSelf->tb_top_int__DOT__start));
    bufp->chgBit(oldp+788,(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last) 
                            & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire))));
    bufp->chgQData(oldp+789,((0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,32, 
                                                                               vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U])), 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->chgQData(oldp+791,((0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,32, 
                                                                               vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U])), 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->chgQData(oldp+793,((0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,32, 
                                                                               vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U])), 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->chgQData(oldp+795,((0xffffffffffffULL & VL_MULS_QQQ(48, 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,32, 
                                                                               vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U])), 
                                                              (0xffffffffffffULL 
                                                               & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->chgIData(oldp+797,(vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i),32);
}

void Vtb_top_int___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_cleanup\n"); );
    // Init
    Vtb_top_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_int___024root*>(voidSelf);
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
