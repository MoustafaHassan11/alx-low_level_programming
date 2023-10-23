#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of characters.
 *
 * @s: The string to search.
 * @accept: The set of characters to look for in the string.
 *
 * Return: A pointer to the first occurrence in
 * the string 's' of any of the
 * characters in the 'accept' string, or NULL
 * if no match is found.
 *
 * Description:
 * This function searches the string 's' for the
 * first character that matches
 * any of the characters in the 'accept' string.
 * If a match is found, it returns
 * a pointer to the matching character in 's'.
 * If no match is found, it returns NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
