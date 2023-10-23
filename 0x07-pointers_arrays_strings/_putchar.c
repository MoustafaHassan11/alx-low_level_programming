#include <stdio.h>
#include <unistd.h>


/**
 * _putchar - Writes a character to stdout.
 *
 * @character: The character to write to the
 * standard output (stdout).
 *
 * Return: On success, it returns 1. On error,
 * it returns -1 and sets errno appropriately.
 *
 * This function is designed to write a
 * single character to the standard output.
 * It is commonly used to print characters to the terminal.
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
