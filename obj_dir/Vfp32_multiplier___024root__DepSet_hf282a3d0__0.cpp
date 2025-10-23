// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfp32_multiplier.h for the primary calling header

#include "Vfp32_multiplier__pch.h"
#include "Vfp32_multiplier___024root.h"

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__0(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__sign = ((vlSelfRef.a 
                                             ^ vlSelfRef.b) 
                                            >> 0x1fU);
    vlSelfRef.fp32_multiplier__DOT__exception = ((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelfRef.a 
                                                      >> 0x17U))) 
                                                 | (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelfRef.b 
                                                        >> 0x17U))));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__Carry__BRA__0__KET__ 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x17U));
    vlSelfRef.fp32_multiplier__DOT__operand_a = ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelfRef.a 
                                                      >> 0x17U)))
                                                  ? 
                                                 (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelfRef.a))
                                                  : 
                                                 (0x7fffffU 
                                                  & vlSelfRef.a));
    vlSelfRef.fp32_multiplier__DOT__operand_b = ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelfRef.b 
                                                      >> 0x17U)))
                                                  ? 
                                                 (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelfRef.b))
                                                  : 
                                                 (0x7fffffU 
                                                  & vlSelfRef.b));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x18U) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__Carry__BRA__0__KET__)));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
        = ((0x800000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x17U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__partial_product 
        = ((0x400000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x16U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__partial_product 
        = ((0x200000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x15U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__partial_product 
        = ((0x100000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x14U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__partial_product 
        = ((0x80000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x13U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__partial_product 
        = ((0x40000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x12U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__partial_product 
        = ((0x20000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x11U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__partial_product 
        = ((0x10000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0x10U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__partial_product 
        = ((0x8000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0xfU))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
        = ((0x4000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0xeU))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
        = ((0x2000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0xdU))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
        = ((0x1000U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0xcU))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
        = ((0x800U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0xbU))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
        = ((0x400U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 0xaU))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
        = ((0x200U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 9U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
        = ((0x100U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 8U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
        = ((0x80U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 7U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
        = ((0x40U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 6U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
        = ((0x20U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 5U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
        = ((0x10U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 4U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
        = ((8U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 3U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
        = ((4U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 2U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
        = ((2U & vlSelfRef.fp32_multiplier__DOT__operand_b)
            ? (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.fp32_multiplier__DOT__operand_a)), 1U))
            : 0ULL);
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x18U) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__Carry__BRA__0__KET__)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x19U) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x19U) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x1aU) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x1aU) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x1bU) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x1bU) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x1cU) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x1cU) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x1dU) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x1dU) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((vlSelfRef.a >> 0x1eU) ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (vlSelfRef.b >> 0x1eU) : (IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
}

void Vfp32_multiplier___024root___eval_triggers__ico(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier___024root___eval_ico(Vfp32_multiplier___024root* vlSelf);

bool Vfp32_multiplier___024root___eval_phase__ico(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_phase__ico\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vfp32_multiplier___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vfp32_multiplier___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vfp32_multiplier___024root___eval_act(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_act\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vfp32_multiplier___024root___eval_nba(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_nba\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vfp32_multiplier___024root___eval_triggers__act(Vfp32_multiplier___024root* vlSelf);

bool Vfp32_multiplier___024root___eval_phase__act(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_phase__act\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfp32_multiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfp32_multiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfp32_multiplier___024root___eval_phase__nba(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_phase__nba\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfp32_multiplier___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__ico(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__nba(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__act(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vfp32_multiplier___024root___eval(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vfp32_multiplier___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("fp32_multiplier/vsrc/fp32_multiplier.v", 13, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vfp32_multiplier___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfp32_multiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fp32_multiplier/vsrc/fp32_multiplier.v", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfp32_multiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fp32_multiplier/vsrc/fp32_multiplier.v", 13, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfp32_multiplier___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfp32_multiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfp32_multiplier___024root___eval_debug_assertions(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_debug_assertions\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
