// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfp32_multiplier.h for the primary calling header

#include "Vfp32_multiplier__pch.h"
#include "Vfp32_multiplier___024root.h"

VL_ATTR_COLD void Vfp32_multiplier___024root___eval_static(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_static\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfp32_multiplier___024root___eval_initial(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_initial\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfp32_multiplier___024root___eval_final(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_final\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__stl(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfp32_multiplier___024root___eval_phase__stl(Vfp32_multiplier___024root* vlSelf);

VL_ATTR_COLD void Vfp32_multiplier___024root___eval_settle(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_settle\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfp32_multiplier___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fp32_multiplier/vsrc/fp32_multiplier.v", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfp32_multiplier___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__stl(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___dump_triggers__stl\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfp32_multiplier___024root___eval_triggers__stl(Vfp32_multiplier___024root* vlSelf);
VL_ATTR_COLD void Vfp32_multiplier___024root___eval_stl(Vfp32_multiplier___024root* vlSelf);

VL_ATTR_COLD bool Vfp32_multiplier___024root___eval_phase__stl(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_phase__stl\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfp32_multiplier___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfp32_multiplier___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__ico(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___dump_triggers__ico\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__act(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___dump_triggers__act\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__nba(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___dump_triggers__nba\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfp32_multiplier___024root____Vm_traceActivitySetAll(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root____Vm_traceActivitySetAll\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vfp32_multiplier___024root___ctor_var_reset(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ctor_var_reset\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16900879642891266615ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->fp32_multiplier__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14847250256641494270ull);
    vlSelf->fp32_multiplier__DOT__normalised = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17738160697024019807ull);
    vlSelf->fp32_multiplier__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2529498974221344786ull);
    vlSelf->fp32_multiplier__DOT__exponent = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11571635379976425640ull);
    vlSelf->fp32_multiplier__DOT__product_mantissa = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2975158681826993577ull);
    vlSelf->fp32_multiplier__DOT__product_mantissa_renormalized = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15967351142662277332ull);
    vlSelf->fp32_multiplier__DOT__operand_a = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5088304504265839883ull);
    vlSelf->fp32_multiplier__DOT__operand_b = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12878205705289042447ull);
    vlSelf->fp32_multiplier__DOT__product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 7683923797730089354ull);
    vlSelf->fp32_multiplier__DOT__product_normalised = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12367526641803046352ull);
    vlSelf->fp32_multiplier__DOT__exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17618662898853429303ull);
    vlSelf->fp32_multiplier__DOT__a_mantissa_not_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11288167950954889292ull);
    vlSelf->fp32_multiplier__DOT__b_mantissa_not_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8894460066406522611ull);
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__acc[__Vi0] = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11066024770572646045ull);
    }
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11125421159944906686ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13391581324006151978ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12657857908827509564ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 3483064688046353033ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11700853753360512438ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14959974782964633009ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13394527465225426181ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17104743679358421498ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12997877689356269334ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 6659453092897003198ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 9214665262017146928ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 265003055586478424ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 15878016797892786545ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 15239963200134634386ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 1008335698882605451ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14233041696939448910ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14977963013969303964ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 1648901289856370270ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11848329845456097649ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 10979163163829085090ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17997449950959691729ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 914020588577399938ull);
    vlSelf->fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4072604311208125211ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__Carry__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7809315434994345681ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15299426691375917039ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768365658421681568ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1548915854277883359ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 955184732214986741ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4172276587912132590ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16899734887458483182ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4684953630659254093ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782583809934775767ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11781690079407137693ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9861350790674348970ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8235830087147069783ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10177675085333656801ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10880787518260504997ull);
    vlSelf->fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6394036263524803158ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
