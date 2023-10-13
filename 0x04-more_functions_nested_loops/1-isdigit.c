#include "main.h"

/**
 * _isupper - checks if a character is a digit (0-9).
 *
 * @num: The character to be checked.
 *
 * Return: 1 if the character is a digit (0-9), 0 otherwise.
 */
int _isupper(int num)
{
	if (num >= 48 && num <= 57)
	{
	return (1);
	}

	return (0);
}

