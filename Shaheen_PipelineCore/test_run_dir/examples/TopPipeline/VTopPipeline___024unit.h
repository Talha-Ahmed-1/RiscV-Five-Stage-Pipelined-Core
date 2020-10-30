// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopPipeline.h for the primary calling header

#ifndef _VTopPipeline___024unit_H_
#define _VTopPipeline___024unit_H_

#include "verilated.h"
class VTopPipeline__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTopPipeline___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VTopPipeline__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTopPipeline___024unit& operator= (const VTopPipeline___024unit&);	///< Copying not allowed
    VTopPipeline___024unit(const VTopPipeline___024unit&);	///< Copying not allowed
  public:
    VTopPipeline___024unit(const char* name="TOP");
    ~VTopPipeline___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTopPipeline__Syms* symsp, bool first);
  private:
    void	_configure_coverage(VTopPipeline__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
