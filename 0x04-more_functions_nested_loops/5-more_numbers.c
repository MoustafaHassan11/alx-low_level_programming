#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints a pattern of numbers from 0 to 14, repeated 10 times.
 *
 * This function uses nested loops to print
 * a pattern of numbers from 0 to 14.
 * The pattern is repeated 10 times,
 * and each line of numbers is followed by a newline.
 */

void more_numbers(void)
{

	int num1, num2;

	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			if (num2 >= 10)
			{
				_putchar('1');
			}
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
