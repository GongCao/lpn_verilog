// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_transpose.h"

void Vjpeg_core_jpeg_idct_transpose___ctor_var_reset(Vjpeg_core_jpeg_idct_transpose* vlSelf);

Vjpeg_core_jpeg_idct_transpose::Vjpeg_core_jpeg_idct_transpose(Vjpeg_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjpeg_core_jpeg_idct_transpose___ctor_var_reset(this);
}

void Vjpeg_core_jpeg_idct_transpose::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vjpeg_core_jpeg_idct_transpose::~Vjpeg_core_jpeg_idct_transpose() {
}
