#include "main.h"

/**
 * puts_half - Print the second half of a string,
 * ignoring the middle character if it's odd.
 *
 * This function takes a pointer to a string 'str'
 * and prints the second half of the string.
 * If the number of characters is odd, it prints
 * the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 *
 * @str: A pointer to the string to be printed.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
