/*************************************************************************************
*   AUTOMATICALLY GENERATED COMMENT -- DO NOT MODIFY
* Author: ibietela.whyte1
* Date: Thu 2019/11/21 at 04:06:27 PM
* File Type: EUNIT Test File
*************************************************************************************/

#define EMBEDDEDUNIT_LITE
#include <EmbeddedUnit2017/EmbeddedUnit2017.h>
//#include "CoreTimerTests_cpp.h"
#include "CoreTimerTests_Interrupts.h"
#include "../FILES_UNDER_TESTS/CoreTimer_Code_COPY.h"
#include "../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/CoreTimer_Library.h"
#include <blackfin.h>
#include <sys/exception.h>
#define PERIOD 66000




TEST_CONTROL(CoreTimerTests_cpp);

#if 1
void UpdateEunitGui(void);
TEST(CoreTimerTests_cpp_GUIUpdate) {
	UpdateEunitGui();  // Conditionally compile this line (use #if 0) to stop an GUI update based on last completed test
}
#endif

void Subroutine_Clear_CT_Done_Flag(void);

#pragma interrupt;
void ISR_Clear_CT_Done_Flag(void);

extern volatile int messageCount;
unsigned short int messageCount_Expected = 8;
TEST(Subroutines_and_ISR){
	Init_CoreTimer(PERIOD, PERIOD);
	Control_CoreTimer(7);
	Start_CoreTimer_Interrupts();
	messageCount = 0;
	while(messageCount < messageCount_Expected){
		//CoreTimer_SWI();
		register_handler(ik_timer, ISR_Clear_CT_Done_Flag);

	}
	CHECK_EQUAL(messageCount_Expected, messageCount);
	Stop_CoreTimer_Interrupts();

}

TEST_FILE_RUN_NOTIFICATION(CoreTimerTests_cpp);



