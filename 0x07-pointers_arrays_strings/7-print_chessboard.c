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
 * Description:
 * This function counts the characters at the beginning of 's'
 * that match any character in 'accept'.
 * It returns the length of the prefix
 * consisting only of accepted characters.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccepted[256] = {0};


	while (*accept)
	{
		isAccepted[(int)*accept] = 1;
		accept++;
	}


	while (*s && isAccepted[(int)*s])
	{
		count++;
		s++;
	}

	return (count);
}
