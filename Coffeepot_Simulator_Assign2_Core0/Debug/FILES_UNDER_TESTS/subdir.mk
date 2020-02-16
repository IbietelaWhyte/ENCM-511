################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.asm 

CPP_SRCS += \
../FILES_UNDER_TESTS/CoreTimer_Code_COPY.cpp \
../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.cpp \
../FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.cpp 

SRC_OBJS += \
./FILES_UNDER_TESTS/CoreTimer_Code_COPY.doj \
./FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.doj \
./FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.doj \
./FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.doj 

ASM_DEPS += \
./FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.d 

CPP_DEPS += \
./FILES_UNDER_TESTS/CoreTimer_Code_COPY.d \
./FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.d \
./FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.d 


# Each subdirectory must supply rules for building sources it contributes
FILES_UNDER_TESTS/CoreTimer_Code_COPY.doj: ../FILES_UNDER_TESTS/CoreTimer_Code_COPY.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/CoreTimer_Code_COPY.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.doj: ../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.doj: ../FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-0f1853deba659e7c67c731a2933d2528.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.doj: ../FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Coffeepot_Simulator_Assign2_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-f51d15b419499b9bdcdef7e93e167bf8.txt -gnu-style-dependencies -MM -Mo "FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


