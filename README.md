# STM32F107 Makefile FreeRTOS

[![Build Status](https://travis-ci.org/runmec/stm32f107_makefile_freertos.svg?branch=master)](https://travis-ci.org/runmec/stm32f107_makefile_freertos)

## Requirement

Working GNU ARM GCC (https://launchpad.net/gcc-arm-embedded)

Texane stlink to flash the STM32F10x (https://github.com/texane/stlink)

FreeRTOS Source (http://www.freertos.org)

LWIP Source (https://savannah.nongnu.org/projects/lwip/)

STM32F10x Library3.5

FreeRTOS V9.0

LWIP 2.0.2

## Usage

### build project

```$ make```

### clean project

```$ make clean```

### download to mcu by stlink 
```$ make flash```

### erase flash
```$ make erase```

## Example

mcu: STM32F107VCT6

GPIOE13--Led

