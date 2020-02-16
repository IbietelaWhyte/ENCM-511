################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../E_UNIT/__EUNIT2017_TestControl_BF5333_TDD_CoreTimer_Library.cpp 

SRC_OBJS += \
./E_UNIT/__EUNIT2017_TestControl_BF5333_TDD_CoreTimer_Library.doj 

CPP_DEPS += \
./E_UNIT/__EUNIT2017_TestControl_BF5333_TDD_CoreTimer_Library.d 


# Each subdirectory must supply rules for building sources it contributes
E_UNIT/__EUNIT2017_TestControl_BF5333_TDD_CoreTimer_Library.doj: ../E_UNIT/__EUNIT2017_TestControl_BF5333_TDD_CoreTimer_Library.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="BF5333_TDD_CoreTimer_Library" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-f10a6f89462d2e0b3e08b7dfa7ac8504.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "E_UNIT/__EUNIT2017_TestControl_BF5333_TDD_CoreTimer_Library.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


