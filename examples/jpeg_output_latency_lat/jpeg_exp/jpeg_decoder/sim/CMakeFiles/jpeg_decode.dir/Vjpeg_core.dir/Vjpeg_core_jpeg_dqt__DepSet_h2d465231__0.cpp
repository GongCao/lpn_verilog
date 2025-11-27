// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_dqt.h"

bool Vjpeg_core_jpeg_dqt::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::get_valid\n"); );
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    // Body
    get_valid__Vfuncrtn = this->__PVT__outport_valid_q;
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_dqt::get_sample() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::get_sample\n"); );
    VL_OUT16(get_sample__Vfuncrtn,15,0);
    // Body
    get_sample__Vfuncrtn = this->__PVT__outport_data_q;
    // Final
    return (get_sample__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_dqt::get_sample_idx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt::get_sample_idx\n"); );
    VL_OUT8(get_sample_idx__Vfuncrtn,5,0);
    // Body
    get_sample_idx__Vfuncrtn = this->__PVT__outport_idx_q;
    // Final
    return (get_sample_idx__Vfuncrtn);
}
