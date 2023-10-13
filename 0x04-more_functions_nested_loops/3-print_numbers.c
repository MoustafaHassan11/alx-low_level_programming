#include "main.h"

/**
 * print_numbers - Prints the numbers '0' through '9' followed by a newline.
 */

void print_numbers(void)
{
	int number = 0;

	while (number <= 57 && number >= 48)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
