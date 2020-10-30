package riscv

import chisel3.iotesters.PeekPokeTester

class ForwardingUnitTests(c: ForwardingUnit) extends PeekPokeTester(c) {
	step(1)
}
