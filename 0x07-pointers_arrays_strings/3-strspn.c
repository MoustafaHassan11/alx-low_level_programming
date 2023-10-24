#include "main.h"

/**
 * _strspn - Get the length of the prefix substring.
 * @string: The string to search in.
 * @accept: The characters to match.
 * Return: Number of matching characters at the start of 'string'.
 * This function returns the length of the initial segment of 'string'
 * containing only characters found in 'accept'.
 */

unsigned int _strspn(char *string, char *accept)
{
	unsigned int count = 0;

	while (*string)
	{
		char *a = accept;
		int match = 0;

		while (*a)
		{
			if (*string == *a)
			{
				count++;
				match = 1;
				break;
			}
			a++;
		}

		if (match == 0)
		{
			break;
		}

		string++;
	}

	return (count);
}
