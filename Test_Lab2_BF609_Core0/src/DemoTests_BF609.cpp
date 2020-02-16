/*************************************************************************************
*   AUTOMATICALLY GENERATED COMMENT -- DO NOT MODIFY
* Author: ibietela.whyte1
* Date: Tue 2019/10/15 at 02:34:29 PM
* File Type: EUNIT Test File
*************************************************************************************/

#define EMBEDDEDUNIT_LITE
#include <EmbeddedUnit2017/EmbeddedUnit2017.h>
#include "DemoTests_BF609.h"
extern volatile int prev;

TEST_CONTROL(DemoTests_BF609_cpp);

#if 1
void UpdateEunitGui(void);
TEST(DemoTests_BF609_cpp_GUIUpdate) {
	UpdateEunitGui();  // Conditionally compile this line (use #if 0) to stop an GUI update based on last completed test
}
#endif


unsigned short int TestFPThread1_Task_ON();
unsigned short int TestFPThread1_Task_OFF();
unsigned short int TestFPThread2_Task();
unsigned short int TestFPThread3_Task();

#if 0
TEST(FirstTestExample_BF609_MoreComplexTest)
{ 
	#warning 'Dummy test has been inserted -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM '
	// TODO -- 'Dummy test has been inserted  -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM '
	printf("Dummy test has been inserted -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM \n");
	
	unsigned long int value  			= 0x01FF01FF;
	unsigned long int ORmask 			= 0x0F000F0F;
	unsigned long int expectedORResult 	= 0x0100010F;
	unsigned long int resultOR  = TestBitwiseOR(value, ORmask);
	CHECK(expectedORResult == resultOR);
	CHECK_EQUAL(expectedORResult, resultOR);
	
	#error("You insert the 'wrong' test for TestBitwiseAND";
}
#endif

#if 1
TEST(FPThread1_Task_ON) {
	Write_GPIO_FrontPanelLEDS(0x7F);
	FPThread1_Task();
	unsigned short int result = Read_GPIO_FrontPanelLEDS();
	unsigned short int expected = 0xFF;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);
}

TEST(FPThread1_Task_OFF) {
	Write_GPIO_FrontPanelLEDS(0x80);
	FPThread1_Task();
	unsigned short int result = Read_GPIO_FrontPanelLEDS();
	unsigned short int expected = 0x00;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);
}

TEST(FPThread2_Task_ON) {
	Write_GPIO_FrontPanelLEDS(0xBF);
	FPThread2_Task();
	unsigned short int result = Read_GPIO_FrontPanelLEDS();
	unsigned short int expected = 0xFF;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);
}

TEST(FPThread2_Task_OFF) {
	prev = 0;
	Write_GPIO_FrontPanelLEDS(0x40);
	FPThread2_Task();
	unsigned short int result = Read_GPIO_FrontPanelLEDS();
	unsigned short int expected = 0x40;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

	prev = 1;
	Write_GPIO_FrontPanelLEDS(0x40);
	FPThread2_Task();
	result = Read_GPIO_FrontPanelLEDS();
	expected = 0x40;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

	prev = 2;
	Write_GPIO_FrontPanelLEDS(0x40);
	FPThread2_Task();
	result = Read_GPIO_FrontPanelLEDS();
	expected = 0x00;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);
}

TEST(FPThread3_Task_0) {
	Write_GPIO_FrontPanelLEDS(0x00);
	FPThread3_Task();
	unsigned short int result = Read_GPIO_FrontPanelLEDS();
	unsigned short int expected = 0x01;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

	Write_GPIO_FrontPanelLEDS(0x01);
	FPThread3_Task();
	result = Read_GPIO_FrontPanelLEDS();
	expected = 0x02;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

	Write_GPIO_FrontPanelLEDS(0x02);
	FPThread3_Task();
	result = Read_GPIO_FrontPanelLEDS();
	expected = 0x03;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

	Write_GPIO_FrontPanelLEDS(0x03);
	FPThread3_Task();
	result = Read_GPIO_FrontPanelLEDS();
	expected = 0x00;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);
}
#endif

#if 1
TEST(All_FPThreads) {
	Write_GPIO_FrontPanelLEDS(0xFF);
	prev = 0;
	FPThread1_Task();
	FPThread2_Task();
	FPThread3_Task();
	unsigned short int result = Read_GPIO_FrontPanelLEDS();
	unsigned short int expected = 0x7C;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

	Write_GPIO_FrontPanelLEDS(0xFF);
	prev = 2;
	FPThread1_Task();
	FPThread2_Task();
	FPThread3_Task();
	result = Read_GPIO_FrontPanelLEDS();
	expected = 0x3C;
	CHECK(expected == result);
	CHECK_EQUAL(expected, result);

}

#endif

#if 0
TEST(FirstTestExample_BF609_Successes)
{ 
	#warning 'Dummy test has been inserted -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM '
	// TODO -- 'Dummy test has been inserted  -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM '
	printf("Dummy test has been inserted -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM \n");
	
	CHECK(false == false);
	CHECK_EQUAL(false, false);
	
	XF_CHECK(false == true);    // Expected failure occurs
	XF_CHECK_EQUAL(false, true); // Expected failure occurs
	XF_CHECK(false == false);    // Expected failure does not occur
	XF_CHECK_EQUAL(false, false); // Expected failure does not occur
	
	#error("You insert the 'wrong' test for TestBitwiseAND";
}

TEST(FirstTestExample_BF609)
{ 
	#warning 'Dummy test has been inserted -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM '
	// TODO -- 'Dummy test has been inserted  -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM '
	printf("Dummy test has been inserted -- replace with your own -- Tue 2019/10/15 at 02:34:29 PM \n");
		bool validTest = false;
	CHECK(validTest == true);
	CHECK(validTest == true);
	CHECK(validTest == true);
	CHECK(validTest == true);
	CHECK(validTest == true);
}

#endif





TEST_FILE_RUN_NOTIFICATION(DemoTests_BF609_cpp);



