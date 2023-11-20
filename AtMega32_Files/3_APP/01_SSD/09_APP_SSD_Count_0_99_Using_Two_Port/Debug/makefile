################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
09_APP_SSD_Count_0_99_Using_Two_Port.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: 09_APP_SSD_Count_0_99_Using_Two_Port.elf secondary-outputs

# Tool invocations
09_APP_SSD_Count_0_99_Using_Two_Port.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,09_APP_SSD_Count_0_99_Using_Two_Port.map -mmcu=atmega32 -o "09_APP_SSD_Count_0_99_Using_Two_Port.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

09_APP_SSD_Count_0_99_Using_Two_Port.lss: 09_APP_SSD_Count_0_99_Using_Two_Port.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 09_APP_SSD_Count_0_99_Using_Two_Port.elf  >"09_APP_SSD_Count_0_99_Using_Two_Port.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 09_APP_SSD_Count_0_99_Using_Two_Port.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 09_APP_SSD_Count_0_99_Using_Two_Port.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 09_APP_SSD_Count_0_99_Using_Two_Port.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
