#include<sys/platform.h>
#include"adi_initialize.h"
#include <blackfin.h>
#include "CoreTimer_Code_COPY.h"

extern "C" unsigned long long int ReadProcessorCyclesASM(void);
unsigned long long int ReadProcessorCyclesCPP(void){
	//printf("In ReadProcessorCyclesCPP");

#if 0
	unsigned long int cyclesValue = *pCYCLES;
#else
	unsigned long int cyclesValue = ReadProcessorCyclesASM();
#endif
	return cyclesValue;
}
