// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_int.h for the primary calling header

#include "Vtb_top_int__pch.h"
#include "Vtb_top_int__Syms.h"
#include "Vtb_top_int___024root.h"

VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb_top_int___024root* vlSelf);
VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb_top_int___024root* vlSelf);
VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(Vtb_top_int___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_top_int___024root___eval_initial__TOP__Vtiming__0(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_top_int__DOT__check_bit__0__test_name;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__0__got;
    __Vtask_tb_top_int__DOT__check_bit__0__got = 0;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__0__expected;
    __Vtask_tb_top_int__DOT__check_bit__0__expected = 0;
    std::string __Vtask_tb_top_int__DOT__check_bit__1__test_name;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__1__got;
    __Vtask_tb_top_int__DOT__check_bit__1__got = 0;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__1__expected;
    __Vtask_tb_top_int__DOT__check_bit__1__expected = 0;
    std::string __Vtask_tb_top_int__DOT__check_bit__2__test_name;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__2__got;
    __Vtask_tb_top_int__DOT__check_bit__2__got = 0;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__2__expected;
    __Vtask_tb_top_int__DOT__check_bit__2__expected = 0;
    std::string __Vtask_tb_top_int__DOT__check_bit__3__test_name;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__3__got;
    __Vtask_tb_top_int__DOT__check_bit__3__got = 0;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__3__expected;
    __Vtask_tb_top_int__DOT__check_bit__3__expected = 0;
    std::string __Vtask_tb_top_int__DOT__check_bit__4__test_name;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__4__got;
    __Vtask_tb_top_int__DOT__check_bit__4__got = 0;
    IData/*31:0*/ __Vtask_tb_top_int__DOT__check_bit__4__expected;
    __Vtask_tb_top_int__DOT__check_bit__4__expected = 0;
    // Body
    VL_TIMEFORMAT_IINI(0xfffffff7U, 2U, std::string{" ns"}, 0xaU, vlSymsp->_vm_contextp__);
    VL_WRITEF("\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\227\n\342\225\221       AI Accelerator Top-Level Testbench               \342\225\221\n\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\n");
    vlSelf->tb_top_int__DOT__rst = 1U;
    vlSelf->tb_top_int__DOT__s_wgt_tvalid = 0U;
    vlSelf->tb_top_int__DOT__s_act_tvalid = 0U;
    vlSelf->tb_top_int__DOT__m_out_tready = 1U;
    vlSelf->tb_top_int__DOT__start = 0U;
    vlSelf->tb_top_int__DOT__cfg_num_ic = 4U;
    vlSelf->tb_top_int__DOT__cfg_num_oc = 4U;
    vlSelf->tb_top_int__DOT__cfg_num_spatial = 1U;
    vlSelf->tb_top_int__DOT__cfg_k_depth = 4U;
    vlSelf->tb_top_int__DOT__cfg_timeout = 0x3e8U;
    vlSelf->tb_top_int__DOT__cfg_act_type = 1U;
    vlSelf->tb_top_int__DOT__cfg_inv_scale = 0x4000U;
    vlSelf->tb_top_int__DOT__cfg_scale_mult = 0x4000U;
    vlSelf->tb_top_int__DOT__cfg_bias[0U] = 0U;
    vlSelf->tb_top_int__DOT__cfg_bias[1U] = 0U;
    vlSelf->tb_top_int__DOT__cfg_bias[2U] = 0U;
    vlSelf->tb_top_int__DOT__cfg_bias[3U] = 0U;
    vlSelf->tb_top_int__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_int__DOT__rst = 0U;
    VL_WRITEF("\n[%t] Reset released\n",64,VL_TIME_UNITED_Q(1),
              -12);
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\342\224\214\342\224\200 Test 1: Control Signal Check \342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\220\n");
    __Vtask_tb_top_int__DOT__check_bit__0__expected = 0U;
    __Vtask_tb_top_int__DOT__check_bit__0__got = vlSelf->tb_top_int__DOT__busy;
    __Vtask_tb_top_int__DOT__check_bit__0__test_name = 
        std::string{"busy should be 0 after reset"};
    if ((__Vtask_tb_top_int__DOT__check_bit__0__got 
         == __Vtask_tb_top_int__DOT__check_bit__0__expected)) {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_tb_top_int__DOT__check_bit__0__test_name));
        vlSelf->tb_top_int__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL: %@ | got=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_top_int__DOT__check_bit__0__test_name),
                  32,__Vtask_tb_top_int__DOT__check_bit__0__got,
                  32,__Vtask_tb_top_int__DOT__check_bit__0__expected);
        vlSelf->tb_top_int__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__fail_count);
    }
    __Vtask_tb_top_int__DOT__check_bit__1__expected = 0U;
    __Vtask_tb_top_int__DOT__check_bit__1__got = vlSelf->tb_top_int__DOT__error;
    __Vtask_tb_top_int__DOT__check_bit__1__test_name = 
        std::string{"error should be 0 after reset"};
    if ((__Vtask_tb_top_int__DOT__check_bit__1__got 
         == __Vtask_tb_top_int__DOT__check_bit__1__expected)) {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_tb_top_int__DOT__check_bit__1__test_name));
        vlSelf->tb_top_int__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL: %@ | got=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_top_int__DOT__check_bit__1__test_name),
                  32,__Vtask_tb_top_int__DOT__check_bit__1__got,
                  32,__Vtask_tb_top_int__DOT__check_bit__1__expected);
        vlSelf->tb_top_int__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__fail_count);
    }
    __Vtask_tb_top_int__DOT__check_bit__2__expected = 0U;
    __Vtask_tb_top_int__DOT__check_bit__2__got = vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__err_code_reg;
    __Vtask_tb_top_int__DOT__check_bit__2__test_name = 
        std::string{"error_code should be 0 after reset"};
    if ((__Vtask_tb_top_int__DOT__check_bit__2__got 
         == __Vtask_tb_top_int__DOT__check_bit__2__expected)) {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_tb_top_int__DOT__check_bit__2__test_name));
        vlSelf->tb_top_int__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL: %@ | got=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_top_int__DOT__check_bit__2__test_name),
                  32,__Vtask_tb_top_int__DOT__check_bit__2__got,
                  32,__Vtask_tb_top_int__DOT__check_bit__2__expected);
        vlSelf->tb_top_int__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__fail_count);
    }
    VL_WRITEF("\342\224\224\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\230\n\n\342\224\214\342\224\200 Test 2: Streaming Test Data \342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\220\n");
    vlSelf->__Vfork_1__sync.init(3U, nullptr);
    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf);
    Vtb_top_int___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(vlSelf);
    co_await vlSelf->__Vfork_1__sync.join(nullptr, 
                                          "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                          210);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\342\224\224\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\230\n\n\342\224\214\342\224\200 Test 3: Output Collection \342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\220\n");
    vlSelf->tb_top_int__DOT__output_idx = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_top_int__DOT__busy)))) {
        co_await vlSelf->__VtrigSched_h3a2e7aa0__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_top_int.busy)", 
                                                           "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF("Computation started\n");
    while (vlSelf->tb_top_int__DOT__busy) {
        co_await vlSelf->__VtrigSched_h43a5e771__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ tb_top_int.busy))", 
                                                           "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF("Computation complete\n");
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid) 
                     & (IData)(vlSelf->tb_top_int__DOT__m_out_tready)))) {
        VL_WRITEF("  Output[%0d]: 0x%08x\n",32,vlSelf->tb_top_int__DOT__output_idx,
                  32,vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data);
        vlSelf->tb_top_int__DOT__output_idx = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__output_idx);
    }
    VL_WRITEF("\342\224\224\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\230\n\n\342\224\214\342\224\200 Test 4: Performance Metrics \342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\220\nTotal cycles:       %0#\nCompute cycles:     %0#\nStall cycles:       %0#\nWeight load cycles: %0#\nDrain cycles:       %0#\nTile count:         %0#\nOverflow count:     %0#\nTimeout count:      %0#\n",
              32,vlSelf->tb_top_int__DOT__perf_total_cycles,
              32,vlSelf->tb_top_int__DOT__perf_compute_cycles,
              32,vlSelf->tb_top_int__DOT__perf_stall_cycles,
              32,vlSelf->tb_top_int__DOT__perf_wgt_load_cycles,
              32,vlSelf->tb_top_int__DOT__perf_drain_cycles,
              32,vlSelf->tb_top_int__DOT__perf_tile_count,
              32,vlSelf->tb_top_int__DOT__perf_overflow_count,
              32,vlSelf->tb_top_int__DOT__perf_timeout_count);
    __Vtask_tb_top_int__DOT__check_bit__3__expected = 0U;
    __Vtask_tb_top_int__DOT__check_bit__3__got = vlSelf->tb_top_int__DOT__perf_timeout_count;
    __Vtask_tb_top_int__DOT__check_bit__3__test_name = 
        std::string{"perf_timeout_count should be 0"};
    if ((__Vtask_tb_top_int__DOT__check_bit__3__got 
         == __Vtask_tb_top_int__DOT__check_bit__3__expected)) {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_tb_top_int__DOT__check_bit__3__test_name));
        vlSelf->tb_top_int__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL: %@ | got=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_top_int__DOT__check_bit__3__test_name),
                  32,__Vtask_tb_top_int__DOT__check_bit__3__got,
                  32,__Vtask_tb_top_int__DOT__check_bit__3__expected);
        vlSelf->tb_top_int__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__fail_count);
    }
    __Vtask_tb_top_int__DOT__check_bit__4__expected = 1U;
    __Vtask_tb_top_int__DOT__check_bit__4__got = (0U 
                                                  != vlSelf->tb_top_int__DOT__perf_total_cycles);
    __Vtask_tb_top_int__DOT__check_bit__4__test_name = 
        std::string{"perf_total_cycles should be > 0"};
    if ((__Vtask_tb_top_int__DOT__check_bit__4__got 
         == __Vtask_tb_top_int__DOT__check_bit__4__expected)) {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_tb_top_int__DOT__check_bit__4__test_name));
        vlSelf->tb_top_int__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL: %@ | got=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_top_int__DOT__check_bit__4__test_name),
                  32,__Vtask_tb_top_int__DOT__check_bit__4__got,
                  32,__Vtask_tb_top_int__DOT__check_bit__4__expected);
        vlSelf->tb_top_int__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_int__DOT__fail_count);
    }
    VL_WRITEF("\342\224\224\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\230\n");
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       281);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       281);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       281);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       281);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc1be2c8c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_top_int.clk)", 
                                                       "/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 
                                                       281);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\227\n\342\225\221                    TEST SUMMARY                        \342\225\221\n\342\225\221\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\225\221\n\342\225\221  PASSED: %0d\n\342\225\221  FAILED: %0d\n",
              32,vlSelf->tb_top_int__DOT__pass_count,
              32,vlSelf->tb_top_int__DOT__fail_count);
    if ((0U == vlSelf->tb_top_int__DOT__fail_count)) {
        VL_WRITEF("\342\225\221  \342\234\223 ALL TESTS PASSED                                    \342\225\221\n");
    } else {
        VL_WRITEF("\342\225\221  \342\234\227 SOME TESTS FAILED                                   \342\225\221\n");
    }
    VL_WRITEF("\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\n\n");
    VL_FINISH_MT("/home/sirhaan/projects/ai_accelerator/src/tb/tb_top_int.sv", 293, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_int___024root___dump_triggers__act(Vtb_top_int___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_int___024root___eval_triggers__act(Vtb_top_int___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_he392af5f__0;
    __Vtrigcurrexpr_he392af5f__0 = 0;
    __Vtrigcurrexpr_he392af5f__0 = (1U & (~ (IData)(vlSelf->tb_top_int__DOT__busy)));
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_top_int__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb_top_int__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_top_int__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_top_int__DOT__busy) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__busy__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_he392af5f__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_he392af5f__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__clk__0 
        = vlSelf->tb_top_int__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__rst__0 
        = vlSelf->tb_top_int__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_int__DOT__busy__0 
        = vlSelf->tb_top_int__DOT__busy;
    vlSelf->__Vtrigprevexpr_he392af5f__0 = __Vtrigcurrexpr_he392af5f__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_int___024root___dump_triggers__act(vlSelf);
    }
#endif
}
