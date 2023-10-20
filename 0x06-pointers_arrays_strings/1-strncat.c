#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings with a
 * specified maximum number of characters.
 * @dest: The destination string where
 * characters from source will be added.
 * @src: The characters from source are copied
 * to the end of the destination string.
 * @n: The maximum number of characters to copy from source.
 *
 * Return: The starting address of the concatenated string.
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *result = dest;

	while (*dest)
	{
	dest++;
	}

	while (*src && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';

	return (result);
}
