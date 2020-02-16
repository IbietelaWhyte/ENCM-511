/*
 * FPThread1.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#include "FPThread1.h"
volatile char ID_FPThread1_Task = 0;
void FPThread1_Task(){
	unsigned char LEDs = Read_GPIO_FrontPanelLEDS();
	if((LEDs & 0x80) == 0x80){
		Write_GPIO_FrontPanelLEDS(LEDs & 0x7F);
	}
	else{
		Write_GPIO_FrontPanelLEDS(LEDs | 0x80);
	}
}


void My_WriteLED(unsigned char neededLEDValue){
	Write_GPIO_FrontPanelLEDS(neededLEDValue);
}
