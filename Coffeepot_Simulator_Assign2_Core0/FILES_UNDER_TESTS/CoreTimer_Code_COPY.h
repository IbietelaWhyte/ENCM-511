/*
 * CoreTimer_Code.h
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */

#ifndef CROSSTIMER_CODE_H_
#define CROSSTIMER_CODE_H_

#include<stdio.h>
void Init_CoreTimer();
void Start_CoreTimer();
void Stop_CoreTimer();
bool Done_CoreTimer();

bool CoreTimer_My_main(void);

enum CORETIMER_REG{DONT_KNOW, REG_COUNTER, REG_PERIOD, REG_TSCALE, REG_CNTRL};
unsigned long int PlannedCoreTimerRegistervalue(CORETIMER_REG regName);
unsigned long int Read_CoreTimerRegisters(CORETIMER_REG regName);
void Write_CoreTimerRegister(CORETIMER_REG regName, unsigned long int newVal);
unsigned long long int ReadProcessorCyclesCPP(void);

#define DONE_BIT	0x8
#define AUTORELOAD	0x4
#define ENA_BIT		0x2
#define PWRON		0x1

#endif /* CROSSTIMER_CODE_H_ */
