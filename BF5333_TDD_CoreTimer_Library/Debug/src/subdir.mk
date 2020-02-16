################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BF5333_TDD_CoreTimer_Library_EUNIT2017_main.cpp \
../src/CoreTimerTests_Interrupts.cpp \
../src/Subroutines_and_ISR.cpp 

SRC_OBJS += \
./src/BF5333_TDD_CoreTimer_Library_EUNIT2017_main.doj \
./src/CoreTimerTests_Interrupts.doj \
./src/Subroutines_and_ISR.doj 

CPP_DEPS += \
./src/BF5333_TDD_CoreTimer_Library_EUNIT2017_main.d \
./src/CoreTimerTests_Interrupts.d \
./src/Subroutines_and_ISR.d 


# Each subdirectory must supply rules for building sources it contributes
src/BF5333_TDD_CoreTimer_Library_EUNIT2017_main.doj: ../src/BF5333_TDD_CoreTimer_Library_EUNIT2017_main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/BF5333_TDD_CoreTimer_Library_EUNIT2017_main.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/CoreTimerTests_Interrupts.doj: ../src/CoreTimerTests_Interrupts.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/CoreTimerTests_Interrupts.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Subroutines_and_ISR.doj: ../src/Subroutines_and_ISR.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Subroutines_and_ISR.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


