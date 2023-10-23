#include "main.h"

/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to find in the string.
 *
 * Return: Pointer to the first occurrence of `c` in `s`, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
