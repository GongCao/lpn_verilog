// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_DQT_H_
#define VERILATED_VJPEG_CORE_JPEG_DQT_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;

class Vjpeg_core_jpeg_dqt final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__img_dqt_table_y_i,1,0);
    VL_IN8(__PVT__img_dqt_table_cb_i,1,0);
    VL_IN8(__PVT__img_dqt_table_cr_i,1,0);
    VL_IN8(__PVT__cfg_valid_i,0,0);
    VL_IN8(__PVT__cfg_data_i,7,0);
    VL_IN8(__PVT__cfg_last_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__inport_eob_i,0,0);
    VL_IN8(__PVT__outport_accept_i,0,0);
    VL_OUT8(__PVT__cfg_accept_o,0,0);
    VL_OUT8(__PVT__inport_blk_space_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_idx_o,5,0);
    VL_OUT8(__PVT__outport_eob_o,0,0);
    CData/*7:0*/ __PVT__idx_q;
    CData/*1:0*/ __PVT__cfg_table_q;
    CData/*0:0*/ __PVT__dqt_write_w;
    CData/*7:0*/ __PVT__dqt_table_addr_w;
    CData/*7:0*/ __PVT__dqt_entry_q;
    CData/*0:0*/ __PVT__inport_valid_q;
    CData/*5:0*/ __PVT__inport_idx_q;
    CData/*0:0*/ __PVT__inport_eob_q;
    CData/*0:0*/ __PVT__outport_valid_q;
    CData/*5:0*/ __PVT__outport_idx_q;
    CData/*0:0*/ __PVT__outport_eob_q;
    VL_IN16(__PVT__inport_data_i,15,0);
    VL_OUT16(__PVT__outport_data_o,15,0);
    SData/*15:0*/ __PVT__inport_data_q;
    SData/*15:0*/ __PVT__outport_data_q;
    VL_IN(__PVT__inport_id_i,31,0);
    VL_OUT(__PVT__outport_id_o,31,0);
    IData/*31:0*/ __PVT__inport_id_q;
    IData/*31:0*/ __PVT__outport_id_q;
    VlUnpacked<CData/*7:0*/, 256> __PVT__table_dqt_q;
    VlUnpacked<CData/*1:0*/, 4> __PVT__table_src_w;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_dqt(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_dqt();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_dqt);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_sample();
    uint32_t get_sample_idx();
    bool get_valid();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
