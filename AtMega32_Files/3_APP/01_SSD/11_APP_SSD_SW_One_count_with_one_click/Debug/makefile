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
11_APP_SSD_SW_One_count_with_one_click.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: 11_APP_SSD_SW_One_count_with_one_click.elf secondary-outputs

# Tool invocations
11_APP_SSD_SW_One_count_with_one_click.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,11_APP_SSD_SW_One_count_with_one_click.map -mmcu=atmega32 -o "11_APP_SSD_SW_One_count_with_one_click.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

11_APP_SSD_SW_One_count_with_one_click.lss: 11_APP_SSD_SW_One_count_with_one_click.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 11_APP_SSD_SW_One_count_with_one_click.elf  >"11_APP_SSD_SW_One_count_with_one_click.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 11_APP_SSD_SW_One_count_with_one_click.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 11_APP_SSD_SW_One_count_with_one_click.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 11_APP_SSD_SW_One_count_with_one_click.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
