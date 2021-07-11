/*
* Initializing a variable as const by using PROGMEM
* Author : Akshul
* Created On : 11 July 21

* Memory usage - 
Program:     184 bytes (0.6% Full)
(.text + .data + .bootloader)
Data:          2 bytes (0.2% Full)
(.data + .bss + .noinit)
text    data     bss     dec     hex filename
 182       2      0     184      b8 *.elf
*/

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/pgmspace.h>

const PROGMEM uint16_t constant_value = 2;
int variable = 1;

int main()
{
	variable = variable * constant_value;
}
