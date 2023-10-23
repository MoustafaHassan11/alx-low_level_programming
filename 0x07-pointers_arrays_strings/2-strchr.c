#include "main.h"

/**
 * _strchr - Find the first occurrence
 * of a character in a string.
 *
 * @s: Pointer to the string to search.
 * @c: The character to find in the string.
 *
 * Return: Pointer to the first occurrence of `c`
 * in s, or NULL if not found.
 *
 * Description:
 * This function searches for the first occurrence
 * of the character c in the string s
 * It returns a pointer to the character if found
 * or NULL if c is not in the string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
