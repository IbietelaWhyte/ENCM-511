#include <sys/platform.h>
#include "adi_initialize.h"
#include <math.h>
#include "Lab1_BF609_Core0.h"

//Adding function definitions here
void main(void){

	//We need to make sure that we initialize the interfaces before we use them.
	Initialize_everything();

//Read Switch Test
#if 0
	printf("Press switch 3\n");
	unsigned char switchValue = My_ReadSwitches();
	if(switchValue != 3){
		printf("BAD SWITCH READ TEST\n");
	}
	else{
		printf("GOOD READ TEST\n");
	}
#endif

//Single Read/Write LED Test
#if 0
	My_WriteLED(DEFAULT_LED_VALUE);

	unsigned char checkLEDValue = My_READLED();
	if(checkLEDValue != DEFAULT_LED_VALUE){
		printf("BAD LED READ/WRITE TEST\n");
	}
	else{
		printf("GOOD READ/WRITE TEST\n");
	}

//Multiple Read/Write LED Test
#else
	//Interative Testing Values
	#if 0
		for(unsigned char useLEDValue = 0; useLEDValue <= NUM_READ_WRITE_TESTS; useLEDValue++){
			My_WriteLED(useLEDValue);
			unsigned char checkLEDValue = My_READLED();
			if(checkLEDValue != useLEDValue){
				printf("Bad LED read / write test -- Wrote %c and got back %c\n", useLEDValue, checkLEDValue);
			}
			else{
				//printf("Wrote %c and got back %c\n", useLEDValue, checkLEDValue);
			}
		}
	//Print out initials on good test result
	#else
		#if 1
			FirstTest_REBSwitches();
		#else

		#endif
	#endif
#endif
	printf("Leaving Start_Lab0 function\n");
}

void Initialize_everything(){
	My_Init_LEDInterface();
	My_Init_REB_SwitchInterface();
	My_Init_REB_LEDInterface();
	My_Init_SwitchInterface();
}

void My_Init_LEDInterface(void){
	My_InitLEDInterface_Done = true;
#ifdef __ADSPBF609__
	Init_GPIO_FrontPanelLEDS();
#endif
}

void My_Init_SwitchInterface(void){
	My_InitSwitchInterface_Done = true;
#ifdef __ADSPBF609__
	Init_GPIO_FrontPanelSwitches();
#endif
}


unsigned char My_ReadSwitches(void){
	if(My_InitSwitchInterface_Done == false){
		printf("Switch Interface not initialized.\n");
		return 0x42;
	}
#ifdef __ADSPBF609__
	FRONTPANEL_SWITCH_5BIT_VALUE activeLowValues = Read_GPIO_FrontPanelSwitches();
	FRONTPANEL_SWITCH_5BIT_VALUE activeHighValues = ~activeLowValues;

	FRONTPANEL_SWITCH_5BIT_VALUE wantedSwtichValueActiveHigh = activeHighValues & MASK_KEEP_LOWER_FIVE_BITS;
	return wantedSwtichValueActiveHigh;
#else
	return 0x55;
#endif
}

void My_WriteLED(unsigned char neededLEDValue){
	if(My_InitLEDInterface_Done == false){
		printf("Cannot write to LED, interface not initialized.\n");
		return;
	}
#ifdef __ADSPBF609__
	Write_GPIO_FrontPanelLEDS(neededLEDValue);
#else
		LastLEDValueWritten = neededLEDValue;
		PrintBinaryValue(LastLEDValueWritten);
#endif
}

unsigned char My_READLED(void){
	if(My_InitLEDInterface_Done == false){
		printf("Cannot read from LED, interface not initialized\n");
		return 0x42;

	}
#ifdef __ADSPBF609__
	return Read_GPIO_FrontPanelLEDS();
#else
	return LastLEDValueWritten;
#endif
}

