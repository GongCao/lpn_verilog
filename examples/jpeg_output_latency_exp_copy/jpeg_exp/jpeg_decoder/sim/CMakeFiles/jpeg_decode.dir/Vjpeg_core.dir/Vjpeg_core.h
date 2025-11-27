// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VJPEG_CORE_H_
#define VERILATED_VJPEG_CORE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vjpeg_core__Syms;
class Vjpeg_core___024root;
class Vjpeg_core_jpeg_core;


// This class is the main interface to the Verilated model
class Vjpeg_core VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vjpeg_core__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_i,0,0);
    VL_IN8(&inport_valid_i,0,0);
    VL_IN8(&inport_strb_i,3,0);
    VL_IN8(&inport_last_i,0,0);
    VL_IN8(&outport_accept_i,0,0);
    VL_OUT8(&inport_accept_o,0,0);
    VL_OUT8(&outport_valid_o,0,0);
    VL_OUT8(&outport_pixel_r_o,7,0);
    VL_OUT8(&outport_pixel_g_o,7,0);
    VL_OUT8(&outport_pixel_b_o,7,0);
    VL_OUT8(&idle_o,0,0);
    VL_OUT16(&outport_width_o,15,0);
    VL_OUT16(&outport_height_o,15,0);
    VL_OUT16(&outport_pixel_x_o,15,0);
    VL_OUT16(&outport_pixel_y_o,15,0);
    VL_IN(&inport_data_i,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vjpeg_core_jpeg_core* const jpeg_core;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vjpeg_core___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vjpeg_core(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vjpeg_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vjpeg_core();
  private:
    VL_UNCOPYABLE(Vjpeg_core);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
