#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of underscores followed by a newline character.
 *
 * @numLines: The number of underscores to be printed in the line.
 *
 * This function prints a line of underscores
 * .The number of underscores printed
 * is determined by the `numLines` parameter.
 * After printing the specified number
 * of underscores, it adds a newline character to start a new line.
 *
 * @numLines: The number of underscores to be printed.
 */

void print_line(int numLines)
{
	while (numLines-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
