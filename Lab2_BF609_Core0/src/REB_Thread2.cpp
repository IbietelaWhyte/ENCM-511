/*
 * REB_Thread2.cpp
 *
 *  Created on: Nov 14, 2019
 *      Author: ibietela.whyte1
 */
#include "REB_Thread2.h"
#include "FPThread2.h"
#include "FPThread5.h"
volatile unsigned short int count_2 = 0;
volatile char ID_REBThread2_Task = 0;
extern volatile unsigned short int array[];

void REBThread2_Task(){
	if(SwitchIsPressed_FP(0x5)){
		unsigned short int switches = Read_GPIO_REB_Input();
		array[count_2] = switches;
		count_2++;
		if(count_2 == 100)
			count_2 = 0;
	}
}
