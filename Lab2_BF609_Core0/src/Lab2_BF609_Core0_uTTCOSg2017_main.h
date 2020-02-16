/*************************************************************************************
* AUTO-GENERATED COMMENT - DO NOT MODIFY 
* Author: gregory.ord
* Date: Tue 2019/10/29 at 02:53:50 PM
* File Type: uTTCOS Task Header File
*************************************************************************************/

#ifndef LAB2_BF609_CORE0_UTTCOSG2017_H
#define LAB2_BF609_CORE0_UTTCOSG2017_H


#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>
#include<stdio.h>
#include "../../ENCM511_SpecificFiles/ENCM511_include/FrontPanel_LED_Switches.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Input_Library.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Output_Library.h"
// extern "C" void BlackfinBF533_uTTCOSg_Audio_Rx_Tx_Task(void); 
extern "C" void SHARC21469_uTTCOSg_Audio_Rx_Tx_Task(void);
extern "C" void ADSP_SC589_uTTCOSg_Audio_Rx_Tx_Task(void);
extern "C" void My_Write_REB_LEDS_CPP(unsigned short int LEDvalue);
#endif
