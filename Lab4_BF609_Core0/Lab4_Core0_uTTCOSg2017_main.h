/*************************************************************************************
* AUTO-GENERATED COMMENT - DO NOT MODIFY 
* Author: gregory.ord
* Date: Tue 2019/11/26 at 02:59:32 PM
* File Type: uTTCOS Task Header File
*************************************************************************************/

#ifndef LAB4_CORE0_UTTCOSG2017_H
#define LAB4_CORE0_UTTCOSG2017_H

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>
#include <stdio.h>
#include "../../ENCM511_SpecificFiles/ENCM511_include/FrontPanel_LED_Switches.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Input_Library.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Output_Library.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_SPI_Library.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/GP_Timer_Library.h"

#include <cstring>
// extern "C" void BlackfinBF533_uTTCOSg_Audio_Rx_Tx_Task(void); 
extern "C" void SHARC21469_uTTCOSg_Audio_Rx_Tx_Task(void);
extern "C" void ADSP_SC589_uTTCOSg_Audio_Rx_Tx_Task(void);
extern void My_Write_REB_LEDS_CPP(unsigned short int LEDvalue);
float GetTemperature_TMP03(void);
void Send_Message(unsigned short int array[], unsigned short int array_len);
void WaitABit(unsigned long int timeValue);
unsigned short int ConvertStringToLCDMessage(char message[], unsigned short int LCDMessage[], bool isData);
void float2str(float temp);
void InitGPTimer(GP_TIMER whichGPTIMER);
#define SET_DL	0x30
#define SET_DL_NUMLINES_FONT	0x3C
#define SET_DISPLAYON_CURSOR_BLINK	0x0F
#define CLEAR_SCREEN	0x01
#define E_BIT_HIGH		0X0100
#define E_BIT_LOW		0X0
#define IS_INSTRUCTION		0X0
#define IS_DATA		0X0400



void Custom_uTTCOS_OS_Init(unsigned long int);
extern "C" void Idle_WaitForInterrupts_ASM(void);
void uTTCOSg_Start_CoreTimer_Scheduler(unsigned int maxNumberThreads);

#endif
