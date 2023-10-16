#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer, taking into account
 * any positive or negative signs before the number.
 *
 * This function takes a string 's' and searches for a hidden number,
 * considering any positive (+) or negative (-) signs before the number.
 *
 * @s: The string containing the number.
 *
 * Return: The integer value found in the string, considering any signs.
 */

int _atoi(char *s)
{

unsigned int num = 0;
int sign = 1;

do {

	if (*s == '-')
		sign *= -1;
	else if (*s >= '0' && *s <= '9')
		num = (num * 10) + (*s - '0');
	else if (num > 0)
		break;

	} while (*s++);

	return (num * sign);

}
