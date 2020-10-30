// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"
class Vtop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop) {
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
    VL_OUT(io_reg_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(top__DOT__alu_control_io_output,4,0);
    VL_SIG8(top__DOT__hazard_detection_io_pc_forward,0,0);
    VL_SIG8(top__DOT__branch_forward_io_forward_rs1,3,0);
    VL_SIG8(top__DOT___T_18,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_load_type,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_s_type,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_sb_type,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_i_type,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_jalr_type,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_jal_type,0,0);
    VL_SIG8(top__DOT__control__DOT__instruction_type_decode_io_lui_type,0,0);
    VL_SIG8(top__DOT__control__DOT__control_decode_io_branch,0,0);
    VL_SIG8(top__DOT__control__DOT__control_decode_io_extend_select,1,0);
    VL_SIG8(top__DOT__control__DOT__control_decode_io_next_pc_select,1,0);
    VL_SIG8(top__DOT__alu__DOT___T_26,0,0);
    VL_SIG8(top__DOT__alu__DOT___T_65,0,0);
    VL_SIG8(top__DOT__alu_control__DOT___T_17,4,0);
    VL_SIG8(top__DOT__ID_EX__DOT__rd_select_register,4,0);
    VL_SIG8(top__DOT__ID_EX__DOT__rs1_select_register,4,0);
    VL_SIG8(top__DOT__ID_EX__DOT__rs2_select_register,4,0);
    VL_SIG8(top__DOT__ID_EX__DOT__func3_register,2,0);
    VL_SIG8(top__DOT__ID_EX__DOT__func7_register,0,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_memorywrite_register,0,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_memoryread_register,0,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_registerwrite_register,0,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_memorytoregister_register,0,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_aluop_register,2,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_opa_select_register,1,0);
    VL_SIG8(top__DOT__ID_EX__DOT__control_opb_select_register,0,0);
    VL_SIG8(top__DOT__EX_MEM__DOT__register_memorywrite,0,0);
    VL_SIG8(top__DOT__EX_MEM__DOT__register_memoryread,0,0);
    VL_SIG8(top__DOT__EX_MEM__DOT__register_registerwrite,0,0);
    VL_SIG8(top__DOT__EX_MEM__DOT__register_memorytoregister,0,0);
    VL_SIG8(top__DOT__EX_MEM__DOT__register_rd_select,4,0);
    VL_SIG8(top__DOT__MEM_WB__DOT__register_registerwrite,0,0);
    VL_SIG8(top__DOT__MEM_WB__DOT__register_memorytoregister,0,0);
    VL_SIG8(top__DOT__MEM_WB__DOT__register_memoryread,0,0);
    VL_SIG8(top__DOT__MEM_WB__DOT__register_rd_select,4,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_27,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_29,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_30,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_31,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_40,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___GEN_3,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_54,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_66,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_68,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_69,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_85,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___T_87,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___GEN_8,0,0);
    VL_SIG8(top__DOT__forward_unit__DOT___GEN_9,0,0);
    VL_SIG8(top__DOT__hazard_detection__DOT___T_31,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_35,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_36,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_37,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_38,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_39,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___GEN_3,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___GEN_4,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_62,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_66,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_68,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_71,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_73,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_74,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_85,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_89,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_103,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_109,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_121,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_136,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___GEN_14,2,0);
    VL_SIG8(top__DOT__branch_forward__DOT___GEN_15,2,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_159,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_171,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_173,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_176,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_178,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_179,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_196,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_200,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_220,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_226,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_246,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___T_267,0,0);
    VL_SIG8(top__DOT__branch_forward__DOT___GEN_34,2,0);
    //char	__VpadToAlign99[1];
    VL_SIG(top__DOT__register_file_io_write_data,31,0);
    VL_SIG(top__DOT__register_file_io_rs1,31,0);
    VL_SIG(top__DOT__register_file_io_rs2,31,0);
    VL_SIG(top__DOT__alu_io_operand_a,31,0);
    VL_SIG(top__DOT__alu_io_operand_b,31,0);
    VL_SIG(top__DOT__jalr_io_input_a,31,0);
    VL_SIG(top__DOT__pc_io_in,31,0);
    VL_SIG(top__DOT__data_memory_io_memory_out,31,0);
    VL_SIG(top__DOT__branch_logic_io_rs1,31,0);
    VL_SIG(top__DOT__branch_logic_io_rs2,31,0);
    VL_SIG(top__DOT___GEN_0,31,0);
    VL_SIG(top__DOT___GEN_1,31,0);
    VL_SIG(top__DOT___GEN_68,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_0,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_1,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_2,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_3,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_4,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_5,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_6,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_7,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_8,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_9,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_10,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_11,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_12,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_13,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_14,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_15,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_16,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_17,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_18,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_19,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_20,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_21,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_22,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_23,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_24,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_25,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_26,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_27,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_28,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_29,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_30,31,0);
    VL_SIG(top__DOT__register_file__DOT__registers_31,31,0);
    VL_SIG(top__DOT__alu__DOT___GEN_19,31,0);
    VL_SIG(top__DOT__immediate_generation__DOT__i_immediate_32,31,0);
    VL_SIG(top__DOT__immediate_generation__DOT___T_41,31,0);
    VL_SIG(top__DOT__immediate_generation__DOT___T_62,31,0);
    VL_SIG(top__DOT__pc__DOT__register,31,0);
    VL_SIG(top__DOT__instruction_memory__DOT__memory___05FT_11_data,31,0);
    VL_SIG(top__DOT__data_memory__DOT__memory___05FT_23_data,31,0);
    VL_SIG(top__DOT__data_memory__DOT__memory___05FT_24_data,31,0);
    VL_SIG(top__DOT__IF_ID__DOT__pc_register,31,0);
    VL_SIG(top__DOT__IF_ID__DOT__pc4_register,31,0);
    VL_SIG(top__DOT__IF_ID__DOT__instruction_register,31,0);
    VL_SIG(top__DOT__ID_EX__DOT__pc4_register,31,0);
    VL_SIG(top__DOT__ID_EX__DOT__rs1_register,31,0);
    VL_SIG(top__DOT__ID_EX__DOT__rs2_register,31,0);
    VL_SIG(top__DOT__ID_EX__DOT__immediate_register,31,0);
    VL_SIG(top__DOT__EX_MEM__DOT__register_rs2,31,0);
    VL_SIG(top__DOT__EX_MEM__DOT__register_alu_out,31,0);
    VL_SIG(top__DOT__MEM_WB__DOT__register_datamemory_data,31,0);
    VL_SIG(top__DOT__MEM_WB__DOT__register_alu,31,0);
    //char	__VpadToAlign356[4];
    VL_SIG64(top__DOT__alu__DOT___GEN_21,62,0);
    VL_SIG(top__DOT__instruction_memory__DOT__memory[1024],31,0);
    VL_SIG(top__DOT__data_memory__DOT__memory[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign8565[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);	///< Copying not allowed
    Vtop(const Vtop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
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
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vtop__Syms* __restrict vlSymsp);
    void	_configure_coverage(Vtop__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__14(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__13(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__15(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vtop__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
