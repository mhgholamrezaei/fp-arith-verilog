// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfp32_multiplier.h for the primary calling header

#include "Vfp32_multiplier__pch.h"
#include "Vfp32_multiplier__Syms.h"
#include "Vfp32_multiplier_adder_nbit__W30.h"

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = ((1U & vlSymsp->TOP.fp32_multiplier__DOT__operand_b)
                    ? (QData)((IData)(vlSymsp->TOP.fp32_multiplier__DOT__operand_a))
                    : 0ULL);
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSelfRef.A) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = (1U & ((IData)(vlSelfRef.A) 
                                                   & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product)));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 1U)) ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 2U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 3U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 4U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 5U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 6U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 7U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 8U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 9U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0xaU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0xbU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0xcU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0xdU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0xeU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0xfU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x10U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x11U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x12U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x13U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x14U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x15U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x16U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x17U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x18U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x19U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x1aU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x1bU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x1cU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x1dU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x1eU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x1fU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x20U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x21U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x22U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x23U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x24U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x25U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x26U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x27U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x28U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x29U)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x2aU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x2bU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x2cU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x2dU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (1U & ((IData)((vlSelfRef.A >> 0x2eU)) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = (IData)(((vlSelfRef.A >> 0x2fU) ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout)));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}

VL_INLINE_OPT void Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder__0(Vfp32_multiplier_adder_nbit__W30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfp32_multiplier_adder_nbit__W30___ico_sequent__TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder__0\n"); );
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_adder_1bit_0__Sum = (1U 
                                                 & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                                    ^ (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product)));
    vlSelfRef.__PVT__Carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__Vcellout__u_adder_1bit_0__Sum) 
                                             & (IData)(vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product));
    vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 1U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 2U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 3U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 4U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 5U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 6U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 7U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 8U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 9U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0xaU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0xbU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0xcU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0xdU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0xeU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0xfU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x10U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x11U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x12U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x13U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x14U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x15U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x16U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x17U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x18U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x19U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x1aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x1bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x1cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x1dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x1eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x1fU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x20U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x21U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x22U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x23U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x24U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x25U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x26U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x27U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x28U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x29U))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x2aU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x2bU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x2cU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x2dU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A 
        = (1U & ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
                 ^ (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
                            >> 0x2eU))));
    vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A 
        = ((IData)(vlSymsp->TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp) 
           ^ (vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product 
              >> 0x2fU));
    vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__));
    vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 1U)) : (IData)(vlSelfRef.__PVT__Carry__BRA__0__KET__)));
    vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 2U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 3U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 4U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 5U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 6U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 7U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 8U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 9U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0xaU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0xbU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0xcU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0xdU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0xeU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0xfU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x10U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x11U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x12U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x13U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x14U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x15U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x16U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x17U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x18U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x19U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x1aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x1bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x1cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x1dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x1eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x1fU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x20U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x21U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x22U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x23U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x24U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x25U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x26U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x27U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x28U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x29U)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x2aU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x2bU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x2cU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x2dU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout));
    vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout 
        = (1U & ((IData)(vlSelfRef.__PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp)
                  ? (IData)((vlSymsp->TOP.fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product 
                             >> 0x2eU)) : (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout)));
    vlSelfRef.__PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp 
        = ((IData)(vlSelfRef.__Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A) 
           ^ (IData)(vlSelfRef.__Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout));
}
