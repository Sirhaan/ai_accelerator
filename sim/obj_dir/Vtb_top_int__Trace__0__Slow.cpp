// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top_int__Syms.h"


VL_ATTR_COLD void Vtb_top_int___024root__trace_init_sub__TOP__pkg__0(Vtb_top_int___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_top_int___024root__trace_init_sub__TOP__0(Vtb_top_int___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_top_int___024root__trace_init_sub__TOP__pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_top_int", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"s_wgt_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"s_wgt_tready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"s_wgt_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+786,0,"s_wgt_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"s_act_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"s_act_tready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+43,0,"s_act_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+47,0,"s_act_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"m_out_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"m_out_tready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"m_out_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"m_out_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+789,0,"layer_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"cfg_num_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"cfg_num_oc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"cfg_num_spatial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"cfg_k_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"cfg_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"cfg_act_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"cfg_inv_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"cfg_scale_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("cfg_bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+62,0,"perf_total_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"perf_compute_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"perf_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"perf_wgt_load_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"perf_drain_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"perf_tile_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"perf_overflow_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"perf_timeout_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"num_wgt_vectors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+801,0,"num_act_vectors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+802,0,"num_expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+16,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"s_wgt_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"s_wgt_tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"s_wgt_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+786,0,"s_wgt_tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"s_act_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"s_act_tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+43,0,"s_act_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+47,0,"s_act_tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"m_out_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"m_out_tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"m_out_tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"m_out_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"error_code",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+789,0,"layer_complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"cfg_num_ic",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"cfg_num_oc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"cfg_num_spatial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"cfg_k_depth",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"cfg_timeout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"cfg_act_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"cfg_inv_scale",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"cfg_scale_mult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("cfg_bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+62,0,"perf_total_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"perf_compute_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"perf_stall_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"perf_wgt_load_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"perf_drain_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"perf_tile_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"perf_overflow_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"perf_timeout_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"wgt_s2sram_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"wgt_s2sram_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"wgt_s2sram_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"wgt_s2sram_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+73,0,"act_s2quant_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+77,0,"act_s2quant_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"act_s2quant_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"act_q2sram_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"act_valid_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"act_last_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+82,0,"act_q2sram_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"act_q2sram_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"quant_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"wgt_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"wgt_rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"act_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"act_rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wgt_in_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("act_in_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_out_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+97,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+101,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+105,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+109,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("overflow_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+113,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+117,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+121,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+125,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+129,0,"any_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"wgt_loaded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pp_data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+131,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+135,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+139,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+143,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+147,0,"pp_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"pp_any_sat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("pp_packed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+149+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+153,0,"out_row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+154,0,"out_buf_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("out_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+155+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+159,0,"out_mux_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"out_mux_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"out_mux_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"out_mux_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"fsm_wgt_load_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"fsm_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"fsm_clear_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"fsm_wgt_rd_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"fsm_act_rd_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"fsm_act_rd_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"fsm_bank_swap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"fsm_acc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"fsm_act_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"fsm_m_out_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"sram_wgt_buf_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"sram_act_buf_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"sram_wgt_buf_ready_lat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"sram_act_buf_ready_lat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"pp_done_to_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"ovf_flat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("gen_pp[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"act_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"scale_mult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+176+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+168,0,"acc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+180+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+184,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"any_saturated",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s1_scaled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+186+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+194,0,"s1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s2_biased", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+195+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 48,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+203,0,"s2_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s3_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+204+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+184,0,"s3_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"any_sat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("GEN_STAGE3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+209,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+211,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+213,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+215,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+217,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+219,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+220,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+222,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+224,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+226,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+228,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+230,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+28,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+231,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+233,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+235,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+237,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+239,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+241,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+29,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+242,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+244,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+246,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+248,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+250,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+252,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+30,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("STAGE1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+18,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+20,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+22,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+24,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pp[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"act_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"scale_mult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+255+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+168,0,"acc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+259+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+263,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"any_saturated",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s1_scaled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+265+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+273,0,"s1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s2_biased", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+274+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 48,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+282,0,"s2_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s3_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+283+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+263,0,"s3_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"any_sat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("GEN_STAGE3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+288,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+290,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+292,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+294,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+296,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+298,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+31,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+299,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+301,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+303,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+305,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+307,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+309,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+32,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+310,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+312,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+314,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+316,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+318,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+320,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+321,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+323,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+325,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+327,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+329,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+331,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+34,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("STAGE1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+332,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+333,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+18,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+20,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+22,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+24,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pp[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"act_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"scale_mult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+334+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+168,0,"acc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+342,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"any_saturated",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s1_scaled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+344+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+352,0,"s1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s2_biased", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+353+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 48,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+361,0,"s2_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s3_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+362+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+342,0,"s3_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"any_sat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("GEN_STAGE3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+367,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+369,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+371,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+373,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+375,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+377,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+35,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+378,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+380,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+382,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+384,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+386,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+388,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+36,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+389,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+391,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+393,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+395,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+397,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+399,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+400,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+402,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+404,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+406,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+408,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+410,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+38,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("STAGE1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+411,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+412,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+18,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+20,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+22,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+24,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pp[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"act_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"scale_mult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+413+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+168,0,"acc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+417+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+421,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"any_saturated",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s1_scaled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+423+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+431,0,"s1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s2_biased", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+432+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 48,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+440,0,"s2_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s3_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+441+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+421,0,"s3_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"any_sat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("GEN_STAGE3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+446,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+448,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+450,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+452,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+454,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+456,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+457,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+459,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+461,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+463,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+465,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+467,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+40,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+468,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+470,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+472,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+474,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+476,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+478,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+41,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_STAGE3[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+479,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+481,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+483,0,"saturated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+484,0,"pre_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+485,0,"win_clamped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+487,0,"win_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+489,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+42,0,"act_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("STAGE1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+490,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+18,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+20,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+22,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_stage2[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+24,0,"bias_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_quant[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_quant", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"inv_scale",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+493,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+494,0,"clip_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"Q_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"Q_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+790,0,"scaled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+495,0,"scaled_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+497,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+499,0,"sat_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"sat_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_quant[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_quant", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"inv_scale",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+502,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+503,0,"clip_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"Q_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"Q_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+792,0,"scaled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+504,0,"scaled_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+506,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+508,0,"sat_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"sat_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_quant[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_quant", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+510,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"inv_scale",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+511,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+512,0,"clip_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"Q_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"Q_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+794,0,"scaled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+513,0,"scaled_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+515,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+517,0,"sat_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"sat_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_quant[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_quant", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"inv_scale",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+520,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+521,0,"clip_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"Q_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"Q_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+796,0,"scaled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+522,0,"scaled_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+524,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+526,0,"sat_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"sat_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_act_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+805,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+43,0,"tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+47,0,"tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"tready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"tvalid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+73,0,"tdata_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+78,0,"tlast_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+73,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+77,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"r_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"wgt_load_strt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("act_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("wgt_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+97,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+101,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+105,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+109,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("overflow", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+113,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+117,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+121,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+125,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+130,0,"wgt_loaded",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("act_h", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+528,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+529,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+530,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+533,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+534,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+535,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+536,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+537,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+538,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+539,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+540,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+541,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+542,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+543,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+546,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+547,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wgt_v", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+548,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+549,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+551,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+552,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+553,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+554,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+555,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+556,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+557,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+558,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+559,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+560,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+561,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+563,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+564,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+565,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+566,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+567,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+806,0,"WGT_LOAD_CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+568,0,"wgt_load_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"wgt_load_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+570,0,"wgt_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"WGT_LOAD_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+573,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+574,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+575,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+576,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+577,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+573,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+578,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+579,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+575,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+576,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+580,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+582,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+584,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+585,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+586,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+587,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+588,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+585,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+590,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+591,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+587,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+588,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+592,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+594,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+596,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+598,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+599,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+600,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+601,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+602,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+603,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+599,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+600,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+605,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+606,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+608,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+609,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+610,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+611,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+612,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+610,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+613,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+609,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+614,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+615,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+611,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+612,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+616,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+617,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+618,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+619,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+620,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+621,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+622,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+623,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+624,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+625,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+621,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+626,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+627,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+623,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+624,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+628,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+630,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+631,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+632,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+633,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+634,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+635,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+634,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+637,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+633,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+638,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+639,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+635,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+640,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+641,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+642,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+644,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+645,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+646,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+647,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+648,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+649,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+645,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+650,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+651,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+647,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+648,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+654,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+656,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+657,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+658,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+659,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+660,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+658,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+661,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+657,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+662,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+663,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+659,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+660,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+664,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+666,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+667,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+668,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+669,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+670,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+671,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+672,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+673,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+669,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+674,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+675,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+671,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+672,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+676,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+678,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+679,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+680,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+681,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+682,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+683,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+684,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+682,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+685,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+681,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+686,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+687,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+683,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+684,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+688,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+690,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+691,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+692,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+693,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+694,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+695,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+696,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+694,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+697,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+693,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+698,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+699,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+695,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+696,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+700,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+702,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+703,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+704,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+706,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+707,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+708,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+706,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+709,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+710,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+711,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+707,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+708,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+714,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+715,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+716,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+717,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+718,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+719,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+720,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+718,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+721,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+717,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+722,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+723,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+719,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+720,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+726,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+727,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+728,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+729,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+730,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+731,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+732,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+729,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+734,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+735,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+731,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+732,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+738,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+740,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+741,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+742,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+743,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+744,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+741,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+746,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+747,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+743,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+744,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+750,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"wgt_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+752,0,"wgt_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+753,0,"wgt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+755,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+756,0,"overflow_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"act_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+757,0,"wgt_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+753,0,"wgt_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+758,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+759,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+755,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+756,0,"ovf_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+760,0,"mul_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"sum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+762,0,"ovf_detect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"cfg_num_ic",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"cfg_num_oc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"cfg_num_spatial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"cfg_k_depth",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"cfg_timeout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"cfg_act_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+173,0,"wgt_buf_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"act_buf_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"wgt_rd_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"act_rd_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"act_rd_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"bank_swap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"wgt_load_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"clear_acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"acc_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"act_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"pp_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"m_out_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"m_out_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"m_out_tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"error_code",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+129,0,"any_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"perf_total_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"perf_compute_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"perf_stall_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"perf_wgt_load_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"perf_drain_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"perf_tile_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"perf_overflow_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"perf_timeout_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+808,0,"ERR_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+809,0,"ERR_BUF_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+810,0,"ERR_WGT_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+807,0,"ERR_COMP_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+811,0,"ERR_PP_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+812,0,"ERR_OUT_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+765,0,"r_num_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+766,0,"r_num_oc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+767,0,"r_num_spatial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+768,0,"r_k_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+769,0,"r_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"r_act_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+770,0,"wgt_load_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+771,0,"compute_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+772,0,"drain_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+773,0,"cnt_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+774,0,"cnt_oc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+775,0,"cnt_spatial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+776,0,"watchdog_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+777,0,"watchdog_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"err_code_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_out_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"tready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"tvalid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"tdata_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"tlast_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"r_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"s_wgt_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"s_wgt_tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"s_wgt_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"s_wgt_tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"s_act_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"s_act_tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"s_act_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"s_act_tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"bank_swap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"wgt_rd_next",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"act_rd_next",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"act_rd_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"wgt_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"wgt_rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"act_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"act_rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"wgt_buf_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"act_buf_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"wgt_tlast_seen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"act_tlast_seen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"bank_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"wgt_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+71,0,"wgt_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"wgt_wr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+780,0,"wgt_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+781,0,"act_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+82,0,"act_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"act_wr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+782,0,"act_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wgt_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+813,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+786,0,"tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"tready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"tvalid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"tdata_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"tlast_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"r_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+798,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_init_sub__TOP__pkg__0(Vtb_top_int___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_init_sub__TOP__pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+814,0,"ACT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+814,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+814,0,"WGT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+813,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+813,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+815,0,"SCALE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+816,0,"SCALE_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+817,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+817,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+818,0,"ACT_LINEAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+819,0,"ACT_RELU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+820,0,"ACT_GELU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+803,0,"Q_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"Q_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+821,0,"PROD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+822,0,"BIASED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+823,0,"SHIFT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+824,0,"LUT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+825,0,"LUT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+826,0,"FP_WIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+828,0,"LUT_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+814,0,"LUT_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+808,0,"ERR_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+809,0,"ERR_DESC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+810,0,"ERR_WGT_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+807,0,"ERR_COMP_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+811,0,"ERR_DRAIN_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+812,0,"ERR_PP_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+829,0,"ERR_OUT_TMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+830,0,"MAC_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+831,0,"WGT_SRAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+832,0,"WGT_SRAM_AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+833,0,"ACT_SRAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+834,0,"ACT_SRAM_AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+835,0,"WGT_ROW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+835,0,"ACT_ROW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+835,0,"OUT_ROW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_init_top(Vtb_top_int___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_init_top\n"); );
    // Body
    Vtb_top_int___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top_int___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_int___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_int___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top_int___024root__trace_register(Vtb_top_int___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_top_int___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_top_int___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_top_int___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_top_int___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_const_0_sub_0(Vtb_top_int___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_int___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_const_0\n"); );
    // Init
    Vtb_top_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_int___024root*>(voidSelf);
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_int___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_const_0_sub_0(Vtb_top_int___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+799,(1U));
    bufp->fullIData(oldp+800,(vlSelf->tb_top_int__DOT__num_wgt_vectors),32);
    bufp->fullIData(oldp+801,(vlSelf->tb_top_int__DOT__num_act_vectors),32);
    bufp->fullIData(oldp+802,(vlSelf->tb_top_int__DOT__num_expected),32);
    bufp->fullCData(oldp+803,(0x7fU),8);
    bufp->fullCData(oldp+804,(0x81U),8);
    bufp->fullIData(oldp+805,(0x80U),32);
    bufp->fullIData(oldp+806,(3U),32);
    bufp->fullCData(oldp+807,(3U),3);
    bufp->fullCData(oldp+808,(0U),3);
    bufp->fullCData(oldp+809,(1U),3);
    bufp->fullCData(oldp+810,(2U),3);
    bufp->fullCData(oldp+811,(4U),3);
    bufp->fullCData(oldp+812,(5U),3);
    bufp->fullIData(oldp+813,(0x20U),32);
    bufp->fullIData(oldp+814,(8U),32);
    bufp->fullIData(oldp+815,(0x10U),32);
    bufp->fullIData(oldp+816,(0xfU),32);
    bufp->fullIData(oldp+817,(4U),32);
    bufp->fullCData(oldp+818,(0U),2);
    bufp->fullCData(oldp+819,(1U),2);
    bufp->fullCData(oldp+820,(2U),2);
    bufp->fullIData(oldp+821,(0x30U),32);
    bufp->fullIData(oldp+822,(0x31U),32);
    bufp->fullIData(oldp+823,(0x22U),32);
    bufp->fullIData(oldp+824,(0x400U),32);
    bufp->fullIData(oldp+825,(0xaU),32);
    bufp->fullQData(oldp+826,(0x20000ULL),49);
    bufp->fullIData(oldp+828,(0x11U),32);
    bufp->fullCData(oldp+829,(6U),3);
    bufp->fullIData(oldp+830,(3U),32);
    bufp->fullIData(oldp+831,(0x400U),32);
    bufp->fullIData(oldp+832,(0xaU),32);
    bufp->fullIData(oldp+833,(0x200U),32);
    bufp->fullIData(oldp+834,(9U),32);
    bufp->fullIData(oldp+835,(0x20U),32);
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_full_0_sub_0(Vtb_top_int___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_int___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_full_0\n"); );
    // Init
    Vtb_top_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_int___024root*>(voidSelf);
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_int___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_int___024root__trace_full_0_sub_0(Vtb_top_int___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_int___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_top_int__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->tb_top_int__DOT__m_out_tready));
    bufp->fullSData(oldp+3,(vlSelf->tb_top_int__DOT__cfg_num_ic),16);
    bufp->fullSData(oldp+4,(vlSelf->tb_top_int__DOT__cfg_num_oc),16);
    bufp->fullSData(oldp+5,(vlSelf->tb_top_int__DOT__cfg_num_spatial),16);
    bufp->fullSData(oldp+6,(vlSelf->tb_top_int__DOT__cfg_k_depth),16);
    bufp->fullSData(oldp+7,(vlSelf->tb_top_int__DOT__cfg_timeout),16);
    bufp->fullCData(oldp+8,(vlSelf->tb_top_int__DOT__cfg_act_type),2);
    bufp->fullSData(oldp+9,(vlSelf->tb_top_int__DOT__cfg_inv_scale),16);
    bufp->fullSData(oldp+10,(vlSelf->tb_top_int__DOT__cfg_scale_mult),16);
    bufp->fullIData(oldp+11,(vlSelf->tb_top_int__DOT__cfg_bias[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_top_int__DOT__cfg_bias[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_top_int__DOT__cfg_bias[2]),32);
    bufp->fullIData(oldp+14,(vlSelf->tb_top_int__DOT__cfg_bias[3]),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_top_int__DOT__pass_count),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_top_int__DOT__fail_count),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_top_int__DOT__output_idx),32);
    bufp->fullQData(oldp+18,((0x1ffffffffffffULL & 
                              VL_SHIFTL_QQI(49,49,32, 
                                            VL_EXTENDS_QI(49,32, 
                                                          vlSelf->tb_top_int__DOT__cfg_bias
                                                          [0U]), 0xfU))),49);
    bufp->fullQData(oldp+20,((0x1ffffffffffffULL & 
                              VL_SHIFTL_QQI(49,49,32, 
                                            VL_EXTENDS_QI(49,32, 
                                                          vlSelf->tb_top_int__DOT__cfg_bias
                                                          [1U]), 0xfU))),49);
    bufp->fullQData(oldp+22,((0x1ffffffffffffULL & 
                              VL_SHIFTL_QQI(49,49,32, 
                                            VL_EXTENDS_QI(49,32, 
                                                          vlSelf->tb_top_int__DOT__cfg_bias
                                                          [2U]), 0xfU))),49);
    bufp->fullQData(oldp+24,((0x1ffffffffffffULL & 
                              VL_SHIFTL_QQI(49,49,32, 
                                            VL_EXTENDS_QI(49,32, 
                                                          vlSelf->tb_top_int__DOT__cfg_bias
                                                          [3U]), 0xfU))),49);
    bufp->fullIData(oldp+26,(vlSelf->tb_top_int__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+27,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+28,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+29,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+30,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+31,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+32,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+33,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+34,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+35,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+36,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+37,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+38,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+39,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+40,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+41,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullCData(oldp+42,(((0U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type))
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
    bufp->fullWData(oldp+43,(vlSelf->tb_top_int__DOT__s_act_tdata),128);
    bufp->fullBit(oldp+47,(vlSelf->tb_top_int__DOT__s_act_tlast));
    bufp->fullIData(oldp+48,(vlSelf->tb_top_int__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+49,(vlSelf->tb_top_int__DOT__dut__DOT__out_mux_ready));
    bufp->fullBit(oldp+50,(vlSelf->tb_top_int__DOT__dut__DOT__pp_done_to_fsm));
    bufp->fullCData(oldp+51,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__next_state),4);
    bufp->fullBit(oldp+52,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire));
    bufp->fullBit(oldp+53,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__input_fire));
    bufp->fullBit(oldp+54,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__input_fire));
    bufp->fullBit(oldp+55,(1U));
    bufp->fullBit(oldp+56,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_valid));
    bufp->fullIData(oldp+57,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_data),32);
    bufp->fullBit(oldp+58,(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last));
    bufp->fullBit(oldp+59,(vlSelf->tb_top_int__DOT__busy));
    bufp->fullBit(oldp+60,(vlSelf->tb_top_int__DOT__error));
    bufp->fullCData(oldp+61,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__err_code_reg),3);
    bufp->fullIData(oldp+62,(vlSelf->tb_top_int__DOT__perf_total_cycles),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_top_int__DOT__perf_compute_cycles),32);
    bufp->fullIData(oldp+64,(vlSelf->tb_top_int__DOT__perf_stall_cycles),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_top_int__DOT__perf_wgt_load_cycles),32);
    bufp->fullIData(oldp+66,(vlSelf->tb_top_int__DOT__perf_drain_cycles),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_top_int__DOT__perf_tile_count),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_top_int__DOT__perf_overflow_count),32);
    bufp->fullIData(oldp+69,(vlSelf->tb_top_int__DOT__perf_timeout_count),32);
    bufp->fullIData(oldp+70,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_data),32);
    bufp->fullBit(oldp+71,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_valid));
    bufp->fullBit(oldp+72,(vlSelf->tb_top_int__DOT__dut__DOT__u_wgt_slave__DOT__r_last));
    bufp->fullWData(oldp+73,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data),128);
    bufp->fullBit(oldp+77,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_valid));
    bufp->fullBit(oldp+78,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_last));
    bufp->fullIData(oldp+79,((((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out) 
                               << 0x18U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out) 
                                                << 8U) 
                                               | (IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out))))),32);
    bufp->fullCData(oldp+80,(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr),2);
    bufp->fullCData(oldp+81,(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr),2);
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_valid_sr) 
                                  >> 1U))));
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__act_last_sr) 
                                  >> 1U))));
    bufp->fullCData(oldp+84,((((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__clip_flag) 
                               << 3U) | (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__clip_flag) 
                                          << 2U) | 
                                         (((IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__clip_flag) 
                                           << 1U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__clip_flag))))),4);
    bufp->fullIData(oldp+85,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data),32);
    bufp->fullBit(oldp+86,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_valid));
    bufp->fullIData(oldp+87,(vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data),32);
    bufp->fullBit(oldp+88,(vlSelf->tb_top_int__DOT__dut__DOT__act_rd_valid));
    bufp->fullCData(oldp+89,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[0]),8);
    bufp->fullCData(oldp+90,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[1]),8);
    bufp->fullCData(oldp+91,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[2]),8);
    bufp->fullCData(oldp+92,(vlSelf->tb_top_int__DOT__dut__DOT__wgt_in_arr[3]),8);
    bufp->fullCData(oldp+93,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[0]),8);
    bufp->fullCData(oldp+94,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[1]),8);
    bufp->fullCData(oldp+95,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[2]),8);
    bufp->fullCData(oldp+96,(vlSelf->tb_top_int__DOT__dut__DOT__act_in_arr[3]),8);
    bufp->fullIData(oldp+97,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                             [0U][0U]),32);
    bufp->fullIData(oldp+98,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                             [0U][1U]),32);
    bufp->fullIData(oldp+99,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                             [0U][2U]),32);
    bufp->fullIData(oldp+100,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [0U][3U]),32);
    bufp->fullIData(oldp+101,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [1U][0U]),32);
    bufp->fullIData(oldp+102,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [1U][1U]),32);
    bufp->fullIData(oldp+103,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [1U][2U]),32);
    bufp->fullIData(oldp+104,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [1U][3U]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [2U][0U]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [2U][1U]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [2U][2U]),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [2U][3U]),32);
    bufp->fullIData(oldp+109,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [3U][0U]),32);
    bufp->fullIData(oldp+110,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [3U][1U]),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [3U][2U]),32);
    bufp->fullIData(oldp+112,(vlSelf->tb_top_int__DOT__dut__DOT__acc_out_arr
                              [3U][3U]),32);
    bufp->fullBit(oldp+113,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [0U][0U]));
    bufp->fullBit(oldp+114,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [0U][1U]));
    bufp->fullBit(oldp+115,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [0U][2U]));
    bufp->fullBit(oldp+116,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [0U][3U]));
    bufp->fullBit(oldp+117,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [1U][0U]));
    bufp->fullBit(oldp+118,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [1U][1U]));
    bufp->fullBit(oldp+119,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [1U][2U]));
    bufp->fullBit(oldp+120,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [1U][3U]));
    bufp->fullBit(oldp+121,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [2U][0U]));
    bufp->fullBit(oldp+122,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [2U][1U]));
    bufp->fullBit(oldp+123,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [2U][2U]));
    bufp->fullBit(oldp+124,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [2U][3U]));
    bufp->fullBit(oldp+125,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [3U][0U]));
    bufp->fullBit(oldp+126,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [3U][1U]));
    bufp->fullBit(oldp+127,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [3U][2U]));
    bufp->fullBit(oldp+128,(vlSelf->tb_top_int__DOT__dut__DOT__overflow_arr
                            [3U][3U]));
    bufp->fullBit(oldp+129,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active) 
                             & (3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt)))));
    bufp->fullCData(oldp+131,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [0U][0U]),8);
    bufp->fullCData(oldp+132,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [0U][1U]),8);
    bufp->fullCData(oldp+133,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [0U][2U]),8);
    bufp->fullCData(oldp+134,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [0U][3U]),8);
    bufp->fullCData(oldp+135,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [1U][0U]),8);
    bufp->fullCData(oldp+136,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [1U][1U]),8);
    bufp->fullCData(oldp+137,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [1U][2U]),8);
    bufp->fullCData(oldp+138,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [1U][3U]),8);
    bufp->fullCData(oldp+139,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [2U][0U]),8);
    bufp->fullCData(oldp+140,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [2U][1U]),8);
    bufp->fullCData(oldp+141,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [2U][2U]),8);
    bufp->fullCData(oldp+142,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [2U][3U]),8);
    bufp->fullCData(oldp+143,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [3U][0U]),8);
    bufp->fullCData(oldp+144,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [3U][1U]),8);
    bufp->fullCData(oldp+145,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [3U][2U]),8);
    bufp->fullCData(oldp+146,(vlSelf->tb_top_int__DOT__dut__DOT__pp_data_out
                              [3U][3U]),8);
    bufp->fullCData(oldp+147,(vlSelf->tb_top_int__DOT__dut__DOT__pp_out_valid),4);
    bufp->fullCData(oldp+148,((((IData)((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat))) 
                                << 3U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat)))))),4);
    bufp->fullIData(oldp+149,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[0]),32);
    bufp->fullIData(oldp+150,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[1]),32);
    bufp->fullIData(oldp+151,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[2]),32);
    bufp->fullIData(oldp+152,(vlSelf->tb_top_int__DOT__dut__DOT__pp_packed[3]),32);
    bufp->fullCData(oldp+153,(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt),2);
    bufp->fullBit(oldp+154,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf_valid));
    bufp->fullIData(oldp+155,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[0]),32);
    bufp->fullIData(oldp+156,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[1]),32);
    bufp->fullIData(oldp+157,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[2]),32);
    bufp->fullIData(oldp+158,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf[3]),32);
    bufp->fullIData(oldp+159,(vlSelf->tb_top_int__DOT__dut__DOT__out_buf
                              [vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt]),32);
    bufp->fullBit(oldp+160,(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast) 
                             & (3U == (IData)(vlSelf->tb_top_int__DOT__dut__DOT__out_row_cnt)))));
    bufp->fullBit(oldp+161,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_load_start));
    bufp->fullBit(oldp+162,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_enable));
    bufp->fullBit(oldp+163,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_clear_acc));
    bufp->fullBit(oldp+164,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_wgt_rd_next));
    bufp->fullBit(oldp+165,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_next));
    bufp->fullBit(oldp+166,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_act_rd_rst));
    bufp->fullBit(oldp+167,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_bank_swap));
    bufp->fullBit(oldp+168,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_acc_valid));
    bufp->fullCData(oldp+169,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_act_type),2);
    bufp->fullBit(oldp+170,(vlSelf->tb_top_int__DOT__dut__DOT__fsm_m_out_tlast));
    bufp->fullBit(oldp+171,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_done));
    bufp->fullBit(oldp+172,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_done));
    bufp->fullBit(oldp+173,(vlSelf->tb_top_int__DOT__dut__DOT__sram_wgt_buf_ready_lat));
    bufp->fullBit(oldp+174,(vlSelf->tb_top_int__DOT__dut__DOT__sram_act_buf_ready_lat));
    bufp->fullSData(oldp+175,(vlSelf->tb_top_int__DOT__dut__DOT__ovf_flat),16);
    bufp->fullIData(oldp+176,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[0]),32);
    bufp->fullIData(oldp+177,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[1]),32);
    bufp->fullIData(oldp+178,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[2]),32);
    bufp->fullIData(oldp+179,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__0__KET____DOT__u_pp__acc_in[3]),32);
    bufp->fullCData(oldp+180,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[0]),8);
    bufp->fullCData(oldp+181,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[1]),8);
    bufp->fullCData(oldp+182,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[2]),8);
    bufp->fullCData(oldp+183,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__0__KET____DOT__u_pp__data_out[3]),8);
    bufp->fullBit(oldp+184,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_valid));
    bufp->fullBit(oldp+185,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat))));
    bufp->fullQData(oldp+186,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
    bufp->fullQData(oldp+188,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
    bufp->fullQData(oldp+190,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
    bufp->fullQData(oldp+192,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
    bufp->fullBit(oldp+194,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s1_valid));
    bufp->fullQData(oldp+195,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[0]),49);
    bufp->fullQData(oldp+197,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[1]),49);
    bufp->fullQData(oldp+199,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[2]),49);
    bufp->fullQData(oldp+201,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased[3]),49);
    bufp->fullBit(oldp+203,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_valid));
    bufp->fullCData(oldp+204,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[0]),8);
    bufp->fullCData(oldp+205,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[1]),8);
    bufp->fullCData(oldp+206,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[2]),8);
    bufp->fullCData(oldp+207,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s3_data[3]),8);
    bufp->fullCData(oldp+208,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__any_sat),4);
    bufp->fullQData(oldp+209,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                [0U]))),49);
    bufp->fullQData(oldp+211,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U])), 0xfU))),34);
    bufp->fullBit(oldp+213,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    bufp->fullCData(oldp+214,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+215,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                          [0U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                              [0U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                   [0U]))),49);
    bufp->fullQData(oldp+217,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                             [0U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                  [0U]))))),49);
    bufp->fullSData(oldp+219,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+220,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                [1U]))),49);
    bufp->fullQData(oldp+222,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U])), 0xfU))),34);
    bufp->fullBit(oldp+224,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
    bufp->fullCData(oldp+225,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+226,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                          [1U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                              [1U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                   [1U]))),49);
    bufp->fullQData(oldp+228,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                             [1U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                  [1U]))))),49);
    bufp->fullSData(oldp+230,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+231,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                [2U]))),49);
    bufp->fullQData(oldp+233,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U])), 0xfU))),34);
    bufp->fullBit(oldp+235,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
    bufp->fullCData(oldp+236,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+237,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                          [2U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                              [2U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                   [2U]))),49);
    bufp->fullQData(oldp+239,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                             [2U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                  [2U]))))),49);
    bufp->fullSData(oldp+241,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+242,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                [3U]))),49);
    bufp->fullQData(oldp+244,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U])), 0xfU))),34);
    bufp->fullBit(oldp+246,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
    bufp->fullCData(oldp+247,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+248,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                          [3U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                              [3U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                   [3U]))),49);
    bufp->fullQData(oldp+250,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                             [3U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__s2_biased
                                                  [3U]))))),49);
    bufp->fullSData(oldp+252,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullIData(oldp+253,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+254,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__0__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
    bufp->fullIData(oldp+255,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[0]),32);
    bufp->fullIData(oldp+256,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[1]),32);
    bufp->fullIData(oldp+257,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[2]),32);
    bufp->fullIData(oldp+258,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__1__KET____DOT__u_pp__acc_in[3]),32);
    bufp->fullCData(oldp+259,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[0]),8);
    bufp->fullCData(oldp+260,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[1]),8);
    bufp->fullCData(oldp+261,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[2]),8);
    bufp->fullCData(oldp+262,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__1__KET____DOT__u_pp__data_out[3]),8);
    bufp->fullBit(oldp+263,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_valid));
    bufp->fullBit(oldp+264,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat))));
    bufp->fullQData(oldp+265,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
    bufp->fullQData(oldp+267,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
    bufp->fullQData(oldp+269,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
    bufp->fullQData(oldp+271,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
    bufp->fullBit(oldp+273,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s1_valid));
    bufp->fullQData(oldp+274,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[0]),49);
    bufp->fullQData(oldp+276,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[1]),49);
    bufp->fullQData(oldp+278,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[2]),49);
    bufp->fullQData(oldp+280,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased[3]),49);
    bufp->fullBit(oldp+282,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_valid));
    bufp->fullCData(oldp+283,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[0]),8);
    bufp->fullCData(oldp+284,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[1]),8);
    bufp->fullCData(oldp+285,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[2]),8);
    bufp->fullCData(oldp+286,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s3_data[3]),8);
    bufp->fullCData(oldp+287,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__any_sat),4);
    bufp->fullQData(oldp+288,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                [0U]))),49);
    bufp->fullQData(oldp+290,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U])), 0xfU))),34);
    bufp->fullBit(oldp+292,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    bufp->fullCData(oldp+293,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+294,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                          [0U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                              [0U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                   [0U]))),49);
    bufp->fullQData(oldp+296,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                             [0U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                  [0U]))))),49);
    bufp->fullSData(oldp+298,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+299,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                [1U]))),49);
    bufp->fullQData(oldp+301,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U])), 0xfU))),34);
    bufp->fullBit(oldp+303,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
    bufp->fullCData(oldp+304,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+305,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                          [1U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                              [1U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                   [1U]))),49);
    bufp->fullQData(oldp+307,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                             [1U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                  [1U]))))),49);
    bufp->fullSData(oldp+309,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+310,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                [2U]))),49);
    bufp->fullQData(oldp+312,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U])), 0xfU))),34);
    bufp->fullBit(oldp+314,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
    bufp->fullCData(oldp+315,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+316,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                          [2U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                              [2U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                   [2U]))),49);
    bufp->fullQData(oldp+318,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                             [2U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                  [2U]))))),49);
    bufp->fullSData(oldp+320,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+321,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                [3U]))),49);
    bufp->fullQData(oldp+323,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U])), 0xfU))),34);
    bufp->fullBit(oldp+325,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
    bufp->fullCData(oldp+326,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+327,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                          [3U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                              [3U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                   [3U]))),49);
    bufp->fullQData(oldp+329,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                             [3U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__s2_biased
                                                  [3U]))))),49);
    bufp->fullSData(oldp+331,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullIData(oldp+332,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+333,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__1__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
    bufp->fullIData(oldp+334,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[0]),32);
    bufp->fullIData(oldp+335,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[1]),32);
    bufp->fullIData(oldp+336,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[2]),32);
    bufp->fullIData(oldp+337,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__2__KET____DOT__u_pp__acc_in[3]),32);
    bufp->fullCData(oldp+338,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[0]),8);
    bufp->fullCData(oldp+339,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[1]),8);
    bufp->fullCData(oldp+340,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[2]),8);
    bufp->fullCData(oldp+341,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__2__KET____DOT__u_pp__data_out[3]),8);
    bufp->fullBit(oldp+342,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_valid));
    bufp->fullBit(oldp+343,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat))));
    bufp->fullQData(oldp+344,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
    bufp->fullQData(oldp+346,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
    bufp->fullQData(oldp+348,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
    bufp->fullQData(oldp+350,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
    bufp->fullBit(oldp+352,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s1_valid));
    bufp->fullQData(oldp+353,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[0]),49);
    bufp->fullQData(oldp+355,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[1]),49);
    bufp->fullQData(oldp+357,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[2]),49);
    bufp->fullQData(oldp+359,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased[3]),49);
    bufp->fullBit(oldp+361,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_valid));
    bufp->fullCData(oldp+362,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[0]),8);
    bufp->fullCData(oldp+363,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[1]),8);
    bufp->fullCData(oldp+364,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[2]),8);
    bufp->fullCData(oldp+365,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s3_data[3]),8);
    bufp->fullCData(oldp+366,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__any_sat),4);
    bufp->fullQData(oldp+367,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                [0U]))),49);
    bufp->fullQData(oldp+369,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U])), 0xfU))),34);
    bufp->fullBit(oldp+371,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    bufp->fullCData(oldp+372,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+373,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                          [0U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                              [0U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                   [0U]))),49);
    bufp->fullQData(oldp+375,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                             [0U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                  [0U]))))),49);
    bufp->fullSData(oldp+377,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+378,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                [1U]))),49);
    bufp->fullQData(oldp+380,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U])), 0xfU))),34);
    bufp->fullBit(oldp+382,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
    bufp->fullCData(oldp+383,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+384,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                          [1U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                              [1U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                   [1U]))),49);
    bufp->fullQData(oldp+386,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                             [1U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                  [1U]))))),49);
    bufp->fullSData(oldp+388,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+389,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                [2U]))),49);
    bufp->fullQData(oldp+391,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U])), 0xfU))),34);
    bufp->fullBit(oldp+393,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
    bufp->fullCData(oldp+394,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+395,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                          [2U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                              [2U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                   [2U]))),49);
    bufp->fullQData(oldp+397,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                             [2U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                  [2U]))))),49);
    bufp->fullSData(oldp+399,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+400,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                [3U]))),49);
    bufp->fullQData(oldp+402,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U])), 0xfU))),34);
    bufp->fullBit(oldp+404,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
    bufp->fullCData(oldp+405,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+406,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                          [3U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                              [3U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                   [3U]))),49);
    bufp->fullQData(oldp+408,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                             [3U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__s2_biased
                                                  [3U]))))),49);
    bufp->fullSData(oldp+410,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullIData(oldp+411,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+412,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__2__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
    bufp->fullIData(oldp+413,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[0]),32);
    bufp->fullIData(oldp+414,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[1]),32);
    bufp->fullIData(oldp+415,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[2]),32);
    bufp->fullIData(oldp+416,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellinp__gen_pp__BRA__3__KET____DOT__u_pp__acc_in[3]),32);
    bufp->fullCData(oldp+417,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[0]),8);
    bufp->fullCData(oldp+418,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[1]),8);
    bufp->fullCData(oldp+419,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[2]),8);
    bufp->fullCData(oldp+420,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_pp__BRA__3__KET____DOT__u_pp__data_out[3]),8);
    bufp->fullBit(oldp+421,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_valid));
    bufp->fullBit(oldp+422,((0U != (IData)(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat))));
    bufp->fullQData(oldp+423,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[0]),48);
    bufp->fullQData(oldp+425,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[1]),48);
    bufp->fullQData(oldp+427,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[2]),48);
    bufp->fullQData(oldp+429,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_scaled[3]),48);
    bufp->fullBit(oldp+431,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s1_valid));
    bufp->fullQData(oldp+432,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[0]),49);
    bufp->fullQData(oldp+434,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[1]),49);
    bufp->fullQData(oldp+436,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[2]),49);
    bufp->fullQData(oldp+438,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased[3]),49);
    bufp->fullBit(oldp+440,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_valid));
    bufp->fullCData(oldp+441,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[0]),8);
    bufp->fullCData(oldp+442,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[1]),8);
    bufp->fullCData(oldp+443,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[2]),8);
    bufp->fullCData(oldp+444,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s3_data[3]),8);
    bufp->fullCData(oldp+445,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__any_sat),4);
    bufp->fullQData(oldp+446,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                [0U]))),49);
    bufp->fullQData(oldp+448,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [0U])), 0xfU))),34);
    bufp->fullBit(oldp+450,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__saturated));
    bufp->fullCData(oldp+451,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__0__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+452,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                          [0U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                              [0U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                   [0U]))),49);
    bufp->fullQData(oldp+454,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [0U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                             [0U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                  [0U]))))),49);
    bufp->fullSData(oldp+456,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+457,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                [1U]))),49);
    bufp->fullQData(oldp+459,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [1U])), 0xfU))),34);
    bufp->fullBit(oldp+461,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__saturated));
    bufp->fullCData(oldp+462,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__1__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+463,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                          [1U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                              [1U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                   [1U]))),49);
    bufp->fullQData(oldp+465,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [1U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                             [1U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                  [1U]))))),49);
    bufp->fullSData(oldp+467,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+468,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                [2U]))),49);
    bufp->fullQData(oldp+470,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [2U])), 0xfU))),34);
    bufp->fullBit(oldp+472,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__saturated));
    bufp->fullCData(oldp+473,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__2__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+474,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                          [2U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                              [2U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                   [2U]))),49);
    bufp->fullQData(oldp+476,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [2U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                             [2U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                  [2U]))))),49);
    bufp->fullSData(oldp+478,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullQData(oldp+479,((0x1ffffffffffffULL & 
                               (0x4000ULL + vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                [3U]))),49);
    bufp->fullQData(oldp+481,((0x3ffffffffULL & VL_SHIFTRS_QQI(49,49,32, 
                                                               (0x1ffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + 
                                                                   vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                                   [3U])), 0xfU))),34);
    bufp->fullBit(oldp+483,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__saturated));
    bufp->fullCData(oldp+484,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__GEN_STAGE3__BRA__3__KET____DOT__pre_act),8);
    bufp->fullQData(oldp+485,((VL_LTS_IQQ(49, 0x20000ULL, 
                                          vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                          [3U]) ? 0x20000ULL
                                : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                              vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                              [3U])
                                    ? 0x1fffffffe0000ULL
                                    : vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                   [3U]))),49);
    bufp->fullQData(oldp+487,((0x1ffffffffffffULL & 
                               (0x20000ULL + (VL_LTS_IQQ(49, 0x20000ULL, 
                                                         vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                         [3U])
                                               ? 0x20000ULL
                                               : (VL_GTS_IQQ(49, 0x1fffffffe0000ULL, 
                                                             vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                             [3U])
                                                   ? 0x1fffffffe0000ULL
                                                   : 
                                                  vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__s2_biased
                                                  [3U]))))),49);
    bufp->fullSData(oldp+489,((0x3ffU & (IData)((0x1ffffffffffULL 
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
    bufp->fullIData(oldp+490,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+491,(vlSelf->tb_top_int__DOT__dut__DOT__gen_pp__BRA__3__KET____DOT__u_pp__DOT__STAGE1__DOT__unnamedblk2__DOT__c),32);
    bufp->fullIData(oldp+492,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U]),32);
    bufp->fullCData(oldp+493,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__data_out),8);
    bufp->fullBit(oldp+494,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__0__KET____DOT__u_quant__clip_flag));
    bufp->fullQData(oldp+495,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg),48);
    bufp->fullQData(oldp+497,((0x1ffffffffULL & VL_SHIFTRS_QQI(48,48,32, 
                                                               (0xffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
    bufp->fullBit(oldp+499,(VL_LTS_IQQ(33, 0x7fULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullBit(oldp+500,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__0__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullIData(oldp+501,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U]),32);
    bufp->fullCData(oldp+502,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__data_out),8);
    bufp->fullBit(oldp+503,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__1__KET____DOT__u_quant__clip_flag));
    bufp->fullQData(oldp+504,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg),48);
    bufp->fullQData(oldp+506,((0x1ffffffffULL & VL_SHIFTRS_QQI(48,48,32, 
                                                               (0xffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
    bufp->fullBit(oldp+508,(VL_LTS_IQQ(33, 0x7fULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullBit(oldp+509,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__1__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullIData(oldp+510,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U]),32);
    bufp->fullCData(oldp+511,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__data_out),8);
    bufp->fullBit(oldp+512,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__2__KET____DOT__u_quant__clip_flag));
    bufp->fullQData(oldp+513,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg),48);
    bufp->fullQData(oldp+515,((0x1ffffffffULL & VL_SHIFTRS_QQI(48,48,32, 
                                                               (0xffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
    bufp->fullBit(oldp+517,(VL_LTS_IQQ(33, 0x7fULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullBit(oldp+518,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__2__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullIData(oldp+519,(vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U]),32);
    bufp->fullCData(oldp+520,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__data_out),8);
    bufp->fullBit(oldp+521,(vlSelf->tb_top_int__DOT__dut__DOT____Vcellout__gen_quant__BRA__3__KET____DOT__u_quant__clip_flag));
    bufp->fullQData(oldp+522,(vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg),48);
    bufp->fullQData(oldp+524,((0x1ffffffffULL & VL_SHIFTRS_QQI(48,48,32, 
                                                               (0xffffffffffffULL 
                                                                & (0x4000ULL 
                                                                   + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU))),33);
    bufp->fullBit(oldp+526,(VL_LTS_IQQ(33, 0x7fULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullBit(oldp+527,(VL_GTS_IQQ(33, 0x1ffffff81ULL, 
                                       (0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(48,48,32, 
                                                         (0xffffffffffffULL 
                                                          & (0x4000ULL 
                                                             + vlSelf->tb_top_int__DOT__dut__DOT__gen_quant__BRA__3__KET____DOT__u_quant__DOT__scaled_reg)), 0xfU)))));
    bufp->fullCData(oldp+528,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][0U]),8);
    bufp->fullCData(oldp+529,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][1U]),8);
    bufp->fullCData(oldp+530,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][2U]),8);
    bufp->fullCData(oldp+531,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][3U]),8);
    bufp->fullCData(oldp+532,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][4U]),8);
    bufp->fullCData(oldp+533,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][0U]),8);
    bufp->fullCData(oldp+534,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][1U]),8);
    bufp->fullCData(oldp+535,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][2U]),8);
    bufp->fullCData(oldp+536,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][3U]),8);
    bufp->fullCData(oldp+537,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][4U]),8);
    bufp->fullCData(oldp+538,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][0U]),8);
    bufp->fullCData(oldp+539,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][1U]),8);
    bufp->fullCData(oldp+540,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][2U]),8);
    bufp->fullCData(oldp+541,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][3U]),8);
    bufp->fullCData(oldp+542,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][4U]),8);
    bufp->fullCData(oldp+543,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][0U]),8);
    bufp->fullCData(oldp+544,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][1U]),8);
    bufp->fullCData(oldp+545,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][2U]),8);
    bufp->fullCData(oldp+546,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][3U]),8);
    bufp->fullCData(oldp+547,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][4U]),8);
    bufp->fullCData(oldp+548,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [0U][0U]),8);
    bufp->fullCData(oldp+549,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [0U][1U]),8);
    bufp->fullCData(oldp+550,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [0U][2U]),8);
    bufp->fullCData(oldp+551,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [0U][3U]),8);
    bufp->fullCData(oldp+552,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][0U]),8);
    bufp->fullCData(oldp+553,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][1U]),8);
    bufp->fullCData(oldp+554,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][2U]),8);
    bufp->fullCData(oldp+555,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][3U]),8);
    bufp->fullCData(oldp+556,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][0U]),8);
    bufp->fullCData(oldp+557,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][1U]),8);
    bufp->fullCData(oldp+558,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][2U]),8);
    bufp->fullCData(oldp+559,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][3U]),8);
    bufp->fullCData(oldp+560,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][0U]),8);
    bufp->fullCData(oldp+561,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][1U]),8);
    bufp->fullCData(oldp+562,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][2U]),8);
    bufp->fullCData(oldp+563,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][3U]),8);
    bufp->fullCData(oldp+564,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [4U][0U]),8);
    bufp->fullCData(oldp+565,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [4U][1U]),8);
    bufp->fullCData(oldp+566,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [4U][2U]),8);
    bufp->fullCData(oldp+567,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [4U][3U]),8);
    bufp->fullBit(oldp+568,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_active));
    bufp->fullCData(oldp+569,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_cnt),3);
    bufp->fullBit(oldp+570,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_load_en));
    bufp->fullCData(oldp+571,((0xffU & vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data)),8);
    bufp->fullCData(oldp+572,((0xffU & vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data)),8);
    bufp->fullCData(oldp+573,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+574,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+575,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+576,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+577,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+578,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+579,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+580,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+581,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+582,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+583,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][1U]),8);
    bufp->fullCData(oldp+584,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+585,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+586,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+587,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+588,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+589,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+590,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+591,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+592,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+593,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+594,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+595,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][2U]),8);
    bufp->fullCData(oldp+596,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+597,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+598,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+599,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+600,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+601,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+602,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+603,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+604,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+605,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+606,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+607,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [0U][3U]),8);
    bufp->fullCData(oldp+608,((vlSelf->tb_top_int__DOT__dut__DOT__wgt_rd_data 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+609,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+610,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+611,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+612,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+613,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+614,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+615,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+616,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+617,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+618,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+619,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+620,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][0U]),8);
    bufp->fullCData(oldp+621,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+622,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+623,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+624,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+625,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+626,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+627,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+628,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+629,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+630,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+631,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][1U]),8);
    bufp->fullCData(oldp+632,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][1U]),8);
    bufp->fullCData(oldp+633,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+634,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+635,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+636,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+637,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+638,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+639,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+640,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+641,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+642,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+643,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][2U]),8);
    bufp->fullCData(oldp+644,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][2U]),8);
    bufp->fullCData(oldp+645,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+646,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+647,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+648,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+649,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+650,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+651,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+652,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+653,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+654,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+655,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [1U][3U]),8);
    bufp->fullCData(oldp+656,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [1U][3U]),8);
    bufp->fullCData(oldp+657,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+658,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+659,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+660,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+661,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+662,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+663,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+664,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+665,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+666,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+667,((0xffU & (vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+668,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][0U]),8);
    bufp->fullCData(oldp+669,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+670,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+671,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+672,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+673,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+674,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+675,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+676,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+677,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+678,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+679,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][1U]),8);
    bufp->fullCData(oldp+680,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][1U]),8);
    bufp->fullCData(oldp+681,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+682,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+683,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+684,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+685,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+686,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+687,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+688,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+689,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+690,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+691,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][2U]),8);
    bufp->fullCData(oldp+692,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][2U]),8);
    bufp->fullCData(oldp+693,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+694,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+695,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+696,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+697,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+698,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+699,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+700,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+701,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+702,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+703,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [2U][3U]),8);
    bufp->fullCData(oldp+704,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [2U][3U]),8);
    bufp->fullCData(oldp+705,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+706,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+707,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+708,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+709,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+710,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+711,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+712,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+713,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+714,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+715,((vlSelf->tb_top_int__DOT__dut__DOT__act_rd_data 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+716,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][0U]),8);
    bufp->fullCData(oldp+717,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+718,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+719,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+720,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+721,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+722,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+723,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+724,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+725,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+726,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+727,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][1U]),8);
    bufp->fullCData(oldp+728,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][1U]),8);
    bufp->fullCData(oldp+729,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+730,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+731,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+732,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+733,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+734,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+735,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+736,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+737,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+738,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+739,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][2U]),8);
    bufp->fullCData(oldp+740,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][2U]),8);
    bufp->fullCData(oldp+741,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+742,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+743,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+744,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+745,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+746,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+747,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+748,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+749,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+750,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullCData(oldp+751,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__act_h
                              [3U][3U]),8);
    bufp->fullCData(oldp+752,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__wgt_v
                              [3U][3U]),8);
    bufp->fullCData(oldp+753,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_pipe_reg),8);
    bufp->fullCData(oldp+754,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg),8);
    bufp->fullIData(oldp+755,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg),32);
    bufp->fullBit(oldp+756,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__ovf_reg));
    bufp->fullCData(oldp+757,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg),8);
    bufp->fullSData(oldp+758,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__act_reg))), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__wgt_reg)))))),16);
    bufp->fullSData(oldp+759,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg),16);
    bufp->fullIData(oldp+760,((((- (IData)((1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg))),32);
    bufp->fullIData(oldp+761,(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next),32);
    bufp->fullBit(oldp+762,((((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                               >> 0x1fU) == (1U & ((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__mult_reg) 
                                                   >> 0xfU))) 
                             & ((vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__sum_next 
                                 >> 0x1fU) != (vlSelf->tb_top_int__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe__DOT__acc_reg 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+763,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__m_out_tvalid));
    bufp->fullCData(oldp+764,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__state),4);
    bufp->fullSData(oldp+765,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_ic),16);
    bufp->fullSData(oldp+766,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_oc),16);
    bufp->fullSData(oldp+767,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_num_spatial),16);
    bufp->fullSData(oldp+768,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_k_depth),16);
    bufp->fullSData(oldp+769,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__r_timeout),16);
    bufp->fullCData(oldp+770,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__wgt_load_cnt),8);
    bufp->fullSData(oldp+771,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__compute_cnt),16);
    bufp->fullCData(oldp+772,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__drain_cnt),4);
    bufp->fullSData(oldp+773,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_ic),16);
    bufp->fullSData(oldp+774,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_oc),16);
    bufp->fullSData(oldp+775,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__cnt_spatial),16);
    bufp->fullSData(oldp+776,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_cnt),16);
    bufp->fullBit(oldp+777,(vlSelf->tb_top_int__DOT__dut__DOT__u_fsm__DOT__watchdog_timeout));
    bufp->fullBit(oldp+778,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__bank_sel));
    bufp->fullSData(oldp+779,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_wr_ptr),10);
    bufp->fullSData(oldp+780,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__wgt_rd_ptr),10);
    bufp->fullSData(oldp+781,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_wr_ptr),9);
    bufp->fullSData(oldp+782,(vlSelf->tb_top_int__DOT__dut__DOT__u_sram__DOT__act_rd_ptr),9);
    bufp->fullBit(oldp+783,(vlSelf->tb_top_int__DOT__clk));
    bufp->fullBit(oldp+784,(vlSelf->tb_top_int__DOT__s_wgt_tvalid));
    bufp->fullIData(oldp+785,(vlSelf->tb_top_int__DOT__s_wgt_tdata),32);
    bufp->fullBit(oldp+786,(vlSelf->tb_top_int__DOT__s_wgt_tlast));
    bufp->fullBit(oldp+787,(vlSelf->tb_top_int__DOT__s_act_tvalid));
    bufp->fullBit(oldp+788,(vlSelf->tb_top_int__DOT__start));
    bufp->fullBit(oldp+789,(((IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__r_last) 
                             & (IData)(vlSelf->tb_top_int__DOT__dut__DOT__u_out_master__DOT__output_fire))));
    bufp->fullQData(oldp+790,((0xffffffffffffULL & 
                               VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[0U])), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->fullQData(oldp+792,((0xffffffffffffULL & 
                               VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[1U])), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->fullQData(oldp+794,((0xffffffffffffULL & 
                               VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[2U])), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->fullQData(oldp+796,((0xffffffffffffULL & 
                               VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, 
                                                                vlSelf->tb_top_int__DOT__dut__DOT__u_act_slave__DOT__r_data[3U])), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,17, (IData)(vlSelf->tb_top_int__DOT__cfg_inv_scale)))))),48);
    bufp->fullIData(oldp+798,(vlSelf->tb_top_int__DOT__unnamedblk2__DOT__i),32);
}
