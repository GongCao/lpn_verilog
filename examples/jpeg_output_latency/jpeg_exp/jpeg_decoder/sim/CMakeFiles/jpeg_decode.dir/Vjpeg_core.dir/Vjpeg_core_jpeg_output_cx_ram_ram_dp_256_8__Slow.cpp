// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"

void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___ctor_var_reset(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* vlSelf);

Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8(Vjpeg_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___ctor_var_reset(this);
}

void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8::~Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8() {
}
