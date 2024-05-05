# armv9_simulator
Fun attempt to virtualize arm architecture on amd64

# Overview
- I will be following https://developer.arm.com/documentation/ddi0487/ka/?lang=en
to get an idea of what's essential for an arm processor element (PE). 
- Start with Execution states which I think is the most important:
- Provides 31 64-bit general-purpose registers, of which X30 is used as the procedure link
register.
- Provides a 64-bit Program Counter (PC), stack pointers (SPs), and Exception Link Registers
(ELRs).
- Provides 32 128-bit registers for Advanced SIMD vector and scalar floating-point support.
- Provides a single instruction set, A64. For more information, see The instruction sets.
- Defines the Armv8 Exception model, with up to four Exception levels, EL0 - EL3, that provide an execution privilege hierarchy, see Exception levels.
- Provides support for 64-bit virtual addressing. For more information, including the limits on address ranges, see Chapter D8 The AArch64 Virtual Memory System Architecture.
- Defines a number of Process state (PSTATE) elements that hold PE state. The A64 instruction set includes instructions that operate directly on various PSTATE elements.
- Names each System register using a suffix that indicates the lowest Exception level at which the register can be accessed

- Will use little-endian only for now. 
