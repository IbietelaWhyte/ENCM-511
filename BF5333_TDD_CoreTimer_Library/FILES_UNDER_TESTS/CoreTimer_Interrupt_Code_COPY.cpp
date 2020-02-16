/*
 * CoreTimer_Interrupt_Code_COPY.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */
#include "CoreTimer_Interrupt_Code_COPY.h"

void Start_CoreTimer_Interrupts(){
	*pIMASK = *pIMASK | CT_IMASK_BIT6;

}
void Stop_CoreTimer_Interrupts(){
	*pIMASK = *pIMASK & (~CT_IMASK_BIT6);

}
void CoreTimer_SWI(){
	Raise_ILAT_BIT6_ASM();

}
