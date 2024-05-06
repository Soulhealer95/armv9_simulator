#ifndef _EXEC_STATES_H_
#define _EXEC_STATES_H_
#include <stdint.h>

typedef struct uint128_t {
	uint64_t u_byte;
	uint64_t l_byte;
} uint128_t;

typedef struct arm_regs {

	/* 31 gen purpose registers.  */
	uint64_t X_reg[30];
	/* X[30] is also the lr.  */
	union {
		uint64_t X_reg_31;
		uint64_t lr;
	};
	uint64_t pc;
	uint64_t sp;
	uint64_t elr;

	/* 32 128-bit SIMD and scalar fp registers.  */
	uint128_t fp_reg[32];
} arm_regs;

/* TODO Add instruction sets.  */
/* TODO Add exception models.  */
/* TODO Add PSTATE elements.  */

#endif /* EXEC STATES*/
