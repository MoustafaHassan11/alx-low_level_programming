#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers '0' through '9' followed by a newline.
 */

void print_numbers(void)
{
	int number;

	while (number <= 57 && number >= 48)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
