/*
 * CoreTimer_Code.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */
#include "CoreTimer_Code_COPY.h"

#include <blackfin.h>
#define TEST_SET_COUNTER 4000
#define TEST_SET_PERIOD 960000000
#define TEST_SET_TSCALE 0
#define TEST_SET_CONTROL 7
#define MAX_LOOP_COUNT 4

bool CoreTimer_My_Main(void){

	Init_CoreTimer();
	// Init_REB_Input();
	// Init_REB_Output();

	unsigned short int loopCount = 0;
	unsigned short int countClockTics = 0;

	Start_CoreTimer();

	while((loopCount < MAX_LOOP_COUNT) && (countClockTics < 8)){
		loopCount++;
		if(Done_CoreTimer())
			countClockTics++;
	}

	Stop_CoreTimer();
	printf("Timer code exited safely -- loopCount %d and countClockTics %d\n", loopCount, countClockTics);

	bool returnVal = false;
	if((loopCount < MAX_LOOP_COUNT) && (countClockTics < 8))
		returnVal = true;
	return returnVal;
}

void ShowStubMessage(char *message, bool showMessage){
	if(showMessage)
		printf("%s\n", message);
}


void Start_CoreTimer(){
	ShowStubMessage("Start_CoreTimer()", true);
	*pTCNTL = *pTCNTL | (ENA_BIT | PWRON);
}

void Stop_CoreTimer(){
	ShowStubMessage("Stop_CoreTimer()", true);
	*pTCNTL = *pTCNTL & (~ENA_BIT);
}

bool Done_CoreTimer(){
	ShowStubMessage("Done_CoreTimer()", true);
	if((*pTCNTL & DONE_BIT) == DONE_BIT){
		*pTCNTL = *pTCNTL & (~DONE_BIT);
		return true;
	}
	return false;

}


unsigned long int PlannedCoreTimerRegistervalue(CORETIMER_REG regName){
	ShowStubMessage("PlannedcoreTimerRegisterValue()", true);
	unsigned long int returnValue = 0xffffffff;
	switch(regName){
		case REG_CNTRL: returnValue = TEST_SET_CONTROL; break;
		case REG_COUNTER: returnValue = TEST_SET_COUNTER; break;
		case REG_PERIOD: returnValue = TEST_SET_PERIOD; break;
		case REG_TSCALE: returnValue = TEST_SET_TSCALE; break;
		default: printf("Unknown request in Planned_CoreTimerRegisterValue\n");
	}
	return returnValue;
}

unsigned long int Read_CoreTimerRegisters(CORETIMER_REG regName){
	ShowStubMessage("Read_CoreTimerRegisters()", true);
	unsigned long int returnValue = 0xffffffff;
	switch(regName){
			case REG_CNTRL: returnValue = *pTCNTL; break;
			case REG_COUNTER: returnValue = *pTCOUNT; break;
			case REG_PERIOD: returnValue = *pTPERIOD; break;
			case REG_TSCALE: returnValue = *pTSCALE; break;
			default: printf("Unknown request in Planned_CoreTimerRegisterValue\n");
		}
	return returnValue;
}

void Write_CoreTimerRegister(CORETIMER_REG regName, unsigned long int newVal){
	ShowStubMessage("Write_CoreTimerRegisters()", true);
	switch(regName){
		case REG_CNTRL: *pTCNTL = newVal; break;
		case REG_COUNTER: *pTCOUNT = newVal; break;
		case REG_PERIOD: *pTPERIOD= newVal; break;
		case REG_TSCALE: *pTSCALE= newVal; break;
		default: printf("Unknown request in Planned_CoreTimerRegisterValue\n");
			}
}

void Init_CoreTimer(){
	ShowStubMessage("Init_CoreTimer()", true);
	Write_CoreTimerRegister(REG_CNTRL, TEST_SET_CONTROL);
	Write_CoreTimerRegister(REG_PERIOD, TEST_SET_PERIOD);
	Write_CoreTimerRegister(REG_COUNTER, TEST_SET_COUNTER);
	Write_CoreTimerRegister(REG_TSCALE, TEST_SET_TSCALE);

}
