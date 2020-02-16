/*
 * FPThread2.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#include "FPThread2.h"

volatile char ID_FPThread2_Task = 0;
volatile int prev = 0;
void FPThread2_Task(){
	unsigned char LEDs = Read_GPIO_FrontPanelLEDS();
	if(prev == 0){
		if((LEDs & 0x40) == 0x40){}
		else{
			Write_GPIO_FrontPanelLEDS(LEDs | 0x40);
		}
		prev = 1;
	}
	else if(prev == 1){
		if((LEDs & 0x40) == 0x40){}
		else{
			Write_GPIO_FrontPanelLEDS(LEDs | 0x40);
		}
		prev = 2;
	}
	else if(prev == 2){
		if((LEDs & 0x40) == 0x40){
			Write_GPIO_FrontPanelLEDS(LEDs & 0xBF);
		}
		else{}
		prev = 0;
	}
}

