/*
 * Thread4.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "Thread4.h"
#include <stdio.h>
extern bool commandStringBeingSent;
extern bool commandStringToSend;
extern bool commandStringIsInstruction;
extern char SPI_MessageBuffer[256];
volatile char ID_Thread4 = 0;
char Message_ENCM[] ="ENCM";

void MSG0(void){
	unsigned short int LCDMessage[200];
	bool isData = true;
	unsigned short int num = ConvertStringToLCDMessage(Message_ENCM, LCDMessage, isData);
	Send_Message(LCDMessage, num);
}
