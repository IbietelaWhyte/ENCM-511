/*************************************************************************************
*   AUTOMATICALLY GENERATED COMMENT -- DO NOT MODIFY
* Author: Ibietela Whyte
* Date: Tue 2019/11/19 at 06:09:46 PM
* File Type: EUNIT Main File
*************************************************************************************/

#include <EmbeddedUnit2017/EmbeddedUnit2017.h>

#include "CoreTimerTests_Interrupts.h"
void UpdateEunitGui(void);
extern volatile int useLongFileFormat;

extern void AutomatedTestLevelControl(void);

void RestartEunitGui(void);
void UpdateEunitGui(void);

int main(void)
{
	int failureCount;

	RestartEunitGui( ); 
	UpdateEunitGui();
	
	UnitTest::ProcessorSpecificStartup();

	AutomatedTestLevelControl();

	UnitTest::Test::GetTestList().ReverseListDirection();

	bool showFail = true;	bool showXFail = true;
	bool showSuccesses = true;

// TODO You can adjust UnitTest::RunAllTests( ) parameters to show only failures -- Wed 2018/09/26 at 08:14:10 PM
// TODO          by setting bool showSuccesses = false;;
	failureCount = UnitTest::RunAllTests(showFail, showXFail, showSuccesses);
	
	UpdateEunitGui();
	return failureCount;
}
