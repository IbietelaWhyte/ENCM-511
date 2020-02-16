################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/My_Read_REB_SwitchesASM.asm \
../src/My_Write_REB_LEDS_ASM.asm \
../src/ReadProcessorCyclesASM.asm 

CPP_SRCS += \
../src/Lab1_BF609_VirtualCar.cpp \
../src/Lab1_GeneralCode.cpp \
../src/My_Read_REB_SwitchesCPP2.cpp \
../src/My_Write_REB_LEDS_CPP.cpp \
../src/ReadProcessorCyclesCPP.cpp 

SRC_OBJS += \
./src/Lab1_BF609_VirtualCar.doj \
./src/Lab1_GeneralCode.doj \
./src/My_Read_REB_SwitchesASM.doj \
./src/My_Read_REB_SwitchesCPP2.doj \
./src/My_Write_REB_LEDS_ASM.doj \
./src/My_Write_REB_LEDS_CPP.doj \
./src/ReadProcessorCyclesASM.doj \
./src/ReadProcessorCyclesCPP.doj 

ASM_DEPS += \
./src/My_Read_REB_SwitchesASM.d \
./src/My_Write_REB_LEDS_ASM.d \
./src/ReadProcessorCyclesASM.d 

CPP_DEPS += \
./src/Lab1_BF609_VirtualCar.d \
./src/Lab1_GeneralCode.d \
./src/My_Read_REB_SwitchesCPP2.d \
./src/My_Write_REB_LEDS_CPP.d \
./src/ReadProcessorCyclesCPP.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lab1_BF609_VirtualCar.doj: ../src/Lab1_BF609_VirtualCar.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-94fec6c89c484897716212757f63ab91.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Lab1_BF609_VirtualCar.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Lab1_GeneralCode.doj: ../src/Lab1_GeneralCode.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-94fec6c89c484897716212757f63ab91.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Lab1_GeneralCode.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Read_REB_SwitchesASM.doj: ../src/My_Read_REB_SwitchesASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-7e835741da69537631f05c09be6a3341.txt -gnu-style-dependencies -MM -Mo "src/My_Read_REB_SwitchesASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Read_REB_SwitchesCPP2.doj: ../src/My_Read_REB_SwitchesCPP2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-94fec6c89c484897716212757f63ab91.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/My_Read_REB_SwitchesCPP2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Write_REB_LEDS_ASM.doj: ../src/My_Write_REB_LEDS_ASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-7e835741da69537631f05c09be6a3341.txt -gnu-style-dependencies -MM -Mo "src/My_Write_REB_LEDS_ASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Write_REB_LEDS_CPP.doj: ../src/My_Write_REB_LEDS_CPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-94fec6c89c484897716212757f63ab91.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/My_Write_REB_LEDS_CPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReadProcessorCyclesASM.doj: ../src/ReadProcessorCyclesASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-7e835741da69537631f05c09be6a3341.txt -gnu-style-dependencies -MM -Mo "src/ReadProcessorCyclesASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReadProcessorCyclesCPP.doj: ../src/ReadProcessorCyclesCPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-94fec6c89c484897716212757f63ab91.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/ReadProcessorCyclesCPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


