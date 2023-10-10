#include <stdio.h>
#include "main.h"

/**
 * _islower - Check if a character is a lowercase letter
 * @num: The character to be checked
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */

int _islower(int num)
{
	if (num > 96 && num < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
