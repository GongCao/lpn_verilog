// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_bitbuffer.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_bitbuffer___stl_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0(Vjpeg_core_jpeg_bitbuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer___stl_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0\n"); );
    // Body
    vlSelf->__PVT__outport_valid_o = ((0x20U <= (IData)(vlSelf->__PVT__count_pipe_q)) 
                                      | ((IData)(vlSelf->__PVT__drain_pipe_q) 
                                         & (0U != (IData)(vlSelf->__PVT__count_pipe_q))));
    vlSelf->__PVT__outport_data_o = (IData)((0xffffffffULL 
                                             & ((vlSelf->__PVT__fifo_data_pipe_q 
                                                 << (IData)(vlSelf->__PVT__rd_ptr_shift_pipe_q)) 
                                                >> 8U)));
    vlSelf->__PVT__count_r = vlSelf->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
         & (0x38U >= (IData)(vlSelf->__PVT__count_q)))) {
        vlSelf->__PVT__count_r = (0x7fU & ((IData)(8U) 
                                           + (IData)(vlSelf->__PVT__count_r)));
    }
    if ((((0x20U <= (IData)(vlSelf->__PVT__count_pipe_q)) 
          | ((IData)(vlSelf->__PVT__drain_pipe_q) & 
             (0U != (IData)(vlSelf->__PVT__count_pipe_q)))) 
         & (0U != (IData)(vlSelf->__PVT__outport_pop_pipe_q)))) {
        vlSelf->__PVT__count_r = (0x7fU & ((IData)(vlSelf->__PVT__count_r) 
                                           - (IData)(vlSelf->__PVT__outport_pop_pipe_q)));
    }
}
