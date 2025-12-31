# STM32F042 Keil StdPeriph Demo

说明
- 目标 MCU：STM32F042x6
- LED 引脚：PA5（可根据硬件修改）
- 时钟：HSI (8 MHz) -> PLL -> 48 MHz
- IDE：Keil MDK-ARM (MDK5, .uvprojx)

包含内容
- Project/Keil/STM32F042_Demo.uvprojx (.uvoptx)
- Project/Inc/stm32f0xx_conf.h
- Project/Src/main.c
- Project/Src/system_stm32f0xx.c
- Project/startup/startup_stm32f0xx.s
- Drivers/README.md (说明如何获取 StdPeriph)

快速使用
1. 克隆仓库并切换到 main 分支（或在 GitHub 页面直接查看/下载）。
2. 在 Keil 中打开 `stm32f042-keil-demo/Project/Keil/STM32F042_Demo.uvprojx` （MDK5）。
3. 编译并下载到目标板（确保已添加 startup 文件和 Drivers 中的 StdPeriph 源，或按 Drivers/README.md 获取）。
4. 若需修改 LED 引脚或时钟，请编辑 `Project/Src/main.c` 与 `Project/Src/system_stm32f0xx.c`。

注意
- 本示例提供最小 demo 源文件和一个 Keil 项目模板。由于 STM 官方 StdPeriph 库版权原因，本仓库不包含完整官方库源代码。请按照 Drivers/README.md 指引下载并添加官方 StdPeriph 驱动到 `Drivers/STM32F0xx_StdPeriph/` 下以通过编译。

Commit: Add STM32F042 Keil demo (StdPeriph)
