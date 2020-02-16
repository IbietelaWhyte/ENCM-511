#include <blackfin.h>
.section L1_data;

.section program;
.global _My_Read_REB_SwitchesASM; //   extern "C"  unsigned short int My_Read_REB_Switches_ASM (void) {


#define portPattern_R0 R0
#define Masked_portPattern_R1 R1
#define Mask_Reg_R2 R2
#define portPointer_P0 P0
#define MASK_PF8_11 0x0F00

_My_Read_REB_SwitchesASM:
	LINK 20;
	
	P0.H = hi(REG_PORTF_DATA);      P0.L = lo(REG_PORTF_DATA);
	portPattern_R0 = W[portPointer_P0](Z); //unsigned short int portPattern = *pFIO_FLAG_D;
	Mask_Reg_R2 = MASK_PF8_11;
	Masked_portPattern_R1 = portPattern_R0 & Mask_Reg_R2;  //portPattern = portPattern & MASK_PF8_11
	portPattern_R0 = Masked_portPattern_R1;											// return portPattern
	UNLINK;
_My_Read_REB_SwitchesASM.END:
	RTS;