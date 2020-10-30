package riscv

import chisel3._
import chisel3.util._

class StallingUnit extends Module {
  val io = IO (new Bundle {
	val inst_in = Input(UInt(32.W))
	val inst_out = Output(UInt(32.W))
	val MemRead = Input(UInt(1.W))
	val rd = Input(UInt(5.W))
	val rs1_s = Input(UInt(5.W))
	val rs2_s = Input(UInt(5.W))
	val stall = Output(UInt(1.W))
	val pc_in = Input(UInt(32.W))
	val pc_out = Output(UInt(32.W))
	val pc4_in = Input(UInt(32.W))
	val pc4_out = Output(UInt(32.W))
	//val pc_s = Output(UInt(1.W))
	val control_s = Output(UInt(1.W))
  })
	when (io.MemRead === "b1".U && ((io.rd === io.rs1_s) || (io.rd === io.rs2_s))){
		io.stall := "b1".U
		//io.pc_s := "b1".U
		io.control_s := "b1".U
		io.inst_out := io.inst_in
		io.pc_out := io.pc_in
		io.pc4_out := io.pc4_in
		}
	.otherwise {
		io.stall := "b0".U
		io.inst_out := "b0000000".U
		//io.pc_s := "b0".U
		io.control_s := "b0".U
		io.pc_out := 0.U
		io.pc4_out := 0.U}
}
