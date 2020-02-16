/*
 * CoreTimer_Code.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */
#include "CrossTimer_Code.h"
#define TMPWR 0x1
#define TMREN 0x1


bool CoreTimer_My_Main(void){

	Init_CoreTimer();
	// Init_REB_Input();
	// Init_REB_Output();

	unsigned short int loopCount = 4;
	unsigned short int countClockTics = 0;

	Start_CoreTimer();

	while((loopCount < 10000) && (countClockTics < 8)){
		loopCount++;
		if(Done_CoreTimer())
			countClockTics++;
	}

	Stop_CoreTimer();
	printf("Timer code exited safely -- loopCount %d and countClockTics %d\n", loopCount, countClockTics);

	bool returnVal = false;
	if((loopCount < 10000) && (countClockTics < 8))
		returnVal = true;
	return returnVal;
}

void Init_CoreTimer(){
	printf("Function stub for Init_Coretimer");


}

void Start_CoreTimer(){
	printf("Function stub for Start_Coretimer");


}

void Stop_CoreTimer(){
	printf("Function stub for Stop_Coretimer");

}

void Done_CoreTimer(){
	printf("Function stub for Done_Coretimer");

}
