/*************************************************************************************
*   AUTOMATICALLY GENERATED COMMENT -- DO NOT MODIFY
* Author: Ibietela Whyte
* Date: Tue 2019/11/19 at 06:09:47 PM
* File Type: EUNIT Test File
*************************************************************************************/

#define EMBEDDEDUNIT_LITE
#include <EmbeddedUnit2017/EmbeddedUnit2017.h>
//#include "CoreTimerTests_cpp.h"


TEST_CONTROL(CoreTimerTests_cpp);

#if 1
void UpdateEunitGui(void);
TEST(CoreTimerTests_cpp_GUIUpdate) {
	UpdateEunitGui();  // Conditionally compile this line (use #if 0) to stop an GUI update based on last completed test
}
#endif


unsigned short int TestBitwiseAND(unsigned short int bitPattern, unsigned short int bitMask);
unsigned short int TestBitwiseOR(unsigned short int bitPattern, unsigned short int bitMask);

#if 0
TEST(CoreTimerTests_MoreComplexTest)
{ 
	#warning 'Dummy test has been inserted -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM '
	// TODO -- 'Dummy test has been inserted  -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM '
	printf("Dummy test has been inserted -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM \n");
	
	unsigned long int value  			= 0x01FF01FF;
	unsigned long int ORmask 			= 0x0F000F0F;
	unsigned long int expectedORResult 	= 0x0100010F;
	unsigned long int resultOR  = TestBitwiseOR(value, ORmask);
	CHECK(expectedORResult == resultOR);
	CHECK_EQUAL(expectedORResult, resultOR);
	
	#error("You insert the 'wrong' test for TestBitwiseAND";
}

unsigned short int TestBitwiseAND(unsigned short int bitPattern, unsigned short int bitMask) {
	return bitPattern && bitMask;
}

unsigned short int TestBitwiseOR(unsigned short int bitPattern, unsigned short int bitMask) {
	return bitPattern || bitMask;
}

TEST(CoreTimerTests_Successes)
{ 
	#warning 'Dummy test has been inserted -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM '
	// TODO -- 'Dummy test has been inserted  -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM '
	printf("Dummy test has been inserted -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM \n");
	
	CHECK(false == false);
	CHECK_EQUAL(false, false);
	
	XF_CHECK(false == true);    // Expected failure occurs
	XF_CHECK_EQUAL(false, true); // Expected failure occurs
	XF_CHECK(false == false);    // Expected failure does not occur
	XF_CHECK_EQUAL(false, false); // Expected failure does not occur
	
	#error("You insert the 'wrong' test for TestBitwiseAND";
}

#endif

TEST(CoreTimerTests)
{ 
	#warning 'Dummy test has been inserted -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM '
	// TODO -- 'Dummy test has been inserted  -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM '
	printf("Dummy test has been inserted -- replace with your own -- Tue 2019/11/19 at 06:09:47 PM \n");
		bool validTest = false;
	CHECK(validTest == true);
	CHECK(validTest == true);
	CHECK(validTest == true);
	CHECK(validTest == true);
	CHECK(validTest == true);
}




TEST_FILE_RUN_NOTIFICATION(CoreTimerTests_cpp);



