################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DemoTests_BF609.cpp \
../src/FPThread1.cpp \
../src/FPThread2.cpp \
../src/FPThread3.cpp \
../src/My_Write_REB_LEDS_CPP.cpp \
../src/Test_Lab2_BF609_Core0.cpp \
../src/Test_Lab2_BF609_Core0_EUNIT2017_main.cpp 

SRC_OBJS += \
./src/DemoTests_BF609.doj \
./src/FPThread1.doj \
./src/FPThread2.doj \
./src/FPThread3.doj \
./src/My_Write_REB_LEDS_CPP.doj \
./src/Test_Lab2_BF609_Core0.doj \
./src/Test_Lab2_BF609_Core0_EUNIT2017_main.doj 

CPP_DEPS += \
./src/DemoTests_BF609.d \
./src/FPThread1.d \
./src/FPThread2.d \
./src/FPThread3.d \
./src/My_Write_REB_LEDS_CPP.d \
./src/Test_Lab2_BF609_Core0.d \
./src/Test_Lab2_BF609_Core0_EUNIT2017_main.d 


# Each subdirectory must supply rules for building sources it contributes
src/DemoTests_BF609.doj: ../src/DemoTests_BF609.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/DemoTests_BF609.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread1.doj: ../src/FPThread1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread2.doj: ../src/FPThread2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FPThread3.doj: ../src/FPThread3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FPThread3.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/My_Write_REB_LEDS_CPP.doj: ../src/My_Write_REB_LEDS_CPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/My_Write_REB_LEDS_CPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Test_Lab2_BF609_Core0.doj: ../src/Test_Lab2_BF609_Core0.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Test_Lab2_BF609_Core0.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Test_Lab2_BF609_Core0_EUNIT2017_main.doj: ../src/Test_Lab2_BF609_Core0_EUNIT2017_main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Test_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-65bf5039ab56df6d1a2ea202906bcc6a.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Test_Lab2_BF609_Core0_EUNIT2017_main.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


