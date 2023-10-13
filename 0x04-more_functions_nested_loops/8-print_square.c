#include "main.h"

/**
 * print_square - Prints a square made of '#' characters,
 * followed by a newline.
 *
 * @size: The size of the square.
 *
 * This function prints a square made of '#' characters
 * with a size determined by
 * the `size` parameter. If `size` is 0 or less,
 * it prints only a newline character.
 *
 * @size: The size of the square.
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

