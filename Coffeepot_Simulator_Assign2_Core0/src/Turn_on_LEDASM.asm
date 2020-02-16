/*
 * Turn_on_LEDASM.asm
 *
 *  Created on: Nov 7, 2019
 *      Author: Ibietela Whyte
 */
 #include <blackfin.h>
.section L1_data;

.section program;
.global _Turn_on_LEDASM; //   extern "C"  void Turn_on_LEDASM(COFFEEPOT_DEVICE *pCoffeePot, unsigned short int LED_VALUE){

#define pCoffeePot R0
#define LED_VALUE R1
#define Read_R2 R2
#define ADDRESS_P0 P0

_Turn_on_LEDASM:
	LINK 20;
	P0 = pCoffeePot;
	Read_R2 = W[ADDRESS_P0](Z);
	R0 = Read_R2 | LED_VALUE;
	B[P0 + 6] = R0;
	ssync;
	UNLINK;
_Turn_on_LEDASM.END:
	RTS;
