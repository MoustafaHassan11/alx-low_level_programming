#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 *
 * This function counts the number of characters
 * in the string pointed to by 's'
 * until it reaches the null terminator ('\0').
 *
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{

int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
		return (length);
}
