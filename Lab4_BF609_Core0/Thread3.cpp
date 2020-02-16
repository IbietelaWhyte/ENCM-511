/*
 * Thread3.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "Thread3.h"
#include <stdio.h>

volatile char ID_Thread3 = 0;
void Init_SPI(void){
	Init_REB_SPI();
	Start_REB_SPI();
	unsigned short int LCDMessage[200];
	char InitScreenMessage[]= {SET_DL, SET_DL, SET_DL, SET_DL_NUMLINES_FONT, SET_DISPLAYON_CURSOR_BLINK, CLEAR_SCREEN, CLEAR_SCREEN, '\0'};
	bool isData = false;
	unsigned short int numLCD = ConvertStringToLCDMessage(InitScreenMessage, LCDMessage, isData);
	Send_Message(LCDMessage, numLCD);
}

