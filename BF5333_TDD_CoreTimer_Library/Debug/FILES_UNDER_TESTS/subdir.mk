################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.asm \
../FILES_UNDER_TESTS/ReadProcessorCyclesASM.asm 

CPP_SRCS += \
../FILES_UNDER_TESTS/CoreTimer_Code_COPY.cpp \
../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.cpp \
../FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.cpp \
../FILES_UNDER_TESTS/ReadProcessorCyclesCPP.cpp 

SRC_OBJS += \
./FILES_UNDER_TESTS/CoreTimer_Code_COPY.doj \
./FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.doj \
./FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.doj \
./FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.doj \
./FILES_UNDER_TESTS/ReadProcessorCyclesASM.doj \
./FILES_UNDER_TESTS/ReadProcessorCyclesCPP.doj 

ASM_DEPS += \
./FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.d \
./FILES_UNDER_TESTS/ReadProcessorCyclesASM.d 

CPP_DEPS += \
./FILES_UNDER_TESTS/CoreTimer_Code_COPY.d \
./FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.d \
./FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.d \
./FILES_UNDER_TESTS/ReadProcessorCyclesCPP.d 


# Each subdirectory must supply rules for building sources it contributes
FILES_UNDER_TESTS/CoreTimer_Code_COPY.doj: ../FILES_UNDER_TESTS/CoreTimer_Code_COPY.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/CoreTimer_Code_COPY.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.doj: ../FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/CoreTimer_Interrupt_Code_COPY.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.doj: ../FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/CoreTimer_My_Main_COPY.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.doj: ../FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -si-revision any -g -DCORE0 -D_DEBUG @includes-5d59691d74025e405a9382f574039174.txt -gnu-style-dependencies -MM -Mo "FILES_UNDER_TESTS/Raise_ILAT_ASM_COPY.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/ReadProcessorCyclesASM.doj: ../FILES_UNDER_TESTS/ReadProcessorCyclesASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -si-revision any -g -DCORE0 -D_DEBUG @includes-5d59691d74025e405a9382f574039174.txt -gnu-style-dependencies -MM -Mo "FILES_UNDER_TESTS/ReadProcessorCyclesASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FILES_UNDER_TESTS/ReadProcessorCyclesCPP.doj: ../FILES_UNDER_TESTS/ReadProcessorCyclesCPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "FILES_UNDER_TESTS/ReadProcessorCyclesCPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


