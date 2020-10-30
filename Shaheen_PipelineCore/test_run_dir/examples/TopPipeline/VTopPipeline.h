// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTopPipeline_H_
#define _VTopPipeline_H_

#include "verilated.h"
class VTopPipeline__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTopPipeline) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign2[2];
    VL_OUT(io_Reg_Out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(TopPipeline__DOT__AluControl_io_out,4,0);
    VL_SIG8(TopPipeline__DOT__Stalling_io_stall,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit_io_forwardA,1,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit_io_forwardB,1,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding_io_forwardA,3,0);
    VL_SIG8(TopPipeline__DOT___T_27,0,0);
    VL_SIG8(TopPipeline__DOT__Alu__DOT___GEN_11,1,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_Load,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_Store,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_Branch,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_I,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_Jal,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_Jalr,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c1_io_Lui,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c2_io_Branch,0,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c2_io_ExtSel,1,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c2_io_NextPc,1,0);
    VL_SIG8(TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14,0,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__func3reg,2,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__func7reg,0,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__rs1sreg,4,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__rs2sreg,4,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__rdreg,4,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__MemWritereg,0,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__MemReadreg,0,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__RegWritereg,0,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__AluOpreg,2,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__OpAreg,1,0);
    VL_SIG8(TopPipeline__DOT__ID_EX__DOT__OpBreg,0,0);
    VL_SIG8(TopPipeline__DOT__EX_MEM__DOT__rdreg,4,0);
    VL_SIG8(TopPipeline__DOT__EX_MEM__DOT__MemWritereg,0,0);
    VL_SIG8(TopPipeline__DOT__EX_MEM__DOT__MemReadreg,0,0);
    VL_SIG8(TopPipeline__DOT__EX_MEM__DOT__RegWritereg,0,0);
    VL_SIG8(TopPipeline__DOT__MEM_WB__DOT__rdreg,4,0);
    VL_SIG8(TopPipeline__DOT__MEM_WB__DOT__RegWritereg,0,0);
    VL_SIG8(TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg,0,0);
    VL_SIG8(TopPipeline__DOT__Stalling__DOT___T_33,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_27,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_28,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_29,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_30,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___GEN_5,1,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___GEN_6,1,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_41,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_42,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_43,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_51,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_55,0,0);
    VL_SIG8(TopPipeline__DOT__ForwardingUnit__DOT___T_67,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_35,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_36,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_37,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_38,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_39,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___GEN_3,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___GEN_4,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_62,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_66,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_68,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_71,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_73,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_74,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_85,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_89,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_103,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_109,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_121,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_136,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___GEN_14,2,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___GEN_15,2,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_159,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_171,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_173,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_176,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_178,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_179,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_196,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_200,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_220,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_226,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_246,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_267,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___T_287,0,0);
    VL_SIG8(TopPipeline__DOT__BranchForwarding__DOT___GEN_34,2,0);
    VL_SIG(TopPipeline__DOT__Alu_io_in1,31,0);
    VL_SIG(TopPipeline__DOT__Alu_io_in2,31,0);
    VL_SIG(TopPipeline__DOT__Register_io_WriteData,31,0);
    VL_SIG(TopPipeline__DOT__Register_io_rs1,31,0);
    VL_SIG(TopPipeline__DOT__Register_io_rs2,31,0);
    VL_SIG(TopPipeline__DOT__Pc_io_input,31,0);
    VL_SIG(TopPipeline__DOT__Jalr_io_in1,31,0);
    VL_SIG(TopPipeline__DOT__Branch_io_rs1,31,0);
    VL_SIG(TopPipeline__DOT__Branch_io_rs2,31,0);
    VL_SIG(TopPipeline__DOT___GEN_0,31,0);
    VL_SIG(TopPipeline__DOT___GEN_53,31,0);
    VL_SIG(TopPipeline__DOT__Alu__DOT___GEN_17,31,0);
    VL_SIG(TopPipeline__DOT__ImmediateGeneration__DOT___T_41,31,0);
    VL_SIG(TopPipeline__DOT__ImmediateGeneration__DOT___T_77,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_0,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_1,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_2,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_3,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_4,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_5,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_6,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_7,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_8,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_9,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_10,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_11,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_12,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_13,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_14,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_15,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_16,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_17,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_18,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_19,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_20,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_21,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_22,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_23,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_24,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_25,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_26,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_27,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_28,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_29,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_30,31,0);
    VL_SIG(TopPipeline__DOT__Register__DOT__register_31,31,0);
    VL_SIG(TopPipeline__DOT__Memory__DOT__mem___05FT_11_data,31,0);
    VL_SIG(TopPipeline__DOT__Pc__DOT__reg__024,31,0);
    VL_SIG(TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data,31,0);
    VL_SIG(TopPipeline__DOT__IF_ID__DOT__pcreg,31,0);
    VL_SIG(TopPipeline__DOT__IF_ID__DOT__pc4reg,31,0);
    VL_SIG(TopPipeline__DOT__IF_ID__DOT__instreg,31,0);
    VL_SIG(TopPipeline__DOT__ID_EX__DOT__pcreg,31,0);
    VL_SIG(TopPipeline__DOT__ID_EX__DOT__pc4reg,31,0);
    VL_SIG(TopPipeline__DOT__ID_EX__DOT__immreg,31,0);
    VL_SIG(TopPipeline__DOT__ID_EX__DOT__rs1reg,31,0);
    VL_SIG(TopPipeline__DOT__ID_EX__DOT__rs2reg,31,0);
    VL_SIG(TopPipeline__DOT__EX_MEM__DOT__rs2reg,31,0);
    VL_SIG(TopPipeline__DOT__EX_MEM__DOT__alureg,31,0);
    VL_SIG(TopPipeline__DOT__MEM_WB__DOT__memreg,31,0);
    VL_SIG(TopPipeline__DOT__MEM_WB__DOT__alureg,31,0);
    //char	__VpadToAlign340[4];
    VL_SIG64(TopPipeline__DOT__Alu__DOT___GEN_19,62,0);
    VL_SIG64(TopPipeline__DOT__ImmediateGeneration__DOT___T_58,32,0);
    VL_SIG(TopPipeline__DOT__Memory__DOT__mem[1024],31,0);
    VL_SIG(TopPipeline__DOT__DataMemory__DOT__mem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign8557[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTopPipeline__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTopPipeline& operator= (const VTopPipeline&);	///< Copying not allowed
    VTopPipeline(const VTopPipeline&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTopPipeline(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTopPipeline();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTopPipeline__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTopPipeline__Syms* symsp, bool first);
  private:
    static QData	_change_request(VTopPipeline__Syms* __restrict vlSymsp);
    void	_configure_coverage(VTopPipeline__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_eval_initial(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_eval_settle(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__14(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_settle__TOP__13(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VTopPipeline__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VTopPipeline__Syms* __restrict vlSymsp);
    static void	traceChgThis(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
