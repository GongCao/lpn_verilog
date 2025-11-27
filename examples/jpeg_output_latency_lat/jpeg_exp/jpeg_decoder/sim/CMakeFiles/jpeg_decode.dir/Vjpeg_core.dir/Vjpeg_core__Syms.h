// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJPEG_CORE__SYMS_H_
#define VERILATED_VJPEG_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vjpeg_core.h"

// INCLUDE MODULE CLASSES
#include "Vjpeg_core___024root.h"
#include "Vjpeg_core_jpeg_core.h"
#include "Vjpeg_core_jpeg_idct.h"
#include "Vjpeg_core_jpeg_dqt.h"
#include "Vjpeg_core_jpeg_output.h"
#include "Vjpeg_core_jpeg_bitbuffer.h"
#include "Vjpeg_core_jpeg_mcu_proc.h"
#include "Vjpeg_core_jpeg_idct_ram.h"
#include "Vjpeg_core_jpeg_idct_transpose.h"
#include "Vjpeg_core_jpeg_output_y_ram.h"
#include "Vjpeg_core_jpeg_output_cx_ram.h"
#include "Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9.h"
#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"
#include "Vjpeg_core_jpeg_idct_ram_dp.h"
#include "Vjpeg_core_jpeg_idct_transpose_ram.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vjpeg_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjpeg_core* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjpeg_core___024root           TOP;
    Vjpeg_core_jpeg_core           TOP__jpeg_core;
    Vjpeg_core_jpeg_bitbuffer      TOP__jpeg_core__u_jpeg_bitbuffer;
    Vjpeg_core_jpeg_dqt            TOP__jpeg_core__u_jpeg_dqt;
    Vjpeg_core_jpeg_idct           TOP__jpeg_core__u_jpeg_idct;
    Vjpeg_core_jpeg_idct_ram       TOP__jpeg_core__u_jpeg_idct__u_input;
    Vjpeg_core_jpeg_idct_ram_dp    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0;
    Vjpeg_core_jpeg_idct_ram_dp    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1;
    Vjpeg_core_jpeg_idct_ram_dp    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2;
    Vjpeg_core_jpeg_idct_ram_dp    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3;
    Vjpeg_core_jpeg_idct_transpose TOP__jpeg_core__u_jpeg_idct__u_transpose;
    Vjpeg_core_jpeg_idct_transpose_ram TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0;
    Vjpeg_core_jpeg_idct_transpose_ram TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1;
    Vjpeg_core_jpeg_idct_transpose_ram TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2;
    Vjpeg_core_jpeg_idct_transpose_ram TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3;
    Vjpeg_core_jpeg_mcu_proc       TOP__jpeg_core__u_jpeg_mcu_proc;
    Vjpeg_core_jpeg_output         TOP__jpeg_core__u_jpeg_output;
    Vjpeg_core_jpeg_output_cx_ram  TOP__jpeg_core__u_jpeg_output__u_ram_cb;
    Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8 TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram;
    Vjpeg_core_jpeg_output_cx_ram  TOP__jpeg_core__u_jpeg_output__u_ram_cr;
    Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8 TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram;
    Vjpeg_core_jpeg_output_y_ram   TOP__jpeg_core__u_jpeg_output__u_ram_y;
    Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9 TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram;

    // SCOPE NAMES
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram0;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram1;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram2;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram3;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram0;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram1;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram2;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram3;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_output__u_ram_cb__u_ram;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_output__u_ram_cr__u_ram;
    VerilatedScope __Vscope_jpeg_core__u_jpeg_output__u_ram_y__u_ram;

    // CONSTRUCTORS
    Vjpeg_core__Syms(VerilatedContext* contextp, const char* namep, Vjpeg_core* modelp);
    ~Vjpeg_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
