################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/Idle_WaitForInterrupts_ASM.asm \
../src/ReadProcessorCyclesASM.asm 

CPP_SRCS += \
../src/FPThread1.cpp \
../src/FPThread2.cpp \
../src/FPThread3.cpp \
../src/FPThread4.cpp \
../src/FPThread5.cpp \
../src/Lab2_BF609_Core0_uTTCOSg2017_main.cpp \
../src/My_Write_REB_LEDS_CPP.cpp \
../src/REB_Thead1.cpp \
../src/REB_Thread2.cpp \
../src/REB_Thread3.cpp \
../src/faultyLED1_Thread.cpp 

SRC_OBJS += \
./src/FPThread1.doj \
./src/FPThread2.doj \
./src/FPThread3.doj \
./src/FPThread4.doj \
./src/FPThread5.doj \
./src/Idle_WaitForInterrupts_ASM.doj \
./src/Lab2_BF609_Core0_uTTCOSg2017_main.doj \
./src/My_Write_REB_LEDS_CPP.doj \
./src/REB_Thead1.doj \
./src/REB_Thread2.doj \
./src/REB_Thread3.doj \
./src/ReadProcessorCyclesASM.doj \
./src/faultyLED1_Thread.doj 

ASM_DEPS += \
./src/Idle_WaitForInterrupts_ASM.d \
./src/ReadProcessorCyclesASM.d 

CPP_DEPS += \
./src/FPThread1.d \
./src/FPThread2.d \
./src/FPThread3.d \
./src/FPThread4.d \
./src/FPThread5.d \
./src/Lab2_BF609_Core0_uTTCOSg2017_main.d \
./src/My_Write_REB_LEDS_CPP.d \
./src/REB_Thead1.d \
./src/REB_Thread2.d \
./src/REB_Thread3.d \
./src/faultyLED1_Thread.d 


# Each subdirectory must supply rules for building sources it contributes
src/FPThread1.doj: ../src/FPThread1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread2.doj: ../src/FPThread2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread3.doj: ../src/FPThread3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread3.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread4.doj: ../src/FPThread4.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread4.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread5.doj: ../src/FPThread5.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread5.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Idle_WaitForInterrupts_ASM.doj: ../src/Idle_WaitForInterrupts_ASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-48d34b6ac170dfd14370185fb7096cef.txt -gnu-style-dependencies -MM -Mo "src/Idle_WaitForInterrupts_ASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Lab2_BF609_Core0_uTTCOSg2017_main.doj: ../src/Lab2_BF609_Core0_uTTCOSg2017_main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Lab2_BF609_Core0_uTTCOSg2017_main.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Write_REB_LEDS_CPP.doj: ../src/My_Write_REB_LEDS_CPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/My_Write_REB_LEDS_CPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/REB_Thead1.doj: ../src/REB_Thead1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/REB_Thead1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/REB_Thread2.doj: ../src/REB_Thread2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/REB_Thread2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/REB_Thread3.doj: ../src/REB_Thread3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/REB_Thread3.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReadProcessorCyclesASM.doj: ../src/ReadProcessorCyclesASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-48d34b6ac170dfd14370185fb7096cef.txt -gnu-style-dependencies -MM -Mo "src/ReadProcessorCyclesASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/faultyLED1_Thread.doj: ../src/faultyLED1_Thread.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-3a189f23cc6cabe8757f3a48c453ce4b.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/faultyLED1_Thread.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


