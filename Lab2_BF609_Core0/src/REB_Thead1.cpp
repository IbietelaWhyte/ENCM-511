/*
 * REB_Thead1.cpp
 *
 *  Created on: Nov 14, 2019
 *      Author: ibietela.whyte1
 */
#include "REB_Thread1.h"
#include "FPThread1.h"
#include "FPThread5.h"
volatile unsigned short int count = 0;
volatile char ID_REBThread1_Task = 0;
void REBThread1_Task(){
	if(SwitchIsPressed_FP(0x2)){
		My_Write_REB_LEDS_CPP(count);
		count++;
		if(count == 16)
			count = 0;
	}
}
