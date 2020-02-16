/*************************************************************************************
*   AUTOMATICALLY GENERATED COMMENT -- DO NOT MODIFY
* Author: ibietela.whyte1
* Date: Thu 2019/11/21 at 04:06:27 PM
* File Type: EUNIT Test File
*************************************************************************************/

#define EMBEDDEDUNIT_LITE
#include <EmbeddedUnit2017/EmbeddedUnit2017.h>
//#include "CoreTimerTests_cpp.h"
#include "CoreTimerTests.h"
#include "../FILES_UNDER_TESTS/CoreTimer_Code_COPY.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/CoreTimer_Library.h"

TEST_CONTROL(CoreTimerTests_cpp);

#if 1
void UpdateEunitGui(void);
TEST(CoreTimerTests_cpp_GUIUpdate) {
	UpdateEunitGui();  // Conditionally compile this line (use #if 0) to stop an GUI update based on last completed test
}
#endif

#if 1
TEST(with_CompletedCoreTimer){
	Init_CoreTimer(1000, 1000);
		unsigned short int notDone = 10;
		unsigned long int cycles_array[10] ={0};
		unsigned long int cycles_array2[10] ={0};
		unsigned long int difference[10]= {0};
		unsigned short int i = 0;
		Control_CoreTimer(7);
		while(notDone){
			cycles_array[i] = ReadProcessorCyclesCPP();
			while(!Completed_CoreTimer()){

			}
			if(Completed_CoreTimer())
				Control_CoreTimer(7);
			cycles_array2[i] = ReadProcessorCyclesCPP();
			difference[i]= cycles_array2[i] - cycles_array[i];
			notDone--;
			i++;

		}
		for(int i = 0; i<10; i++)
			CHECK_CLOSE(1000, difference[i], 300);
}

#endif
#if 0
TEST(with_TimedWaitOnCoreTimer){
	Init_CoreTimer(66000, 66000);
	unsigned short int notDone = 10;
	bool firstTimeinLoop = true;
	unsigned long int cycles_array[10] ={0};
	unsigned long int cycles_array2[10] ={0};
	unsigned long int difference[10]= {0};
	unsigned short int i = 0;
	Control_CoreTimer(7);
	while(notDone){
		cycles_array[i] = ReadProcessorCyclesCPP();
		TimedWaitOnCoreTimer();
		cycles_array2[i] = ReadProcessorCyclesCPP();
		difference[i]= cycles_array2[i] - cycles_array[i];
		notDone--;
		i++;
	}
	for(int i = 0; i<10; i++)
		CHECK_CLOSE(66000, difference[i], 1000);
}
#endif
#if 0
TEST(Start_Stop_Core_Timer)
{	//Check initial values of regs
	Write_CoreTimerRegister(REG_COUNTER, 0);
	unsigned long int regCountVal1 = Read_CoreTimerRegisters(REG_COUNTER);
	CHECK(regCountVal1 == 0);
	Write_CoreTimerRegister(REG_PERIOD, 0);
	unsigned long int regPeriodVal1 = Read_CoreTimerRegisters(REG_PERIOD);
	CHECK(regPeriodVal1 == 0);
	Write_CoreTimerRegister(REG_TSCALE, 0);
	unsigned long int regTscaleVal1 = Read_CoreTimerRegisters(REG_TSCALE);
	CHECK(regTscaleVal1 == 0);
	Write_CoreTimerRegister(REG_CNTRL, 0);
	unsigned long int regControlVal1 = Read_CoreTimerRegisters(REG_CNTRL);
	CHECK(regControlVal1 == 0);

	Init_CoreTimer();
	//CHECK FINAL VALUES OF REGS
	unsigned long int regCountVal2 = Read_CoreTimerRegisters(REG_COUNTER);
	CHECK_EQUAL(regCountVal2, PlannedCoreTimerRegistervalue(REG_COUNTER));
	unsigned long int regPeriodVal2 = Read_CoreTimerRegisters(REG_PERIOD);
	CHECK(regPeriodVal2 == PlannedCoreTimerRegistervalue(REG_PERIOD));
	unsigned long int regTscaleVal2 = Read_CoreTimerRegisters(REG_TSCALE);
	CHECK(regTscaleVal2 == PlannedCoreTimerRegistervalue(REG_TSCALE));
	unsigned long int regControlVal2 = Read_CoreTimerRegisters(REG_CNTRL);
	CHECK_EQUAL(regControlVal2, PlannedCoreTimerRegistervalue(REG_CNTRL));

	Init_CoreTimer();
	unsigned long int firstCoreTimerValue = Read_CoreTimerRegisters(REG_COUNTER);

	Start_CoreTimer();
	unsigned long int secondCoreTimerValue = Read_CoreTimerRegisters(REG_COUNTER);
	CHECK(firstCoreTimerValue > secondCoreTimerValue);

	unsigned long int thirdCoreTimerValue = Read_CoreTimerRegisters(REG_COUNTER);
	CHECK(secondCoreTimerValue> thirdCoreTimerValue);
	Stop_CoreTimer();

	unsigned long int fourthCoreTimerValue = Read_CoreTimerRegisters(REG_COUNTER);
	unsigned long int fifthCoreTimerValue = Read_CoreTimerRegisters(REG_COUNTER);
	CHECK_EQUAL(fourthCoreTimerValue, fifthCoreTimerValue);

}

TEST(Done_CoreTimer){
	Init_CoreTimer();

	bool Done = Done_CoreTimer();
	CHECK(Done == false);

	Start_CoreTimer();
	while(Read_CoreTimerRegisters(REG_CNTRL)&DONE_BIT);
	Done = Done_CoreTimer();
	CHECK(Done = true);

	Done = Done_CoreTimer();
	CHECK(Done = false);

}



#endif



TEST_FILE_RUN_NOTIFICATION(CoreTimerTests_cpp);



