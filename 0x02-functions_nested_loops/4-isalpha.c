#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Check if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);

}
