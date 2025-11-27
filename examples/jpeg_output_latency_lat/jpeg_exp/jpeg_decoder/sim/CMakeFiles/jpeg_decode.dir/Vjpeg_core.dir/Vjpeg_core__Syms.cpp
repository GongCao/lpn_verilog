// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core.h"
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

// FUNCTIONS
Vjpeg_core__Syms::~Vjpeg_core__Syms()
{
}

Vjpeg_core__Syms::Vjpeg_core__Syms(VerilatedContext* contextp, const char* namep, Vjpeg_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__jpeg_core{this, Verilated::catName(namep, "jpeg_core")}
    , TOP__jpeg_core__u_jpeg_bitbuffer{this, Verilated::catName(namep, "jpeg_core.u_jpeg_bitbuffer")}
    , TOP__jpeg_core__u_jpeg_dqt{this, Verilated::catName(namep, "jpeg_core.u_jpeg_dqt")}
    , TOP__jpeg_core__u_jpeg_idct{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct")}
    , TOP__jpeg_core__u_jpeg_idct__u_input{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_input")}
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_input.u_ram0")}
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_input.u_ram1")}
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_input.u_ram2")}
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_input.u_ram3")}
    , TOP__jpeg_core__u_jpeg_idct__u_transpose{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_transpose")}
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_transpose.u_ram0")}
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_transpose.u_ram1")}
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_transpose.u_ram2")}
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3{this, Verilated::catName(namep, "jpeg_core.u_jpeg_idct.u_transpose.u_ram3")}
    , TOP__jpeg_core__u_jpeg_mcu_proc{this, Verilated::catName(namep, "jpeg_core.u_jpeg_mcu_proc")}
    , TOP__jpeg_core__u_jpeg_output{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output")}
    , TOP__jpeg_core__u_jpeg_output__u_ram_cb{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output.u_ram_cb")}
    , TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output.u_ram_cb.u_ram")}
    , TOP__jpeg_core__u_jpeg_output__u_ram_cr{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output.u_ram_cr")}
    , TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output.u_ram_cr.u_ram")}
    , TOP__jpeg_core__u_jpeg_output__u_ram_y{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output.u_ram_y")}
    , TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram{this, Verilated::catName(namep, "jpeg_core.u_jpeg_output.u_ram_y.u_ram")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.jpeg_core = &TOP__jpeg_core;
    TOP__jpeg_core.u_jpeg_bitbuffer = &TOP__jpeg_core__u_jpeg_bitbuffer;
    TOP__jpeg_core.u_jpeg_dqt = &TOP__jpeg_core__u_jpeg_dqt;
    TOP__jpeg_core.u_jpeg_idct = &TOP__jpeg_core__u_jpeg_idct;
    TOP__jpeg_core__u_jpeg_idct.u_input = &TOP__jpeg_core__u_jpeg_idct__u_input;
    TOP__jpeg_core__u_jpeg_idct__u_input.u_ram0 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0;
    TOP__jpeg_core__u_jpeg_idct__u_input.u_ram1 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1;
    TOP__jpeg_core__u_jpeg_idct__u_input.u_ram2 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2;
    TOP__jpeg_core__u_jpeg_idct__u_input.u_ram3 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3;
    TOP__jpeg_core__u_jpeg_idct.u_transpose = &TOP__jpeg_core__u_jpeg_idct__u_transpose;
    TOP__jpeg_core__u_jpeg_idct__u_transpose.u_ram0 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0;
    TOP__jpeg_core__u_jpeg_idct__u_transpose.u_ram1 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1;
    TOP__jpeg_core__u_jpeg_idct__u_transpose.u_ram2 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2;
    TOP__jpeg_core__u_jpeg_idct__u_transpose.u_ram3 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3;
    TOP__jpeg_core.u_jpeg_mcu_proc = &TOP__jpeg_core__u_jpeg_mcu_proc;
    TOP__jpeg_core.u_jpeg_output = &TOP__jpeg_core__u_jpeg_output;
    TOP__jpeg_core__u_jpeg_output.u_ram_cb = &TOP__jpeg_core__u_jpeg_output__u_ram_cb;
    TOP__jpeg_core__u_jpeg_output__u_ram_cb.u_ram = &TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram;
    TOP__jpeg_core__u_jpeg_output.u_ram_cr = &TOP__jpeg_core__u_jpeg_output__u_ram_cr;
    TOP__jpeg_core__u_jpeg_output__u_ram_cr.u_ram = &TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram;
    TOP__jpeg_core__u_jpeg_output.u_ram_y = &TOP__jpeg_core__u_jpeg_output__u_ram_y;
    TOP__jpeg_core__u_jpeg_output__u_ram_y.u_ram = &TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__jpeg_core.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_bitbuffer.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_dqt.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_idct.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_idct__u_input.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_mcu_proc.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_output.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_output__u_ram_cb.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_output__u_ram_cr.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.__Vconfigure(false);
    TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vconfigure(true);
    TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__Vconfigure(true);
    // Setup scopes
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram0.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram0", "u_ram0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram1.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram1", "u_ram1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram2.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram2", "u_ram2", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram3.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram3", "u_ram3", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram0.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram0", "u_ram0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram1.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram1", "u_ram1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram2.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram2", "u_ram2", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram3.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram3", "u_ram3", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_output__u_ram_cb__u_ram.configure(this, name(), "jpeg_core.u_jpeg_output.u_ram_cb.u_ram", "u_ram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_output__u_ram_cr__u_ram.configure(this, name(), "jpeg_core.u_jpeg_output.u_ram_cr.u_ram", "u_ram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_output__u_ram_y__u_ram.configure(this, name(), "jpeg_core.u_jpeg_output.u_ram_y.u_ram", "u_ram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram0.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram1.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram2.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram3.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram0.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram1.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram2.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram3.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_output__u_ram_cb__u_ram.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,255,0);
        __Vscope_jpeg_core__u_jpeg_output__u_ram_cr__u_ram.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,255,0);
        __Vscope_jpeg_core__u_jpeg_output__u_ram_y__u_ram.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,511,0);
    }
}
