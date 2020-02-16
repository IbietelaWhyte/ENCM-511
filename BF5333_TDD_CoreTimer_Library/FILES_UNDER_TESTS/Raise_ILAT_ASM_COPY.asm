/*
 * Raise_ILAT_ASM_COPY.asm
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */
#include <blackfin.h>
.section L1_data;

.section program;

.global _Raise_ILAT_BIT6_ASM;

#define ILAT_BIT6 6
#define ReadData_R1 R1
#define ILAT_BIT6_R3 R3
#define WriteData_R2 R2

_Raise_ILAT_BIT6_ASM:
	/*LINK 20;
	P0.L = LO(ILAT); P0.H = HI(ILAT);
	ReadData_R1 = W[P0](Z);
	ILAT_BIT6_R3 = ILAT_BIT6;
	WriteData_R2 = ReadData_R1 | ILAT_BIT6_R3;
	[P0] = WriteData_R2;

	UNLINK;*/
	nop; nop; nop;
	raise ILAT_BIT6;
_Raise_ILAT_BIT6_ASM.END:
	RTS;