#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @number: The number to find the last digit of
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int number)
{
	int last_number;

	if (numer < 0)
	{
		last_number = (numer % 10) * -1;
	}
	else
	{
		last_number = numer % 10;
	}

	_putchar(last_number + '0');
	return (last_number);
}
