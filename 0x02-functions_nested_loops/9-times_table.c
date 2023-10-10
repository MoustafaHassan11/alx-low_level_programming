#include <stdio.h>
#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table
 * starting with 0 in a different format.
 *
 * Return: void
 */
void times_table(void)
{
	int number, multi, result;

	for (number = 0; number < 10; number++)
	{
		for (multi = 0; multi < 10; multi++)
		{
			result = (number * multi);

			if (multi == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((result / 10) + '0');
				}

				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
