/*
 * FPThread4.h
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#ifndef FPTHREAD4_H_
#define FPTHREAD4_H_
static unsigned char carSPattern[15] = {
		0x8, 0x8, 0x8, 0x8, 0x8, 0x4, 0x8, 0x8, 0x8, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8
};

#include "Lab2_BF609_Core0_uTTCOSg2017_main.h"
#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FPThread4.h"

#include <uTTCOSg2017/uTTCOSg.h>


void FPThread4_Task(void);


#endif /* FPTHREAD4_H_ */
