#include "main.h"
#include <stddef.h>

/**
 * _strchr - Find the first occurrence of a character in a string.
 *
 * @s: Pointer to the string to search.
 * @c: The character to find in the string.
 *
 * Return: Pointer to the first occurrence of c in s,
 * or NULL if not found.
 *
 * Description:
 * This function searches for the first occurrence of the
 * character 'c' in the string 's'.
 * If 'c' is found in 's', it returns a pointer to that character;
 * otherwise, it returns NULL.
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
		if (s[itr] == c)
		{
			return (s + itr);
		}

		return (NULL);
}
