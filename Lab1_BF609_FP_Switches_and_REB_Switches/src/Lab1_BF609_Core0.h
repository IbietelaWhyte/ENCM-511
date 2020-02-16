/*****************************************************************************
 * Lab1_BF609_Core0.h
 *****************************************************************************/

#ifndef __LAB1_BF609_CORE0_H__
#define __LAB1_BF609_CORE0_H__

/* Add your custom header content here */
//Include Statements Here
#include<stdio.h>
#include "../../ENCM511_SpecificFiles/ENCM511_include/FrontPanel_LED_Switches.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Input_Library.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Output_Library.h"

/* Add your custom header content here */
//Adding Prototypes here
void Initialize_everything();
void My_Init_LEDInterface(void);
void My_Init_SwitchInterface(void);
unsigned char My_READLED(void);
void My_WriteLED(unsigned char);
unsigned char My_ReadSwitches(void);
void PrintBinaryValue(unsigned char);
char* DecimalToBinary(unsigned char, unsigned char);
int Check_Configs_ReadWrite(void);
int Check_Configs_LEDTest(unsigned char);
void WaitTillSwitch1PressedAndReleased(void);
void WaitTillSwitch2PressedAndReleased(void);
void WaitTillSwitch3PressedAndReleased(void);
bool SwitchIsPressed(int);
unsigned long long int ReadProcessorCyclesCPP(void);
void QuickTest_FrontPanelSwitchesLEDS(void);
void Wait(int);
void FirstTest_REBSwitches(void);
void My_Init_REB_SwitchInterface(void);
void My_Init_REB_LEDInterface(void);
unsigned short int My_ReadSwitches_REB(void);
unsigned short int My_Read_REB_SwitchesCPP(void);
void My_Write_REB_LEDS_CPP(unsigned short int);
extern "C" void My_Write_REB_LEDS_ASM(unsigned short int);
extern "C" unsigned short int My_Read_REB_SwitchesASM(void);
void Lab_0();

//Static Variable and Constants Here
//#define GARBAGE_VALUE static_cast<unsigned char>(-1)
#define NUM_DISPLAY_BITS 8
#define NUM_READ_WRITE_TESTS 0x11
#define DEFAULT_LED_VALUE 0x42
#define DEFULAT_SWITCH_VALUE 3
#define SW1BIT 0x1
#define MASK_PF8_11 0x0F00
#define MASK_PF12_15 0x0FFF
#define MASK_KEEP_LOWER_FIVE_BITS 0x1F
static bool My_InitSwitchInterface_Done = false;
static bool My_InitLEDInterface_Done = false;
//static unsigned char LastLEDValueWritten = GARBAGE_VALUE;
static int NextToDisplay = 0;
static unsigned char vertical_eightBit_initials[15] = {
		0xFF, 0x81, 0x99, 0x89, 0xF9, 0x00, 0xC0, 0x00, 0xFF, 0x81, 0x81, 0x81, 0xFF, 0x00, 0xC0
};
static unsigned char vertical_eightBit_countMax = 15;
static unsigned char horizontal_thirtyBit_initials[9][30] = {
		{1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0},
		{1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1}
};
//0x3FC0FF0, 0x3FC0C30, 0xC00333, 0xC00333, 0x67C0C3, 0x66CCC3, 0c30C0C33, 0c1FE0C33, 0x3FCCFF3
static unsigned char horizontal_thirtyBit_countMax = 9;

void Start_Lab0(void);


#endif /* __LAB1_BF609_CORE0_H__ */
