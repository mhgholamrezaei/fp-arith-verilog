// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfp32_multiplier.h for the primary calling header

#include "Vfp32_multiplier__pch.h"
#include "Vfp32_multiplier__Syms.h"
#include "Vfp32_multiplier___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__ico(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vfp32_multiplier___024root___eval_triggers__ico(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_triggers__ico\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfp32_multiplier___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vfp32_multiplier___024root___ico_sequent__TOP__0(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__1(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__2(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__3(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__4(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__5(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__6(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__7(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__8(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__9(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__10(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__11(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf);
void Vfp32_multiplier___024root___ico_sequent__TOP__12(Vfp32_multiplier___024root* vlSelf);

void Vfp32_multiplier___024root___eval_ico(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_ico\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vfp32_multiplier___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__1(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__2(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__3(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__4(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__5(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__6(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__7(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__8(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__9(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__10(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__11(vlSelf);
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder));
        Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder__0((&vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder));
        Vfp32_multiplier___024root___ico_sequent__TOP__12(vlSelf);
    }
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__1(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__1\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0U] 
        = vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.A;
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__2(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__2\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[1U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[2U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__3(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__3\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[3U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[4U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__4(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__4\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[5U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[6U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__5(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__5\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[7U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[8U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__6(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__6\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[9U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0xaU] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__7(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__7\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0xbU] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0xcU] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__8(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__8\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0xdU] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0xeU] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__9(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__9\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0xfU] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x10U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__10(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__10\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x11U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x12U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__11(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__11\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x13U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x14U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
}

VL_INLINE_OPT void Vfp32_multiplier___024root___ico_sequent__TOP__12(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___ico_sequent__TOP__12\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x15U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x16U] 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
                                  << 0x1fU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
                                               << 0x1eU)) 
                                | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
                                    << 0x1dU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
                                    << 0x1bU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
                                      << 0x19U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
                                    << 0x17U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
                                      << 0x15U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
                                      << 0x13U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
                                        << 0x11U) | 
                                       ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
                                        << 0x10U))))) 
                             | ((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
                                                << 0xeU)) 
                                  | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
                                      << 0xdU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
                                                  << 0xcU))) 
                                 | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
                                      << 0xbU) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
                                                  << 0xaU)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
                                        << 9U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
                                                  << 8U)))) 
                                | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
                                      << 7U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
                                                << 6U)) 
                                    | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
                                        << 5U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
                                                  << 4U))) 
                                   | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
                                        << 3U) | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
                                          << 1U) | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A)))))))) 
            << 0x10U) | (QData)((IData)(((((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
                                             << 0xfU) 
                                            | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
                                               << 0xeU)) 
                                           | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
                                               << 0xdU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
                                                 << 0xcU))) 
                                          | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
                                                   << 8U)))) 
                                         | (((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
                                               << 7U) 
                                              | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
                                                   << 4U))) 
                                            | ((((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum))))))));
    vlSelfRef.fp32_multiplier__DOT__normalised = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                  ^ 
                                                  (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                   >> 0x2fU));
    vlSelfRef.fp32_multiplier__DOT__product = (((QData)((IData)(
                                                                (((((((IData)(vlSelfRef.fp32_multiplier__DOT__normalised) 
                                                                      << 0x1fU) 
                                                                     | (0x40000000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x2eU))) 
                                                                           << 0x1eU))) 
                                                                    | ((0x20000000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x2dU))) 
                                                                           << 0x1dU)) 
                                                                       | (0x10000000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x2cU))) 
                                                                             << 0x1cU)))) 
                                                                   | (((0x8000000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x2bU))) 
                                                                           << 0x1bU)) 
                                                                       | (0x4000000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x2aU))) 
                                                                             << 0x1aU))) 
                                                                      | ((0x2000000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x29U))) 
                                                                             << 0x19U)) 
                                                                         | (0x1000000U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x28U))) 
                                                                               << 0x18U))))) 
                                                                  | ((((0x800000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x27U))) 
                                                                           << 0x17U)) 
                                                                       | (0x400000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x26U))) 
                                                                             << 0x16U))) 
                                                                      | ((0x200000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x25U))) 
                                                                             << 0x15U)) 
                                                                         | (0x100000U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x24U))) 
                                                                               << 0x14U)))) 
                                                                     | (((0x80000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x23U))) 
                                                                             << 0x13U)) 
                                                                         | (0x40000U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x22U))) 
                                                                               << 0x12U))) 
                                                                        | ((0x20000U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x21U))) 
                                                                               << 0x11U)) 
                                                                           | (0x10000U 
                                                                              & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x20U))) 
                                                                                << 0x10U)))))) 
                                                                 | (((((0x8000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x1fU))) 
                                                                           << 0xfU)) 
                                                                       | (0x4000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x1eU))) 
                                                                             << 0xeU))) 
                                                                      | ((0x2000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x1dU))) 
                                                                             << 0xdU)) 
                                                                         | (0x1000U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x1cU))) 
                                                                               << 0xcU)))) 
                                                                     | (((0x800U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x1bU))) 
                                                                             << 0xbU)) 
                                                                         | (0x400U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x1aU))) 
                                                                               << 0xaU))) 
                                                                        | ((0x200U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x19U))) 
                                                                               << 9U)) 
                                                                           | (0x100U 
                                                                              & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x18U))) 
                                                                                << 8U))))) 
                                                                    | ((((0x80U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x17U))) 
                                                                             << 7U)) 
                                                                         | (0x40U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x16U))) 
                                                                               << 6U))) 
                                                                        | ((0x20U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x15U))) 
                                                                               << 5U)) 
                                                                           | (0x10U 
                                                                              & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x14U))) 
                                                                                << 4U)))) 
                                                                       | (((8U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x13U))) 
                                                                               << 3U)) 
                                                                           | (4U 
                                                                              & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x12U))) 
                                                                                << 2U))) 
                                                                          | ((2U 
                                                                              & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x11U))) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0x10U))))))))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((((0x8000U 
                                                                      & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0xfU))) 
                                                                         << 0xfU)) 
                                                                     | (0x4000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0xeU))) 
                                                                           << 0xeU))) 
                                                                    | ((0x2000U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0xdU))) 
                                                                           << 0xdU)) 
                                                                       | (0x1000U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0xcU))) 
                                                                             << 0xcU)))) 
                                                                   | (((0x800U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0xbU))) 
                                                                           << 0xbU)) 
                                                                       | (0x400U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 0xaU))) 
                                                                             << 0xaU))) 
                                                                      | ((0x200U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 9U))) 
                                                                             << 9U)) 
                                                                         | (0x100U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 8U))) 
                                                                               << 8U))))) 
                                                                  | ((((0x80U 
                                                                        & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 7U))) 
                                                                           << 7U)) 
                                                                       | (0x40U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 6U))) 
                                                                             << 6U))) 
                                                                      | ((0x20U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 5U))) 
                                                                             << 5U)) 
                                                                         | (0x10U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 4U))) 
                                                                               << 4U)))) 
                                                                     | (((8U 
                                                                          & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 3U))) 
                                                                             << 3U)) 
                                                                         | (4U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 2U))) 
                                                                               << 2U))) 
                                                                        | ((2U 
                                                                            & (((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                                ^ (IData)(
                                                                                (vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product 
                                                                                >> 1U))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                                                ^ (IData)(vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product))))))))));
    vlSelfRef.fp32_multiplier__DOT__u_multiplier__DOT__acc[0x17U] 
        = vlSelfRef.fp32_multiplier__DOT__product;
    vlSelfRef.fp32_multiplier__DOT__product_normalised 
        = (0xffffffffffffULL & ((IData)(vlSelfRef.fp32_multiplier__DOT__normalised)
                                 ? vlSelfRef.fp32_multiplier__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, vlSelfRef.fp32_multiplier__DOT__product, 1U)));
    vlSelfRef.fp32_multiplier__DOT__zero = ((~ (IData)(vlSelfRef.fp32_multiplier__DOT__exception)) 
                                            & (0ULL 
                                               == (0xffffff000000ULL 
                                                   & vlSelfRef.fp32_multiplier__DOT__product_normalised)));
    vlSelfRef.fp32_multiplier__DOT__product_mantissa 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelfRef.fp32_multiplier__DOT__product_normalised 
                                              >> 0x18U))) 
                        + (1U & ((IData)((vlSelfRef.fp32_multiplier__DOT__product_normalised 
                                          >> 0x17U)) 
                                 & (0U != (0x7fffffU 
                                           & (IData)(vlSelfRef.fp32_multiplier__DOT__product_normalised)))))));
    vlSelfRef.fp32_multiplier__DOT__exponent = (0x1ffU 
                                                & (((((((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                        << 8U) 
                                                       | ((0x80U 
                                                           & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                               << 7U) 
                                                              ^ 
                                                              (0x180U 
                                                               & (vlSelfRef.b 
                                                                  >> 0x17U)))) 
                                                          | (0x40U 
                                                             & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                 << 6U) 
                                                                ^ 
                                                                (0x1c0U 
                                                                 & (vlSelfRef.b 
                                                                    >> 0x17U)))))) 
                                                      | ((0x20U 
                                                          & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                              << 5U) 
                                                             ^ 
                                                             (0x1e0U 
                                                              & (vlSelfRef.b 
                                                                 >> 0x17U)))) 
                                                         | (0x10U 
                                                            & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                << 4U) 
                                                               ^ 
                                                               (0x1f0U 
                                                                & (vlSelfRef.b 
                                                                   >> 0x17U)))))) 
                                                     | (((8U 
                                                          & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                              << 3U) 
                                                             ^ 
                                                             (0x1f8U 
                                                              & (vlSelfRef.b 
                                                                 >> 0x17U)))) 
                                                         | (4U 
                                                            & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                << 2U) 
                                                               ^ 
                                                               (0x1fcU 
                                                                & (vlSelfRef.b 
                                                                   >> 0x17U))))) 
                                                        | ((2U 
                                                            & (((IData)(vlSelfRef.fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                                                                << 1U) 
                                                               ^ 
                                                               (0x1feU 
                                                                & (vlSelfRef.b 
                                                                   >> 0x17U)))) 
                                                           | (1U 
                                                              & ((vlSelfRef.a 
                                                                  ^ vlSelfRef.b) 
                                                                 >> 0x17U))))) 
                                                    - (IData)(0x7fU)) 
                                                   + 
                                                   ((IData)(vlSelfRef.fp32_multiplier__DOT__normalised) 
                                                    + 
                                                    (1U 
                                                     & (vlSelfRef.fp32_multiplier__DOT__product_mantissa 
                                                        >> 0x17U)))));
    vlSelfRef.result = (((IData)(((0x7f800000U == (0x7f800000U 
                                                   & vlSelfRef.a)) 
                                  & (0U != (0x7fffffU 
                                            & vlSelfRef.a)))) 
                         | ((IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelfRef.b)) 
                                     & (0U != (0x7fffffU 
                                               & vlSelfRef.b)))) 
                            | ((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelfRef.b)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fffffffU 
                                                       & vlSelfRef.a)))))) 
                               | (IData)(((0x7f800000U 
                                           == (0x7f800000U 
                                               & vlSelfRef.a)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fffffffU 
                                                         & vlSelfRef.b)))))))))
                         ? (0x7fc00000U | ((IData)(vlSelfRef.fp32_multiplier__DOT__sign) 
                                           << 0x1fU))
                         : ((1U & ((~ (IData)(vlSelfRef.fp32_multiplier__DOT__zero)) 
                                   & (((IData)(vlSelfRef.fp32_multiplier__DOT__exponent) 
                                       >> 8U) | (IData)(
                                                        (0xffU 
                                                         == (IData)(vlSelfRef.fp32_multiplier__DOT__exponent))))))
                             ? (0x7f800000U | ((IData)(vlSelfRef.fp32_multiplier__DOT__sign) 
                                               << 0x1fU))
                             : ((1U & (IData)(((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelfRef.fp32_multiplier__DOT__exponent))) 
                                               & (~ (IData)(vlSelfRef.fp32_multiplier__DOT__zero)))))
                                 ? ((IData)(vlSelfRef.fp32_multiplier__DOT__sign) 
                                    << 0x1fU) : ((IData)(vlSelfRef.fp32_multiplier__DOT__zero)
                                                  ? 
                                                 ((IData)(vlSelfRef.fp32_multiplier__DOT__sign) 
                                                  << 0x1fU)
                                                  : 
                                                 ((IData)(vlSelfRef.fp32_multiplier__DOT__exception)
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelfRef.fp32_multiplier__DOT__sign) 
                                                      << 0x1fU))
                                                   : 
                                                  (((IData)(vlSelfRef.fp32_multiplier__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(vlSelfRef.fp32_multiplier__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & vlSelfRef.fp32_multiplier__DOT__product_mantissa))))))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfp32_multiplier___024root___dump_triggers__act(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vfp32_multiplier___024root___eval_triggers__act(Vfp32_multiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfp32_multiplier___024root___eval_triggers__act\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfp32_multiplier___024root___dump_triggers__act(vlSelf);
    }
#endif
}
