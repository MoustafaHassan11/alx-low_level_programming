#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string, up to a
 * specified maximum number of characters.
 * @dest: The destination string where characters
 * from source will be added.
 * @src: The source string from which
 * characters are copied.
 * @n: The maximum number of characters
 * to copy from source.
 *
 * Return: The starting address of the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *output = dest;
	int i = 0;

	while (i < n)
	{
	if (src[i] == '\0')
	{

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	break;
	}

	dest[i] = src[i];
	i++;
	}

	return (output);
}
