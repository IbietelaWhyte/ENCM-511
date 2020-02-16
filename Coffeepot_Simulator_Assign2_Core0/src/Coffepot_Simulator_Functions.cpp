/*
 * Coffepot_Simulator_Functions.cpp
 *
 *  Created on: Oct 22, 2019
 *      Author: Ibietela Whyte
 */
#include <stdio.h>

#include "Coffeepot_Simulator.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/CoffeePot_SimulatorFunctions2017.h"

#define SHOW_FUNCTION_STUB_INFO 1

void ShowNameProcessorUsed(void){
#if defined(__ADSPBF533__)
	char processor[] = "__ADSPBF533__";
#else
	char processor[] ="__ADSOBF609__";
#endif
	printf("Coffeepot running on %s system\n\n", processor);
}

inline void Show_Function_Stub_Information(char *functionNameInformation){
	if(SHOW_FUNCTION_STUB_INFO)
		printf("%s\n", functionNameInformation);
}

void Init_CoffeePot(COFFEEPOT_DEVICE *pCoffeePot){
		Show_Function_Stub_Information("Init_CoffeePot");
		unsigned short int currentControlRegVal = ReadControlRegister_CPP(pCoffeePot);
		unsigned short int newControlRegVal = INITandSTAYPOWEREDON_BIT;
		pCoffeePot->controlRegister = newControlRegVal;
		while((ReadControlRegister_CPP(pCoffeePot))!=(DEVICE_READY_BIT_RO | INITandSTAYPOWEREDON_BIT)){
			FastForward_OneSimulationTIC(pCoffeePot);
		}
		Turn_on_LED_CPP(pCoffeePot, USE_LED1_TO_SHOW_SYSTEM_POWEREDUP);
		printf("Coffeepot ready\n");


}

void Activate_LED_Control(COFFEEPOT_DEVICE *pCoffeePot){
	Show_Function_Stub_Information("Activate_LED_Control");
	pCoffeePot->controlRegister = pCoffeePot->controlRegister | LED_DISPLAY_ENABLE_BIT;
	Turn_on_LED_CPP(pCoffeePot, USE_LED4_TO_SHOW_LED_DISPLAY_ENABLED);
	//FastForward_OneSimulationTIC(pCoffeePot);
}

void Activate_Water_Control(COFFEEPOT_DEVICE *pCoffeePot){
	Show_Function_Stub_Information("Activate_Water_Control");
	pCoffeePot->controlRegister = pCoffeePot->controlRegister | WATER_ENABLE_BIT;
}

void Deactivate_Water_Control(COFFEEPOT_DEVICE *pCoffeePot){
	Show_Function_Stub_Information("Deactivate_Water_Control");
	pCoffeePot->controlRegister = pCoffeePot->controlRegister & (~WATER_ENABLE_BIT);
	//Turn_on_LED_CPP(pCoffeePot, USE_LED3_TO_SHOW_WATER_ENABLED);
	//FastForward_OneSimulationTIC(pCoffeePot);
}

void AddWater(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_WATER_LEVEL){
	//while(CurrentWaterLevel_CPP(pCoffeePot) < MAX_WATER_LEVEL){
		pCoffeePot->waterInFlowRegister = static_cast<char>(MAX_WATER_LEVEL);
		//FastForward_OneSimulationTIC(pCoffeePot);
	//}
}

void AddHeat(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_HEAT){
	pCoffeePot->heaterBoostRegister = 14;
	//while((CurrentTemperature_CPP(pCoffeePot) < MAX_HEAT) | (pCoffeePot->heaterRegister < MAX_HEAT-50)){
		pCoffeePot->heaterRegister = static_cast<char>(MAX_HEAT);
		//FastForward_OneSimulationTIC(pCoffeePot);
	//}
}

void Activate_Heat_Control(COFFEEPOT_DEVICE *pCoffeePot){
	Show_Function_Stub_Information("Activate_Heat_Control");
	pCoffeePot->controlRegister = pCoffeePot->controlRegister | HEATER_ENABLE_BIT;
}

void Deactivate_Heat_Control(COFFEEPOT_DEVICE *pCoffeePot){
	Show_Function_Stub_Information("Deactivate_Heat_Control");
	pCoffeePot->controlRegister = pCoffeePot->controlRegister & (~HEATER_ENABLE_BIT);
	//Turn_on_LED_CPP(pCoffeePot, USE_LED2_TO_SHOW_HEATER_ENABLED);
	//FastForward_OneSimulationTIC(pCoffeePot);
}

void Activate_All(COFFEEPOT_DEVICE *pCoffeePot){
	Activate_LED_Control(pCoffeePot);
	Activate_Heat_Control(pCoffeePot);
	Activate_Water_Control(pCoffeePot);
}
void Control_Both_Temp_Water(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_WATER_LEVEL, unsigned short int MAX_TEMP){
	if(!(pCoffeePot->controlRegister&WATER_ENABLE_BIT))
		Activate_Water_Control(pCoffeePot);
	if(!(pCoffeePot->controlRegister&HEATER_ENABLE_BIT))
		Activate_Heat_Control(pCoffeePot);
		AddWater(pCoffeePot, MAX_WATER_LEVEL);
		AddHeat(pCoffeePot, MAX_TEMP);
		if(CurrentWaterLevel_CPP(pCoffeePot)<400)
			AddWater(pCoffeePot, MAX_WATER_LEVEL);

}

void Control_Both_Temp_Water_Multiple(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_WATER_LEVEL, unsigned short int MAX_TEMP){
		AddWater(pCoffeePot, MAX_WATER_LEVEL);
		AddHeat(pCoffeePot, MAX_TEMP);
		if(CurrentWaterLevel_CPP(pCoffeePot)<400)
			AddWater(pCoffeePot, MAX_WATER_LEVEL);

}

void Turn_on_LED_CPP(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE){
	pCoffeePot->controlRegister = pCoffeePot->controlRegister | LED_VALUE;
	//FastForward_OneSimulationTIC(pCoffeePot);

}

void Turn_off_LED_CPP(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE){
	unsigned short int currentControlRegVal = ReadControlRegister_CPP(pCoffeePot);
	currentControlRegVal = currentControlRegVal & ~LED_VALUE;
	pCoffeePot->controlRegister = currentControlRegVal;
	//FastForward_OneSimulationTIC(pCoffeePot);

}

void Blink_LED(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE){
	Turn_on_LEDASM(pCoffeePot, LED_VALUE);
	//Turn_on_LED_CPP(pCoffeePot, LED_VALUE);
	Turn_off_LED_CPP(pCoffeePot, LED_VALUE);
}

