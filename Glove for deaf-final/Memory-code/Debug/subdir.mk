################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Dio_Prog.c \
../EEPROM_prog.c \
../I2C_prog.c \
../LCD_prog.c \
../led_prog.c \
../main.c 

OBJS += \
./Dio_Prog.o \
./EEPROM_prog.o \
./I2C_prog.o \
./LCD_prog.o \
./led_prog.o \
./main.o 

C_DEPS += \
./Dio_Prog.d \
./EEPROM_prog.d \
./I2C_prog.d \
./LCD_prog.d \
./led_prog.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


