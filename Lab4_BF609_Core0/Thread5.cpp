/*
 * Thread5.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "Thread5.h"
#include <stdio.h>
extern bool commandStringBeingSent;
extern bool commandStringToSend;
extern bool commandStringIsInstruction;
extern char SPI_MessageBuffer[256];
volatile char ID_Thread5 = 0;
char Message_511[] ="511";

void MSG1(void){
	unsigned short int LCDMessage[200];
	bool isData = true;
	unsigned short int num = ConvertStringToLCDMessage(Message_511, LCDMessage, isData);
	Send_Message(LCDMessage, num);
}
