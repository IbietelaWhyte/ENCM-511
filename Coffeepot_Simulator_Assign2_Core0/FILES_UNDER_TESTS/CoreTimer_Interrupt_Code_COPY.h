/*
 * CoreTimer_Interrupt_Code_COPY.h
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */

#ifndef FILES_UNDER_TESTS_CORETIMER_INTERRUPT_CODE_COPY_H_
#define FILES_UNDER_TESTS_CORETIMER_INTERRUPT_CODE_COPY_H_

#include <blackfin.h>

#include "CoreTimer_Code_COPY.h"

extern "C" void Raise_ILAT_BIT6_ASM(void);

#define CT_IMASK_BIT6 0x40
#define CT_ILAT_BIT6 0x0040
void Start_CoreTimer_Interrupts(void);
void Stop_CoreTimer_Interrupts(void);
void CoreTimer_SWI(void);
void Set_EVTTableEntry6(void(*func));



#endif /* FILES_UNDER_TESTS_CORETIMER_INTERRUPT_CODE_COPY_H_ */
