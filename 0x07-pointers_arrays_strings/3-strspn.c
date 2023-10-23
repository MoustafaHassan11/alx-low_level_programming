#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring.
 *
 * @s: Pointer to the string to examine.
 * @accept: Pointer to the set of accepted characters.
 *
 * Return: The number of characters at the start of 's'
 * that match any character in 'accept'.
 *
 * This function counts the characters at the beginning of 's'
 * that match any character in 'accept'.
 * It returns the length of the prefix
 * consisting only of accepted characters.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
