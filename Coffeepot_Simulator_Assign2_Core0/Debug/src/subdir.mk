################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/My_Read_REB_SwitchesASM.asm \
../src/My_Write_REB_LEDS_ASM.asm \
../src/ReadProcessorCyclesASM.asm \
../src/Turn_on_LEDASM.asm 

CPP_SRCS += \
../src/Coffeepot_Simulator.cpp \
../src/Coffeepot_Simulator_Main.cpp \
../src/Coffepot_Simulator_Functions.cpp \
../src/Lab1_GeneralCode.cpp \
../src/My_Read_REB_SwitchesCPP2.cpp \
../src/My_Write_REB_LEDS_CPP.cpp \
../src/ReadProcessorCyclesCPP.cpp \
../src/Subroutines_and_ISR.cpp 

SRC_OBJS += \
./src/Coffeepot_Simulator.doj \
./src/Coffeepot_Simulator_Main.doj \
./src/Coffepot_Simulator_Functions.doj \
./src/Lab1_GeneralCode.doj \
./src/My_Read_REB_SwitchesASM.doj \
./src/My_Read_REB_SwitchesCPP2.doj \
./src/My_Write_REB_LEDS_ASM.doj \
./src/My_Write_REB_LEDS_CPP.doj \
./src/ReadProcessorCyclesASM.doj \
./src/ReadProcessorCyclesCPP.doj \
./src/Subroutines_and_ISR.doj \
./src/Turn_on_LEDASM.doj 

ASM_DEPS += \
./src/My_Read_REB_SwitchesASM.d \
./src/My_Write_REB_LEDS_ASM.d \
./src/ReadProcessorCyclesASM.d \
./src/Turn_on_LEDASM.d 

CPP_DEPS += \
./src/Coffeepot_Simulator.d \
./src/Coffeepot_Simulator_Main.d \
./src/Coffepot_Simulator_Functions.d \
./src/Lab1_GeneralCode.d \
./src/My_Read_REB_SwitchesCPP2.d \
./src/My_Write_REB_LEDS_CPP.d \
./src/ReadProcessorCyclesCPP.d \
./src/Subroutines_and_ISR.d 


# Each subdirectory must supply rules for building sources it contributes
src/Coffeepot_Simulator.doj: ../src/Coffeepot_Simulator.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Coffeepot_Simulator.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Coffeepot_Simulator_Main.doj: ../src/Coffeepot_Simulator_Main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Coffeepot_Simulator_Main.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Coffepot_Simulator_Functions.doj: ../src/Coffepot_Simulator_Functions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Coffepot_Simulator_Functions.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Lab1_GeneralCode.doj: ../src/Lab1_GeneralCode.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Lab1_GeneralCode.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Read_REB_SwitchesASM.doj: ../src/My_Read_REB_SwitchesASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-f51d15b419499b9bdcdef7e93e167bf8.txt -gnu-style-dependencies -MM -Mo "src/My_Read_REB_SwitchesASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Read_REB_SwitchesCPP2.doj: ../src/My_Read_REB_SwitchesCPP2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/My_Read_REB_SwitchesCPP2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Write_REB_LEDS_ASM.doj: ../src/My_Write_REB_LEDS_ASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-f51d15b419499b9bdcdef7e93e167bf8.txt -gnu-style-dependencies -MM -Mo "src/My_Write_REB_LEDS_ASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Write_REB_LEDS_CPP.doj: ../src/My_Write_REB_LEDS_CPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/My_Write_REB_LEDS_CPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReadProcessorCyclesASM.doj: ../src/ReadProcessorCyclesASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-f51d15b419499b9bdcdef7e93e167bf8.txt -gnu-style-dependencies -MM -Mo "src/ReadProcessorCyclesASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReadProcessorCyclesCPP.doj: ../src/ReadProcessorCyclesCPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/ReadProcessorCyclesCPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Subroutines_and_ISR.doj: ../src/Subroutines_and_ISR.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Subroutines_and_ISR.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Turn_on_LEDASM.doj: ../src/Turn_on_LEDASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-f51d15b419499b9bdcdef7e93e167bf8.txt -gnu-style-dependencies -MM -Mo "src/Turn_on_LEDASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


