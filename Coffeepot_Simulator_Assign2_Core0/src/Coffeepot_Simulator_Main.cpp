/*
 * Coffeepot_Simulator_Main.cpp
 *
 *  Created on: Oct 22, 2019
 *      Author: Ibietela Whyte
 */

#include <stdio.h>
#include "Coffeepot_Simulator.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/CoffeePot_SimulatorFunctions2017.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/CoreTimer_Library.h"

#include "Lab1_BF609_Core0.H"
#include <sys/exception.h>
#define MAX_SECONDS	20
#define MAX_WATER_LEVEL 80
#define	MAX_TEMP 80
#define TURN_ON 1
#define ADD_WATER 2
#define ADD_HEAT 4

#define MASKBITS8_12 0xf000
#define MORE_POTS
volatile unsigned short int doFastForward = 0;

void My_Coffeepot_main(){
	Initialize_everything();
	while(!SwitchIsPressed(5)){

	}

	ShowNameProcessorUsed();

	Init_CoffeePotSimulation(numCoffeePots, USE_TEXT_AND_GRAPHICS_GUIS);
	unsigned char frontPanelLEDvalue = 0;
	unsigned short int REBvalue = 0;
	unsigned char FPswitches = 0;
	unsigned short int REBswitches = 0;
#ifdef MORE_POTS
	COFFEEPOT_DEVICE *pMyCoffeePot_array[numCoffeePots];
	pMyCoffeePot_array[0] = Add_CoffeePotToSystem_PlugAndPlay(COFFEEPOT1, "Ibietela");
	pMyCoffeePot_array[1] = Add_CoffeePotToSystem_PlugAndPlay(COFFEEPOT2, "Ibietela");
	Init_CoreTimer(960000000, 100000000);
	Control_CoreTimer(0x7);
	unsigned short int ActivateWaterControl1 = 1;
	unsigned short int ActivateHeatControl1 = 1;
	unsigned short int InitCoffeepot1 = 1;
	unsigned short int ActivateWaterControl2 = 1;
	unsigned short int ActivateHeatControl2 = 1;
	unsigned short int InitCoffeepot2 = 1;
	while(1){
		FPswitches = My_ReadSwitches();
			switch(FPswitches){
				case TURN_ON:
					if(InitCoffeepot1){
						Init_CoffeePot(pMyCoffeePot_array[0]);
						InitCoffeepot1 = 0;
					}
					break;
				case ADD_WATER:
					if(ActivateWaterControl1){
						Activate_Water_Control(pMyCoffeePot_array[0]);
						ActivateWaterControl1 = 0;
					}
					AddWater(pMyCoffeePot_array[0], MAX_WATER_LEVEL);
					break;
				case ADD_HEAT:
					if(ActivateHeatControl1){
						Activate_Heat_Control(pMyCoffeePot_array[0]);
						ActivateHeatControl1 = 0;
					}

					AddHeat(pMyCoffeePot_array[0], MAX_TEMP);
					break;
			}

		REBswitches = (My_Read_REB_SwitchesCPP())>>8;
			switch(REBswitches){
				case TURN_ON:
					if(InitCoffeepot2){
						Init_CoffeePot(pMyCoffeePot_array[1]);
						InitCoffeepot2 = 0;
					}
					break;
				case ADD_WATER:
					if(ActivateWaterControl1){
						Activate_Water_Control(pMyCoffeePot_array[1]);
						ActivateWaterControl2 = 0;
					}
					AddWater(pMyCoffeePot_array[1], MAX_WATER_LEVEL);
					break;
				case ADD_HEAT:
					if(ActivateHeatControl1){
						Activate_Heat_Control(pMyCoffeePot_array[1]);
						ActivateHeatControl2 = 0;
					}

					AddHeat(pMyCoffeePot_array[1], MAX_TEMP);
					break;
			}

		frontPanelLEDvalue = static_cast<char>(pMyCoffeePot_array[0]->controlRegister);
		REBvalue = pMyCoffeePot_array[1]->controlRegister;
		if(doFastForward == 1){
			doFastForward = 0;
			FastForward_OneSimulationTIC(pMyCoffeePot_array[0]);
			FastForward_OneSimulationTIC(pMyCoffeePot_array[1]);
		}
		register_handler(ik_timer, My_ISR_FastForward);

#endif

#ifdef ONE_POT
	COFFEEPOT_DEVICE *pMyCoffeePot1 = Add_CoffeePotToSystem_PlugAndPlay(COFFEEPOT1, "Ibietela Whyte");
	Init_CoreTimer(960000000, 100000000);
	Control_CoreTimer(0x7);
	while(1){
	unsigned char FPswitches = My_ReadSwitches();
		switch(FPswitches){
			case TURN_ON: Init_CoffeePot(pMyCoffeePot1);
						//Activate_All(pMyCoffeePot1);
						break;
			case ADD_WATER: Activate_Water_Control(pMyCoffeePot1);
						AddWater(pMyCoffeePot1, MAX_WATER_LEVEL);
						 break;
			case ADD_HEAT: Activate_Heat_Control(pMyCoffeePot1);
						AddHeat(pMyCoffeePot1, MAX_TEMP);
						 break;
		}
		frontPanelLEDvalue = static_cast<char>(pMyCoffeePot1->controlRegister);
		if(doFastForward == 1){
			doFastForward = 0;
			FastForward_OneSimulationTIC(pMyCoffeePot1);
		}
		register_handler(ik_timer, My_ISR_FastForward);

#endif

	Write_GPIO_FrontPanelLEDS(frontPanelLEDvalue);
	Write_GPIO_REB_Output(REBvalue<<12);
	if(SwitchIsPressed(5))
		break;
	}

		printf("Finished all tests\n");
}
