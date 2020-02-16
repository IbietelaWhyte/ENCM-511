/*
 * FPThread4.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#include "FPThread4.h"
volatile int NextToDisplay = 0;
volatile char ID_FPThread4_Task = 0;

void FPThread4_Task(){
	unsigned char LEDs = Read_GPIO_FrontPanelLEDS();
	if(NextToDisplay == 15){
		NextToDisplay = 5;
		unsigned char nextInPattern = carSPattern[NextToDisplay];
		unsigned char nextToWrite = (LEDs | 0x3C) & (nextInPattern | 0xC3);
		Write_GPIO_FrontPanelLEDS(nextToWrite);
	}
	else{
		unsigned char nextInPattern = carSPattern[NextToDisplay];
		unsigned char nextToWrite = (LEDs | 0x3C) & (nextInPattern | 0xC3);
		Write_GPIO_FrontPanelLEDS(nextToWrite);
		NextToDisplay++;
	}

}
