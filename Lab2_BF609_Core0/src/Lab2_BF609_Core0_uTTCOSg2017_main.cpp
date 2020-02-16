/*************************************************************************************
* AUTO-GENERATED COMMENT - DO NOT MODIFY 
* Author: gregory.ord 
* Date: Tue 2019/10/29 at 02:53:50 PM 
* File Type: TTCOS Main File
*************************************************************************************/

// This is an example TT_COS main( ) function with threads.
// Use this as a template for your own TT_COS main( ) for the various Threads

#include "Lab2_BF609_Core0_uTTCOSg2017_main.h"

#warning "Have added just enough prototypes in faultyLED1_Thread.h to demonstrate system working"
#include "faultyLED1_Thread.h"
#include "FPThread1.h"
#include "FPThread2.h"
#include "FPThread3.h"
#include "FPThread4.h"
#include "FPThread5.h"
#include "REB_Thread1.h"
#include "REB_Thread2.h"
#include "REB_Thread3.h"

#include <stdio.h>

// TODO -- Need to update this code to use CORETIMER interrupts
// TODO Just these values so that 100 TICS tacks about 1 second

#warning "printf statements over JTAG ionterface may be slowing down system a lot"
#if defined(__ADSPBF533__)
#define TIC_CONTROL_VALUE ((unsigned long int) 0x500)			// BF533 SIMULATOR
#define TICS_PER_SECOND 100
// #define  TIC_CONTROL_VALUE  ((unsigned long int) 4800000)	// BF533 EMULATOR
#elif defined(__ADSPBF609__)
#define  TIC_CONTROL_VALUE ((unsigned long int) 4800000)		// BF609 EMULATOR
#define TICS_PER_SECOND 100
#else
#error "Unknown ADSP or ARM processor"
#endif

void Custom_uTTCOS_OS_Init(unsigned long int);
extern "C" void Idle_WaitForInterrupts_ASM(void);
void uTTCOSg_Start_CoreTimer_Scheduler(unsigned int maxNumberThreads);
extern volatile char ID_FPThread1_Task;
extern volatile char ID_FPThread2_Task;
extern volatile char ID_FPThread3_Task;
extern volatile char ID_FPThread4_Task;
extern volatile char ID_FPThread5_Task;
extern volatile char ID_REBThread1_Task;
extern volatile char ID_REBThread2_Task;
extern volatile char ID_REBThread3_Task;
volatile float FPThread4_speed = 1;
volatile int FPThread5_RunNum = 0;
volatile bool FPThread4_paused = false;
volatile unsigned short int array[100];

#define ONE_SECOND TICS_PER_SECOND		// If TICS_CONTROL_VALUE Adjusted correctly
void main(void) {
	// Make maxNumberThreads at least 5 larger than the 
	//            number of threads you plan to add

	int numBackgroundThreads = 5;
	int numberYourThreads = 4;
	int maxNumberThreads = numBackgroundThreads + numberYourThreads;  

	Init_GPIO_FrontPanelLEDS();
	Init_GPIO_FrontPanelSwitches();
	Write_GPIO_FrontPanelLEDS(0x0);
	Init_GPIO_REB_Input();
	Init_GPIO_REB_Output();
	My_Write_REB_LEDS_CPP(0x0);

	Custom_uTTCOS_OS_Init(TIC_CONTROL_VALUE);  // Need to update to handle coretimer interrupts

#warning "Have added just enough code to demonstrate system workin
// TODO -- Remove this code and TODO "Have added just enough code to demonstrate system working"
	ID_FPThread1_Task = uTTCOSg_AddThread(FPThread1_Task, NO_DELAY, 0.25 * ONE_SECOND);
	ID_FPThread2_Task = uTTCOSg_AddThread(FPThread2_Task, NO_DELAY, 1.2 * 0.33 * ONE_SECOND);
	ID_FPThread3_Task = uTTCOSg_AddThread(FPThread3_Task, NO_DELAY, 1 * ONE_SECOND);
	ID_FPThread4_Task = uTTCOSg_AddThread(FPThread4_Task, NO_DELAY, FPThread4_speed * ONE_SECOND);
	ID_FPThread5_Task = uTTCOSg_AddThread(FPThread5_Task, NO_DELAY, 1 * ONE_SECOND);
	ID_REBThread1_Task = uTTCOSg_AddThread(REBThread1_Task, NO_DELAY, 0.25*ONE_SECOND);
	ID_REBThread2_Task = uTTCOSg_AddThread(REBThread2_Task, NO_DELAY, 0.5*ONE_SECOND);
	ID_REBThread3_Task = uTTCOSg_AddThread(REBThread3_Task, NO_DELAY, 1.3*ONE_SECOND);

#warning "You will need to activate the next line to start the Clock


	uTTCOSg_Start_CoreTimer_Scheduler(maxNumberThreads);   //  Start the scheduler timer
				// Execution time of TT_COS_Dispatch( ) and TT_COS_Update( ) improved by specifiying maxNumberTasks
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

#warning "Once demonstrated working -- Remember to fix all TODO's, and Remove me tasks"
#warning  "then delete warning and TODO lines	"