//Prints the decimal and hex number of the input every time.
//Will also print the bit pattern of the input if it can be
//represented in NUM_DISPLAY_BITS bits
void PrintBinaryValue(unsigned char valueToPrint){
	int checkLEDConfigResult = Check_Configs_LEDTest(valueToPrint);
	int checkReadWriteResult = Check_Configs_ReadWrite();
	bool binaryDisplay = true;
	if(checkLEDConfigResult == 1 || checkReadWriteResult == 1){
		binaryDisplay = false;
	}
	//printf("LED Value - decimal %d; hex 0x%x", valueToPrint, valueToPrint);
	if(binaryDisplay){
		//printf("; bit pattern ");
		char* bitPattern = DecimalToBinary(valueToPrint, NUM_DISPLAY_BITS);
		int i = 0;
		while(i < NUM_DISPLAY_BITS){
			if(bitPattern[i] == 1){
				printf("%d", bitPattern[i]);
			}
			else{
				printf("%c", ' ');
			}
			i++;
		}
		delete bitPattern;
	}

	printf("\n");
}

// char* bitPattern = new char[numBits+1];

char* DecimalToBinary(unsigned char valueToConvert, unsigned char numBits){
	//TODO Optimize this function
	/*char bitPattern[numBits+1];
	int quotient = valueToConvert;
	int offSet = numBits-1;
	while(quotient >  0 && offSet >= 0){
		bitPattern[offSet] = quotient % 2;
		quotient = quotient / 2;
		offSet--;
	}
	bitPattern[numBits] = 0;
	return bitPattern;*/
	return 0;
}

//Checks if all read/write tests can be displayed in NUM_DISPLAY_BITS bits
int Check_Configs_ReadWrite(void){
	int max = 1 << NUM_DISPLAY_BITS;
	if(NUM_READ_WRITE_TESTS > max){
		return 1;
	}
	return 0;
}

//Checks if the input LEDValue can be displayed in NUM_DISPLAY_BITS bits
int Check_Configs_LEDTest(unsigned char LEDValue){
	int max = 1 << NUM_DISPLAY_BITS;
	if(LEDValue > max){
		return 1;
	}
	return 0;
}

void WaitTillSwitch1PressedAndReleased(){
	printf("Starting Wait for Switch 1\n");

	while((My_ReadSwitches()&SW1BIT) != SW1BIT){

	}
	while((My_ReadSwitches()&SW1BIT) == SW1BIT){

	}
}

void WaitTillSwitch2PressedAndReleased(){
	printf("Starting Wait for Switch 2\n");
	while((My_ReadSwitches()&0x2) != 0x2){

	}
	while((My_ReadSwitches()&0x2) == 0x2){

	}
}

void WaitTillSwitch3PressedAndReleased(){
	printf("Starting Wait for Switch 3\n");
	while((My_ReadSwitches()&0x4) != 0x4){

	}
	while((My_ReadSwitches()&0x4) == 0x4){

	}
}

bool SwitchIsPressed(int switchNum){
	unsigned char toCheck = 0x1 << (switchNum - 1);
	return ((My_ReadSwitches()&toCheck) == toCheck);
}

void QuickTest_FrontPanelSwitchesLEDS(){
	while(1){
		unsigned char switchValue_FP = My_ReadSwitches();
		My_WriteLED(switchValue_FP);
		printf("%d, 0x%x\n", switchValue_FP);
		Wait(2);
	}
}

void Wait(int secs){
	unsigned long long int startCycles = ReadProcessorCyclesCPP();
	unsigned long long int currentCycles;
	unsigned long long int cyclesToWait = secs*0x1C9C3800; //Half a second
	unsigned long long int cyclesUpperLimit = startCycles + cyclesToWait;
	currentCycles = ReadProcessorCyclesCPP();
	cyclesUpperLimit = startCycles + cyclesToWait;    // updating cyclesUpperLimit
	if(cyclesUpperLimit > 0xFFFFFFFF){  //Deal with case of overflowing 32bits
		//Current Cycles needs to increment to 0xFFFFFFFF and then an addition remainder starting from zero
		//This remainder is cyclesToWait + startCycles - 0xFFFFFFFF
		cyclesUpperLimit = cyclesToWait + startCycles - 0xFFFFFFFF;
		//If currentCycles equals cyclesUpperLimit within an error range, stop looping
		while(currentCycles < cyclesUpperLimit || currentCycles > (cyclesUpperLimit + 0x100)){
			currentCycles = ReadProcessorCyclesCPP();
		}
	}
	else{ //Case where 32 bits are do not overflow
		//Loop until currentCycles reaches cyclesUpperLimit
		while(currentCycles < cyclesUpperLimit){
			currentCycles = ReadProcessorCyclesCPP();
		}
	}
	startCycles = ReadProcessorCyclesCPP();
}

