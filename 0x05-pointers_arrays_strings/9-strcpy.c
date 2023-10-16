#include "main.h"

/**
 * _strcpy - Make a copy of a sentence from one paper to another.
 *
 * This function takes two pieces of paper: 'src' (the source)
 * and 'dest' (the destination).
 * It copies the sentence from 'src' to 'dest',
 * and it returns 'dest' to show the copy.
 *
 * @dest: The destination paper where the copy will be made.
 * @src: The source paper with the sentence to be copied.
 *
 * Return: The destination paper 'dest' with the copied sentence.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	dest[i] = '\0';
	return (dest);
}
