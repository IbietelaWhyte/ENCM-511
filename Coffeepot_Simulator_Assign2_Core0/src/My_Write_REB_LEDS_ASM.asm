#include <blackfin.h>
.section L1_data;

.section program;
.global _My_Write_REB_LEDS_ASM; //   extern "C"  void My_Write_REB_LEDS_ASM (unsigned short int LEDvalue) {


#define LEDvalue_R0 R0
#define Read_Data_R1 R1
#define Mask_Reg_R2 R2
#define Write_Data_R3 R3
#define portPointer_P0 P0
#define MASK_PF12_15 0x0fff

_My_Write_REB_LEDS_ASM:
	LINK 20;
	
	P0.H = hi(REG_PORTF_DATA);      P0.L = lo(REG_PORTF_DATA); 
	Read_Data_R1 = W[portPointer_P0](Z); //unsigned short int portPattern = *pREG_PORTF_DATA; 
	Mask_Reg_R2 = MASK_PF12_15;
	Read_Data_R1 = Read_Data_R1 & Mask_Reg_R2;  //portPattern = portPattern & MASK_PF12_15
	//LEDvalue_R0 = LEDvalue_R0;						// LEDvalue = LEDvalue << 12
	Write_Data_R3 = Read_Data_R1 | LEDvalue_R0;	// unsigned short int Write_Data = Masked_Read_Data | (LEDvalue<<12);
	[portPointer_P0] = Write_Data_R3;					// *pREG_PORTF_DATA = Write_Data
													
	UNLINK;
_My_Write_REB_LEDS_ASM.END:
	RTS;