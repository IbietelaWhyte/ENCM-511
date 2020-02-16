/*
 * Subroutines_and_ISR.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: ibietela.whyte1
 */
#include "../FILES_UNDER_TESTS/CoreTimer_Code_COPY.h"
#include "../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.h"

void Subroutine_Clear_CT_Done_Flag(void) {
	*pTCNTL = *pTCNTL & (~DONE_BIT);

}
volatile int messageCount = 0;
#pragma interrupt;
void ISR_Clear_CT_Done_Flag(void) {
	*pTCNTL = *pTCNTL & (~DONE_BIT);
	messageCount++;
}