void FirstTest_REBSwitches(void){
	while(1){
		unsigned short int switchValue_REB = My_ReadSwitches_REB();
		printf("%d, %x\n", switchValue_REB, switchValue_REB);
		My_WriteLED(switchValue_REB>>8);
		My_Write_REB_LEDS_ASM(switchValue_REB<<4);
		Wait(1);
	}
}

void My_Init_REB_LEDInterface(void){
	My_InitLEDInterface_Done = true;
#ifdef __ADSPBF609__
	Init_GPIO_REB_Output();
#endif
}

void My_Init_REB_SwitchInterface(void){
	My_InitSwitchInterface_Done = true;
#ifdef __ADSPBF609__
	Init_GPIO_REB_Input();
#endif
}

unsigned short int My_ReadSwitches_REB(void){
	if(My_InitSwitchInterface_Done == false){
		printf("Switch Interface not initialized.\n");
		return 0x42;
	}
#ifdef __ADSPBF609__
	unsigned short int activeLowValues = My_Read_REB_SwitchesASM();
	unsigned short int activeHighValues = activeLowValues;

	unsigned short int wantedSwtichValueActiveHigh = activeHighValues & MASK_PF8_11;
	return wantedSwtichValueActiveHigh;
	//return activeHighValues;
#else
	return 0x44;
#endif
}

void Lab_0(){
	printf("Inside Start_Lab0() function \n");
	unsigned long long int startCycles = ReadProcessorCyclesCPP();
	unsigned long long int currentCycles;
	unsigned long long int cyclesToWait = 0x1C9C3800;
	unsigned long long int cyclesUpperLimit = startCycles + cyclesToWait;
	while(!SwitchIsPressed(2)){
		if(NextToDisplay == 15){
			NextToDisplay = 0;
			My_WriteLED(vertical_eightBit_initials[NextToDisplay]);
			//break;
		}
		else{
			My_WriteLED(vertical_eightBit_initials[NextToDisplay]);
			NextToDisplay++;
		}
		if(SwitchIsPressed(1)){
			cyclesToWait = cyclesToWait << 1;     // go slower
			printf("\nSwitch 1 pressed\n");
		}
		if(SwitchIsPressed(3)){
			printf("\nSwitch 3 pressed\n");
			cyclesToWait = cyclesToWait >> 1;     // go faster
		}
		currentCycles = ReadProcessorCyclesCPP();
		cyclesUpperLimit = startCycles + cyclesToWait;    // updating cyclesUpperLimit
		if(cyclesUpperLimit > 0xFFFFFFFF){  //Deal with case of overflowing 32bits
		//Current Cycles needs to increment to 0xFFFFFFFF and then an addition remainder starting from zero
		//This remainder is cyclesToWait + startCycles - 0xFFFFFFFF
			cyclesUpperLimit = cyclesToWait + startCycles - 0xFFFFFFFF;
			//If currentCycles equals cyclesUpperLimit within an error range, stop looping
			while(currentCycles < cyclesUpperLimit || currentCycles > (cyclesUpperLimit + 0x100))
				currentCycles = ReadProcessorCyclesCPP();
		}
		else{ //Case where 32 bits are do not overflow
			//Loop until currentCycles reaches cyclesUpperLimit
			while(currentCycles < cyclesUpperLimit)
				currentCycles = ReadProcessorCyclesCPP();
		}
		startCycles = ReadProcessorCyclesCPP();
	}
}
