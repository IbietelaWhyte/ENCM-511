################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/pinmux/GeneratedSources/pinmux_config.c 

SRC_OBJS += \
./system/pinmux/GeneratedSources/pinmux_config.doj 

C_DEPS += \
./system/pinmux/GeneratedSources/pinmux_config.d 


# Each subdirectory must supply rules for building sources it contributes
system/pinmux/GeneratedSources/pinmux_config.doj: ../system/pinmux/GeneratedSources/pinmux_config.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="V3_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-94fec6c89c484897716212757f63ab91.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "system/pinmux/GeneratedSources/pinmux_config.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


