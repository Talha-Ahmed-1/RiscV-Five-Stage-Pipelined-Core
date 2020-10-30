package riscv

import chisel3.iotesters.PeekPokeTester

class StallingUnitTests(c: StallingUnit) extends PeekPokeTester(c) {
	//poke(c.io.inst_in,1)
        step(1)
        //expect(c.io.inst_out, 1)
}
