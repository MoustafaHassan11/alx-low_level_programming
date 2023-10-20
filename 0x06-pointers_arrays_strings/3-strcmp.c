#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 *   Positive value if s1 is greater than s2.
 *   Negative value if s1 is less than s2.
 *   0 if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 > *s2)
	{
		result = *s1 - *s2;
	}
	else if (*s1 < *s2)
	{
		result = *s1 - *s2;
	}

	return (result);
}
