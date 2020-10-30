package riscv

import chisel3._
import chisel3.util._
import chisel3.core

class ForwardingUnit extends Module {
  val io = IO (new Bundle {
	val RegWrite = Input(UInt(1.W))
	val RegWrite1 = Input(UInt(1.W))
	val EX_MEM_rd = Input(UInt(5.W))
	val MEM_WB_rd = Input(UInt(5.W))
	val ID_EX_rs1_s = Input(UInt(5.W))
	val ID_EX_rs2_s = Input(UInt(5.W))
	val forwardA = Output(UInt(2.W))
	val forwardB = Output(UInt(2.W))
  })
	io.forwardA := "b00".U
	io.forwardB := "b00".U
	when (io.RegWrite === "b1".U && io.EX_MEM_rd =/= "b00000".U){
		when ((io.EX_MEM_rd === io.ID_EX_rs1_s) && (io.EX_MEM_rd === io.ID_EX_rs2_s)){
			io.forwardA := "b10".U
			io.forwardB := "b10".U
			}
		.elsewhen (io.EX_MEM_rd === io.ID_EX_rs1_s){io.forwardA := "b10".U}
		.elsewhen (io.EX_MEM_rd === io.ID_EX_rs2_s){io.forwardB := "b10".U}
		}
	when (io.RegWrite1 === "b1".U && io.MEM_WB_rd =/= "b00000".U){
		when (((io.MEM_WB_rd === io.ID_EX_rs1_s) && (io.MEM_WB_rd === io.ID_EX_rs2_s)) && ~((io.RegWrite === "b1".U) && (io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.ID_EX_rs1_s) && (io.EX_MEM_rd === io.ID_EX_rs2_s))){
			io.forwardA := "b01".U
			io.forwardB := "b01".U
		}
		.elsewhen (io.MEM_WB_rd === io.ID_EX_rs1_s && ~((io.RegWrite === "b1".U) && (io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.ID_EX_rs1_s))){
			io.forwardA := "b01".U
		}
		.elsewhen (io.MEM_WB_rd === io.ID_EX_rs2_s && ~((io.RegWrite === "b1".U) && (io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.ID_EX_rs2_s))){
			io.forwardB := "b01".U
		}
	}

	/*when (io.RegWrite === "b1".U && io.EX_MEM_rd =/= "b00000".U){
		when (io.EX_MEM_rd === io.ID_EX_rs1_s){io.forwardA := "b10".U}
		.elsewhen (io.EX_MEM_rd === io.ID_EX_rs2_s){io.forwardB := "b10".U}
		.elsewhen (io.EX_MEM_rd === io.ID_EX_rs1_s && io.EX_MEM_rd === io.ID_EX_rs2_s){
			io.forwardA := "b10".U
			io.forwardB := "b10".U
			}
		}
	when (io.RegWrite1 === "b1".U && io.MEM_WB_rd =/= "b00000".U && ~(io.RegWrite === "b1".U && (io.EX_MEM_rd =/= "b00000".U))){
		when (io.MEM_WB_rd === io.ID_EX_rs1_s && (io.EX_MEM_rd =/= io.ID_EX_rs1_s)){io.forwardA := "b01".U}
		.elsewhen (io.MEM_WB_rd === io.ID_EX_rs2_s && (io.EX_MEM_rd =/= io.ID_EX_rs2_s)){io.forwardB := "b01".U}
		.elsewhen (io.MEM_WB_rd === io.ID_EX_rs1_s && io.MEM_WB_rd === io.ID_EX_rs2_s && (io.EX_MEM_rd =/= io.ID_EX_rs1_s) && (io.EX_MEM_rd =/= io.ID_EX_rs2_s)){
			io.forwardA := "b01".U
			io.forwardB := "b01".U
			}
		}*/
}
