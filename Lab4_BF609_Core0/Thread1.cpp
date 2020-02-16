/*
 * Thread1.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "Thread1.h"
#include <stdio.h>

volatile char ID_Thread1 = 0;
void Clear_Screen(void){
	unsigned short int clear [] = {0x00f, 0x10f, 0x00f, 0x001, 0x101, 0x001};
	Send_Message(clear, 6);
}
