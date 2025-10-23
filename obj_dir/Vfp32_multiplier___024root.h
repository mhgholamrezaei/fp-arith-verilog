// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfp32_multiplier.h for the primary calling header

#ifndef VERILATED_VFP32_MULTIPLIER___024ROOT_H_
#define VERILATED_VFP32_MULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"
class Vfp32_multiplier_adder_nbit__W30;


class Vfp32_multiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfp32_multiplier___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fp32_multiplier__DOT__sign;
    CData/*0:0*/ fp32_multiplier__DOT__normalised;
    CData/*0:0*/ fp32_multiplier__DOT__zero;
    CData/*0:0*/ fp32_multiplier__DOT__exception;
    CData/*0:0*/ fp32_multiplier__DOT__a_mantissa_not_zero;
    CData/*0:0*/ fp32_multiplier__DOT__b_mantissa_not_zero;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__Carry__BRA__0__KET__;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT____Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ fp32_multiplier__DOT__u_exponent_adder__DOT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ fp32_multiplier__DOT__exponent;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(result,31,0);
    IData/*23:0*/ fp32_multiplier__DOT__product_mantissa;
    IData/*23:0*/ fp32_multiplier__DOT__product_mantissa_renormalized;
    IData/*23:0*/ fp32_multiplier__DOT__operand_a;
    IData/*23:0*/ fp32_multiplier__DOT__operand_b;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ fp32_multiplier__DOT__product;
    QData/*47:0*/ fp32_multiplier__DOT__product_normalised;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__partial_product;
    QData/*47:0*/ fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__partial_product;
    VlUnpacked<QData/*47:0*/, 24> fp32_multiplier__DOT__u_multiplier__DOT__acc;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfp32_multiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfp32_multiplier___024root(Vfp32_multiplier__Syms* symsp, const char* v__name);
    ~Vfp32_multiplier___024root();
    VL_UNCOPYABLE(Vfp32_multiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
