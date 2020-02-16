#include<sys/platform.h>
#include"adi_initialize.h"

#include <blackfin.h>
#define MASK_PF12_15 0x0FFF

void My_Write_REB_LEDS_CPP(unsigned short int LEDvalue) {
	unsigned short int Read_Data = *pREG_PORTF_DATA;
	unsigned short int Masked_Read_Data = Read_Data & MASK_PF12_15;
	unsigned short int Write_Data = Masked_Read_Data | (LEDvalue<<12);
	*pREG_PORTF_DATA = Write_Data;
	//asm("ssync;");
}
