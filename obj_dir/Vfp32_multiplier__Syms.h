// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFP32_MULTIPLIER__SYMS_H_
#define VERILATED_VFP32_MULTIPLIER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfp32_multiplier.h"

// INCLUDE MODULE CLASSES
#include "Vfp32_multiplier___024root.h"
#include "Vfp32_multiplier_adder_nbit__W30.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfp32_multiplier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfp32_multiplier* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfp32_multiplier___024root     TOP;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30 TOP__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder;

    // CONSTRUCTORS
    Vfp32_multiplier__Syms(VerilatedContext* contextp, const char* namep, Vfp32_multiplier* modelp);
    ~Vfp32_multiplier__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
