#include<sys/platform.h>
#include"adi_initialize.h"
#include "Lab1_BF609_Core0.h"
#include <blackfin.h>

//extern "C" void My_Write_REB_LEDS_ASM(unsigned short int LEDvalue);

void My_Write_REB_LEDS_CPP(unsigned short int LEDvalue) {
	unsigned short int Read_Data = *pREG_PORTF_DATA;
	unsigned short int Masked_Read_Data = Read_Data & MASK_PF12_15;
	unsigned short int Write_Data = Masked_Read_Data | (LEDvalue<<12);
	*pREG_PORTF_DATA = Write_Data;

}
