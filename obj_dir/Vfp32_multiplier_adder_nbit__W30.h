// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfp32_multiplier.h for the primary calling header

#ifndef VERILATED_VFP32_MULTIPLIER_ADDER_NBIT__W30_H_
#define VERILATED_VFP32_MULTIPLIER_ADDER_NBIT__W30_H_  // guard

#include "verilated.h"


class Vfp32_multiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfp32_multiplier_adder_nbit__W30 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__Carry__BRA__0__KET__;
        CData/*0:0*/ __Vcellout__u_adder_1bit_0__Sum;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__1__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__1__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__2__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__2__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__3__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__3__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__4__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__4__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__5__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__5__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__6__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__6__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__7__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__7__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__8__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__8__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__9__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__9__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__10__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__10__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__11__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__11__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__12__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__12__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__13__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__13__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__14__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__14__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__15__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__15__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__16__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__16__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__17__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__17__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__18__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__18__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__19__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__19__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__20__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__20__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__21__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__21__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__22__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__22__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__23__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__23__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__24__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__24__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__25__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__25__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__26__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__26__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__27__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__27__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__28__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__28__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__29__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__29__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__30__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__30__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__31__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__31__KET____DOT__u_adder_1bit__A;
    };
    struct {
        CData/*0:0*/ __Vcellout__adder_chain__BRA__32__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__32__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__33__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__33__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__34__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__34__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__35__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__35__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__36__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__36__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__37__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__37__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__38__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__38__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__39__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__39__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__40__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__40__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__41__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__41__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__42__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__42__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__43__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__43__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__44__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__44__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__45__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__45__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellout__adder_chain__BRA__46__KET____DOT__u_adder_1bit__Cout;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__46__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __Vcellinp__adder_chain__BRA__47__KET____DOT__u_adder_1bit__A;
        CData/*0:0*/ __PVT__adder_chain__BRA__1__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__2__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__3__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__4__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__5__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__6__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__7__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__8__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__9__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__10__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__11__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__12__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__13__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__14__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__15__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__16__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__17__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__18__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__19__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__20__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__21__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__22__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__23__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__24__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__25__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__26__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__27__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__28__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__29__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__30__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__31__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__32__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__33__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
    };
    struct {
        CData/*0:0*/ __PVT__adder_chain__BRA__34__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__35__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__36__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__37__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__38__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__39__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__40__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__41__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__42__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__43__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__44__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__45__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__46__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        CData/*0:0*/ __PVT__adder_chain__BRA__47__KET____DOT__u_adder_1bit__DOT__impl_xor__DOT__tmp;
        VL_IN64(A,47,0);
        VL_IN64(B,47,0);
        VL_OUT64(Sum,47,0);
    };

    // INTERNAL VARIABLES
    Vfp32_multiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfp32_multiplier_adder_nbit__W30(Vfp32_multiplier__Syms* symsp, const char* v__name);
    ~Vfp32_multiplier_adder_nbit__W30();
    VL_UNCOPYABLE(Vfp32_multiplier_adder_nbit__W30);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
