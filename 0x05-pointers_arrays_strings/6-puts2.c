#include "main.h"

/**
 * puts2 - Print every other character of a string,
 * starting with the first character.
 *
 * This function takes a pointer to a string 'str'
 * and prints every other character
 * of the string, starting with the first character,
 * followed by a new line.
 *
 * @str: A pointer to the string to be printed.
 */

void puts2(char *str)
{

	for (i = 0 ; str[i] != '\0'; i++)
	{

	if (i % 2 == 0)

	putchar(str[i]);

	}
	putchar('\n');
}
