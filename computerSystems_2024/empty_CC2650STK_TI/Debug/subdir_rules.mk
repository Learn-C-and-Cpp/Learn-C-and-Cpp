################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"/home/kensus-t480/ti/ccs1210/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M3 --code_state=16 --float_support=none -me --include_path="/home/kensus-t480/DeveloperCode/Learn-C-and-Cpp/computerSystems_2024/empty_CC2650STK_TI" --include_path="/home/kensus-t480/DeveloperCode/Learn-C-and-Cpp/computerSystems_2024/empty_CC2650STK_TI" --include_path="/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/products/cc26xxware_2_24_03_17272" --include_path="/home/kensus-t480/ti/ccs1210/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --define=ccs -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1067269937:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1067269937-inproc

build-1067269937-inproc: ../empty.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/home/kensus-t480/ti/xdctools_3_32_00_06_core/xs" --xdcpath="/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/packages;/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/products/tidrivers_cc13xx_cc26xx_2_21_01_01/packages;/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/products/bios_6_46_01_38/packages;/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/products/uia_2_01_00_01/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M3 -p ti.platforms.simplelink:CC2650F128 -r release -c "/home/kensus-t480/ti/ccs1210/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS" --compileOptions "-mv7M3 --code_state=16 --float_support=none -me --include_path=\"/home/kensus-t480/DeveloperCode/Learn-C-and-Cpp/computerSystems_2024/empty_CC2650STK_TI\" --include_path=\"/home/kensus-t480/DeveloperCode/Learn-C-and-Cpp/computerSystems_2024/empty_CC2650STK_TI\" --include_path=\"/home/kensus-t480/ti/tirtos_cc13xx_cc26xx_2_21_01_08/products/cc26xxware_2_24_03_17272\" --include_path=\"/home/kensus-t480/ti/ccs1210/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include\" --define=ccs -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi  " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-1067269937 ../empty.cfg
configPkg/compiler.opt: build-1067269937
configPkg: build-1067269937


