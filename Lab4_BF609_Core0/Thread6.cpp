/*
 * Thread6.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "Thread6.h"

#include <stdio.h>
volatile float temp;
volatile char ID_Thread6 = 0;
void MSG2(void){
	//while(!IsReady_GP_Timer(0x3));
	unsigned long int width = ReadWidth_GP_Timer(0x3);
	unsigned long int period = ReadPeriod_GP_Timer(0x3);
	unsigned long int t2 = width;
	unsigned long int t1 = period - width;
	temp = 235 - (400.0*t1)/t2;
	//printf("temp is %lf\n", temp);
	float2str(temp);
}
