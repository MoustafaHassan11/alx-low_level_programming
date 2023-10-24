#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes.
 * @string: The string to search in.
 * @accept: The characters to match.
 * Return: Pointer to the first match in 'string' or NULL if none found.
 */
char *_strpbrk(char *string, char *accept)
{
	while (*string)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*string == *ptr)
				return (string);
			ptr++;
		}
		string++;
	}
	return (NULL);
}
