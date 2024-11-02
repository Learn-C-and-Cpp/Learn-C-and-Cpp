################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
wireless/%.obj: ../wireless/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"/home/kensus-t480/ti/ccs1210/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M3 --code_state=16 --float_support=none -me --include_path="/home/kensus-t480/DeveloperCode/Learn-C-and-Cpp/computerSystems_2024/empty_CC2650STK_TI" --include_path="/home/kensus-t480/DeveloperCode/Learn-C-and-Cpp/computerSystems_2024/empty_CC2650STK_TI" --include_path="/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/products/cc26xxware_2_24_03_17272" --include_path="/home/kensus-t480/ti/ccs1210/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --define=ccs -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="wireless/$(basename $(<F)).d_raw" --obj_directory="wireless" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


