#include "main.h"

/**
 * print_rev - Print a string in reverse followed by a new line.
 *
 * This function takes a pointer to a string 's'
 * and calculates the length of the
 * string. Then, it prints the characters of the string
 * in reverse order, followed
 * by a new line character '\n'.
 *
 * @s: A pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])

	i++;

	while (i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
