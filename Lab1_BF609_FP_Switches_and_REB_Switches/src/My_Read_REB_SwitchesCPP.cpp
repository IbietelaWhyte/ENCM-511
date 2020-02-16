#include<sys/platform.h>
#include"adi_initialize.h"
#include "Lab1_BF609_Core0.h"
#include <blackfin.h>

//extern "C" unsigned short int My_Read_REB_SwitchesASM(void);

unsigned short int My_Read_REB_SwitchesCPP(void) {
	unsigned short int portPattern = *pREG_PORTF_DATA;
	portPattern = portPattern & MASK_PF8_11;
	return portPattern;

}
