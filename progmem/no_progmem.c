/*
* Initializing a variable as const without using PROGMEM
* Author : Akshul
* Created On : 11 July 21

* Memory usage - 
Program:     184 bytes (0.6% Full)
(.text + .data + .bootloader)
Data:          4 bytes (0.1% Full)
(.data + .bss + .noinit)
text    data     bss     dec     hex filename
180       4      0     184      b8 *.elf
*/

#define F_CPU 16000000UL
#include <avr/io.h>

const uint16_t constant_value = 2;
int variable = 1;

int main()
{
	variable = variable * constant_value;
}
