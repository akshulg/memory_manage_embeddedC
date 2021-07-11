/*
* Initializing a constant value without using const 
* Author : Akshul
* Created On : 11 July 21

* Memory usage - 
Program:     202 bytes (0.6% Full)
(.text + .data + .bootloader)
Data:          4 bytes (0.2% Full)
(.data + .bss + .noinit)
text    data     bss     dec     hex filename
198       4       0     202      ca *.elf
*/

#define F_CPU 16000000UL
#include <avr/io.h>

uint16_t constant_value = 2;
int variable = 1;

int main()
{
	variable = variable * constant_value;
}
