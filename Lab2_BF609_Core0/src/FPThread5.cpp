/*
 * FPThread5.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: gregory.ord
 */

#include "FPThread5.h"
volatile char ID_FPThread5_Task = 0;
extern volatile int FPThread5_RunNum;
extern volatile float FPThread4_speed;
extern volatile bool FPThread4_paused;
extern volatile char ID_FPThread4_Task;

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

#define ONE_SECOND TICS_PER_SECOND

void FPThread5_Task(){
	if(FPThread5_RunNum >= 3){
		FPThread5_RunNum = 0;
	}
	else{
		FPThread5_RunNum++;
	}
	if(SwitchIsPressed_FP(1)){
	if(FPThread5_RunNum == 0){
		//Invalid so delete thread.

			if(!FPThread4_paused){
				uTTCOSg_DeleteThread(ID_FPThread4_Task);
				FPThread4_paused = true;
			}

	}
	else if(FPThread5_RunNum == 1){
			//Resume from pause. Reset thread speed to previous value from before pause.
			if(FPThread4_paused == true){
				ID_FPThread4_Task = uTTCOSg_AddThread(FPThread4_Task, NO_DELAY, FPThread4_speed * ONE_SECOND);
				FPThread4_paused = false;
			}
			uTTCOSg_DeleteThread(ID_FPThread4_Task);
			FPThread4_speed = FPThread4_speed * 3;
			ID_FPThread4_Task = uTTCOSg_AddThread(FPThread4_Task, NO_DELAY, FPThread4_speed * ONE_SECOND);

	}
	else if(FPThread5_RunNum == 2){
			//Invalid so delete thread.
			if(!FPThread4_paused){
				uTTCOSg_DeleteThread(ID_FPThread4_Task);
				FPThread4_paused = true;
			}

	}
	else if(FPThread5_RunNum == 3){
			//Resume from pause. Reset thread speed to previous value from before pause.
			if(FPThread4_paused == true){
				ID_FPThread4_Task = uTTCOSg_AddThread(FPThread4_Task, NO_DELAY, FPThread4_speed * ONE_SECOND);
				FPThread4_paused = false;
				FPThread1_Task();
			}
			uTTCOSg_DeleteThread(ID_FPThread4_Task);
			FPThread4_speed = FPThread4_speed / 3;
			ID_FPThread4_Task = uTTCOSg_AddThread(FPThread4_Task, NO_DELAY, FPThread4_speed * ONE_SECOND);

	}
	}


}

bool SwitchIsPressed_FP(int switchNum){
	unsigned char toCheck = 0x1 << (switchNum - 1);
	unsigned char switches = ~Read_GPIO_FrontPanelSwitches();
	return ((switches & toCheck) == toCheck);
}
