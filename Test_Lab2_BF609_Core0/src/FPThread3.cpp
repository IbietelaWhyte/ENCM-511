/*
 * FPThread3.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#include "FPThread3.h"

volatile char ID_FPThread3_Task = 0;
void FPThread3_Task(){
	unsigned char LEDs = Read_GPIO_FrontPanelLEDS();
	if((LEDs & 0x3) == 0x0){
		Write_GPIO_FrontPanelLEDS(LEDs | 0x01);
	}
	else if((LEDs & 0x3) == 0x1){
		Write_GPIO_FrontPanelLEDS((LEDs | 0x02) & 0xFE);
	}
	else if((LEDs & 0x3) == 0x2){
		Write_GPIO_FrontPanelLEDS(LEDs | 0x03);
	}
	else if((LEDs & 0x3) == 0x3){
		Write_GPIO_FrontPanelLEDS(LEDs & 0xFC);
	}
}
