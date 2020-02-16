/*
 * FPThread5.h
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#ifndef FPTHREAD5_H_
#define FPTHREAD5_H_


#include "Lab2_BF609_Core0_uTTCOSg2017_main.h"
#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FPThread1.h"
#include "FPthread4.h"
#include <uTTCOSg2017/uTTCOSg.h>

void FPThread5_Task(void);
bool SwitchIsPressed_FP(int switchNum);


#endif /* FPTHREAD5_H_ */
