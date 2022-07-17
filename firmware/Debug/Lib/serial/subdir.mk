################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lib/serial/serial.c 

OBJS += \
./Lib/serial/serial.o 

C_DEPS += \
./Lib/serial/serial.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/serial/%.o Lib/serial/%.su: ../Lib/serial/%.c Lib/serial/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Lib -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Lib-2f-serial

clean-Lib-2f-serial:
	-$(RM) ./Lib/serial/serial.d ./Lib/serial/serial.o ./Lib/serial/serial.su

.PHONY: clean-Lib-2f-serial

