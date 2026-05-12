// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_int.h for the primary calling header

#include "Vtb_top_int__pch.h"
#include "Vtb_top_int__Syms.h"
#include "Vtb_top_int___024root.h"

VL_ATTR_COLD void Vtb_top_int___024root___eval_initial__TOP(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial__TOP\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 1024> tb_top_int__DOT__expected_out;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        tb_top_int__DOT__expected_out[__Vi0] = 0;
    }
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelf->tb_top_int__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x653d2573U;
    __Vtemp_1[1U] = 0x5f66696cU;
    __Vtemp_1[2U] = 0x776774U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                         vlSelf->tb_top_int__DOT__wgt_file))) {
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NN(vlSelf->tb_top_int__DOT__wgt_file)
                     ,  &(vlSelf->tb_top_int__DOT__wgt_stimulus)
                     , 0, ~0ULL);
        VL_WRITEF("[INFO] Loaded weight vectors from %@\n",
                  -1,&(vlSelf->tb_top_int__DOT__wgt_file));
    } else {
        VL_WRITEF("[WARN] No +wgt_file specified\n");
    }
    __Vtemp_2[0U] = 0x653d2573U;
    __Vtemp_2[1U] = 0x5f66696cU;
    __Vtemp_2[2U] = 0x616374U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                         vlSelf->tb_top_int__DOT__act_file))) {
        VL_READMEM_N(true, 32, 512, 0, VL_CVT_PACK_STR_NN(vlSelf->tb_top_int__DOT__act_file)
                     ,  &(vlSelf->tb_top_int__DOT__act_stimulus)
                     , 0, ~0ULL);
        VL_WRITEF("[INFO] Loaded activation vectors from %@\n",
                  -1,&(vlSelf->tb_top_int__DOT__act_file));
    } else {
        VL_WRITEF("[WARN] No +act_file specified\n");
    }
    __Vtemp_3[0U] = 0x653d2573U;
    __Vtemp_3[1U] = 0x5f66696cU;
    __Vtemp_3[2U] = 0x6f7574U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_3), 
                                         vlSelf->tb_top_int__DOT__out_file))) {
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NN(vlSelf->tb_top_int__DOT__out_file)
                     ,  &(tb_top_int__DOT__expected_out)
                     , 0, ~0ULL);
        VL_WRITEF("[INFO] Loaded expected output vectors from %@\n",
                  -1,&(vlSelf->tb_top_int__DOT__out_file));
    } else {
        VL_WRITEF("[WARN] No +out_file specified\n");
    }
    __Vtemp_4[0U] = 0x2e766364U;
    __Vtemp_4[1U] = 0x5f696e74U;
    __Vtemp_4[2U] = 0x5f746f70U;
    __Vtemp_4[3U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_4));
    vlSymsp->_traceDumpOpen();
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x5f6c7574U;
    __Vtemp_5[2U] = 0x67656c75U;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_5)
                 ,  &(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__gelu_lut)
                 , 0, ~0ULL);
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x5f6c7574U;
    __Vtemp_6[2U] = 0x67656c75U;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_6)
                 ,  &(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__gelu_lut)
                 , 0, ~0ULL);
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x5f6c7574U;
    __Vtemp_7[2U] = 0x67656c75U;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_7)
                 ,  &(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__gelu_lut)
                 , 0, ~0ULL);
    __Vtemp_8[0U] = 0x2e686578U;
    __Vtemp_8[1U] = 0x5f6c7574U;
    __Vtemp_8[2U] = 0x67656c75U;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_8)
                 ,  &(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__gelu_lut)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__stl(Vtb_top_int___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_int___024root___eval_triggers__stl(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_int___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
