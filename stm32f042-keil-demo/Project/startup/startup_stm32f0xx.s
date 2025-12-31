; startup_stm32f0xx.s - Placeholder startup file
; NOTE: Use the official ST startup file for your exact MCU.
; This file should contain the vector table and Reset_Handler.
; If you don't have the ST startup file, download the STM32F0 StdPeriph package
; from ST and copy the appropriate startup file (startup_stm32f0xx.s) into this folder.

    AREA    |.text|, CODE, READONLY
    EXPORT  Reset_Handler
    EXPORT  __Vectors
__Vectors
    ; Minimal placeholder; Keil requires a valid startup with full vector table.
    ALIGN
    DCD 0x20001000  ; initial SP (example)
    DCD Reset_Handler

Reset_Handler
    B .

    END
