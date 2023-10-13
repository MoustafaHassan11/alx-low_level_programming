#include "main.h"

/**
 * print_diagonal - Prints a diagonal pattern of backslashes.
 *
 * @numberOfTimesTheCharacter: The number of times
 * the backslash character is printed.
 *
 * This function prints a diagonal pattern of backslash
 * characters. The number of
 * backslashes printed is determined by the
 * `numberOfTimesTheCharacter` parameter.
 * The backslashes create a diagonal effect with leading spaces.
 *
 * @numberOfTimesTheCharacter: The number of backslashes to be printed.
 */
void print_diagonal(int numberOfTimesTheCharacter)
{
	int length, space;

	if (numberOfTimesTheCharacter > 0)
	{
		for (length = 0; length < numberOfTimesTheCharacter; length++)
		{
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (length == (numberOfTimesTheCharacter - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
