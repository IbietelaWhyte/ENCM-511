/*
 * Thread2.cpp
 *
 *  Created on: Dec 2, 2019
 *      Author: ibietela.whyte1
 */

#include "Thread2.h"
#include <stdio.h>

volatile char ID_Thread2 = 0;
void MOCK_SPI_controller(void){
	printf("MOCK_SPI_controller stud\n");
}
