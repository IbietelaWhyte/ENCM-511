/*****************************************************************************
 * Coffeepot_Simulator.h
 *****************************************************************************/
#include "../../ENCM511_SpecificFiles/ENCM511_include/CoffeePot_SimulatorFunctions2017.h"
#include <sys/exception.h>
#include <blackfin.h>
#include "../FILES_UNDER_TESTS/CoreTimer_Code_COPY.h"
#include "../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.h"

#ifndef __COFFEEPOT_SIMULATOR_H__
#define __COFFEEPOT_SIMULATOR_H__

/* Add your custom header content here */
#define numCoffeePots 2
void My_Coffeepot_main();
void ShowNameProcessorUsed();
void Init_CoffeePotSimulation();
void Init_CoffeePot(COFFEEPOT_DEVICE *pCoffeePot);
void Activate_LED_Control(COFFEEPOT_DEVICE *pCoffeePot);
void Activate_Heat_Control(COFFEEPOT_DEVICE *pCoffeePot);
void Deactivate_Heat_Control(COFFEEPOT_DEVICE *pCoffeePot);
void Activate_Water_Control(COFFEEPOT_DEVICE *pCoffeePot);
void Deactivate_Water_Control(COFFEEPOT_DEVICE *pCoffeePot);
void Turn_on_LED_CPP(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE);
void Turn_off_LED_CPP(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE);
void Blink_LED(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE);
void AddWater(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_WATER_LEVEL);
void AddHeat(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_HEAT);
void Control_Both_Temp_Water(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_WATER_LEVEL, unsigned short int MAX_TEMP);
void Control_Both_Temp_Water_Multiple(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int MAX_WATER_LEVEL, unsigned short int MAX_TEMP);
extern "C"  void Turn_on_LEDASM(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE);
void Activate_All(COFFEEPOT_DEVICE *pCoffeePot);
void Subroutine_Clear_CT_Done_Flag(void);
#pragma interrupt;
void ISR_Clear_CT_Done_Flag(void);
#pragma interrupt;
void My_ISR_FastForward(void);

#endif /* __COFFEEPOT_SIMULATOR_H__ */
