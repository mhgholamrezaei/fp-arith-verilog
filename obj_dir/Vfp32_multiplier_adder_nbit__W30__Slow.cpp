// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfp32_multiplier.h for the primary calling header

#include "Vfp32_multiplier__pch.h"
#include "Vfp32_multiplier__Syms.h"
#include "Vfp32_multiplier_adder_nbit__W30.h"

void Vfp32_multiplier_adder_nbit__W30___ctor_var_reset(Vfp32_multiplier_adder_nbit__W30* vlSelf);

Vfp32_multiplier_adder_nbit__W30::Vfp32_multiplier_adder_nbit__W30(Vfp32_multiplier__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfp32_multiplier_adder_nbit__W30___ctor_var_reset(this);
}

void Vfp32_multiplier_adder_nbit__W30::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfp32_multiplier_adder_nbit__W30::~Vfp32_multiplier_adder_nbit__W30() {
}
