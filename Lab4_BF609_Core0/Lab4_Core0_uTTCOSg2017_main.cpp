/*************************************************************************************
* AUTO-GENERATED COMMENT - DO NOT MODIFY 
* Author: gregory.ord 
* Date: Tue 2019/11/26 at 02:59:32 PM 
* File Type: TTCOS Main File
*************************************************************************************/

// This is an example TT_COS main( ) function with threads.
// Use this as a template for your own TT_COS main( ) for the various Threads

#include "Lab4_Core0_uTTCOSg2017_main.h"

#include "adi_initialize.h"
#include "Thread1.h"
#include "Thread2.h"
#include "Thread3.h"
#include "Thread4.h"
#include "Thread5.h"
#include "Thread6.h"
// TODO -- Update this code to use CORETIMER interrupts to allow slow uTTCOS in BF533 simulator
// TODO Just these values so that 100 TICS tacks about 1 second
#if defined(__ADSPBF609__)
#define  TIC_CONTROL_VALUE ((unsigned long int) 4800000)		// BF609 EMULATOR
#define TICS_PER_SECOND 	100
#define ONE_SECOND 			TICS_PER_SECOND		// If TICS_CONTROL_VALUE Adjusted correctly
#define RUN_ONCE			0
#define NO_DELAY			0
#else
#error "Unknown ADSP or ARM processor"
#endif
extern volatile char ID_Thread1;
extern volatile char ID_Thread2;
extern volatile char ID_Thread3;
extern volatile char ID_Thread4;
extern volatile char ID_Thread5;
extern volatile char ID_Thread6;
void main(void) {
	adi_initComponents();
	adi_core_enable(ADI_CORE_0);
	// Make maxNumberThreads at least 5 larger than the 
	//            number of threads you plan to add
	int numBackgroundThreads = 5;
	int numberYourThreads = 7;
	int maxNumberThreads = numBackgroundThreads + numberYourThreads;  
	Init_GPIO_FrontPanelLEDS();
	Init_GPIO_FrontPanelSwitches();
	Write_GPIO_FrontPanelLEDS(0x0);
	Init_GPIO_REB_Input();
	Init_GPIO_REB_Output();
	InitGPTimer(0x3);
	My_Write_REB_LEDS_CPP(0x0);
	Custom_uTTCOS_OS_Init(TIC_CONTROL_VALUE);  // Need to update to handle coretimer interrupts

	//ID_Thread2 = uTTCOSg_AddThread(MOCK_SPI_controller, NO_DELAY, (1/20)* ONE_SECOND);
	ID_Thread3 = uTTCOSg_AddThread(Init_SPI, NO_DELAY, RUN_ONCE);
	ID_Thread1 = uTTCOSg_AddThread(Clear_Screen, ONE_SECOND, 2*ONE_SECOND);  //THREAD TO CLEAR
	ID_Thread6 = uTTCOSg_AddThread(MSG2, 2*ONE_SECOND, 6* ONE_SECOND);		//thread to print temperature
	ID_Thread4 = uTTCOSg_AddThread(MSG0, 4*ONE_SECOND, 6* ONE_SECOND);		// thread to print 511
	ID_Thread5 = uTTCOSg_AddThread(MSG1, 6*ONE_SECOND, 6 * ONE_SECOND);  //THREAD TO PRINT 511
				// Execution time of TT_COS_Dispatch( ) and TT_COS_Update( ) improved by specifiying maxNumberTasks

	uTTCOSg_Start_CoreTimer_Scheduler(maxNumberThreads);   //  Start the scheduler timer
	while (1) {

		// Wait, in low power mode, for an interrupt
		// The interrupt service routine calls TTCOS_Update( )
		// uTTCOSg_GoToSleep( );                // Need to update to handle coretimer interrupts
		Idle_WaitForInterrupts_ASM( );

		// Run all the threads in the system according
		// to whether their delays have expired
		uTTCOSg_DispatchThreads( );
	}
}


void Send_Message(unsigned short int array[], unsigned short int array_len){
	for(int i = 0; i<array_len; i++){
		while(REB_SPI_Ready() == false);
		REB_Write_SPI(array[i]);
		WaitABit(ONE_SECOND);
	}
}

void WaitABit(unsigned long int timeValue){
	while(timeValue) timeValue--;
}

unsigned short int ConvertStringToLCDMessage(char message[], unsigned short int LCDMessage[], bool isData){
	int i = 0, j= 0, ascii_num = 0;
	char c = message[i];
	while(c != '\0'){
		ascii_num = (int)c;
		if(isData){
			LCDMessage[j] = E_BIT_HIGH | IS_DATA | ascii_num;
			LCDMessage[j+1] = E_BIT_LOW | IS_DATA | ascii_num;
			LCDMessage[j+2] = E_BIT_HIGH | IS_DATA | ascii_num;
		}
		else{
			LCDMessage[j] = E_BIT_HIGH | IS_INSTRUCTION | ascii_num;
			LCDMessage[j+1] = E_BIT_LOW | IS_INSTRUCTION | ascii_num;
			LCDMessage[j+2] = E_BIT_HIGH | IS_INSTRUCTION | ascii_num;
		}
		i++;
		j+=3;
		c = message[i];
	}
	return i*3;
}


void InitGPTimer(GP_TIMER whichGPTIMER){
	Init_GP_Timer(whichGPTIMER);
	//while(!IsReady_GP_Timer(0x3));
	Start_GP_Timer(whichGPTIMER);
}

void float2str(float temp){
	unsigned short int LCDMessage[200];
	char temp_buffer[10];
	snprintf(temp_buffer, 10, "%f\n", temp);
	bool isData = true;
	unsigned short int num = ConvertStringToLCDMessage(temp_buffer, LCDMessage, isData);
	Send_Message(LCDMessage, num);
}

