/*
 * Thread7.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "LAB3_temp2.h"
#include <stdio.h>
extern bool commandStringBeingSent;
extern bool commandStringToSend;
extern bool commandStringIsInstruction;
extern char SPI_MessageBuffer[256];
volatile char ID_Thread7 = 0;
void LAB3_temp(void){
	unsigned char LEDs = Read_GPIO_FrontPanelLEDS();
		if((LEDs & 0x01) == 0x01){
			Write_GPIO_FrontPanelLEDS(LEDs & ~0x01);
		}
		else{
			Write_GPIO_FrontPanelLEDS(LEDs | 0x01);
		}


		if (commandStringBeingSent == true) return;
		if (commandStringToSend == true) return;
		commandStringToSend = 1; // uTTCOSg guarentees NO DATA RACE
		commandStringIsInstruction = false;
		float currentTemp = GetTemperature_TMP03();
		sprintf(SPI_MessageBuffer, "Current temperature is %5.2f", currentTemp);
}
