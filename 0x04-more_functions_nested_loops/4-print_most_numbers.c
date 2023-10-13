#include "main.h"
#include <stdio.h>

/**
 *	print_numbers - Prints the numbers from 0 to 9,
 *	followed by a newline character.
 *
 *	This function iterates through the numeric characters '0' to '9'.
 *
 *	Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
