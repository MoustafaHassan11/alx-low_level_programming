#include "main.h"

/**
 * _puts - Print a string followed by a new line to stdout.
 *
 * This function takes a pointer to a string 'str' and prints each character of
 * the string to the standard output (stdout) using putchar. After printing all
 * the characters, it appends a newline character to start a new line.
 *
 * @str: A pointer to the string to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;

	}
	putchar('\n');
}
