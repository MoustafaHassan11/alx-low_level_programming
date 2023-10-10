#include <stdio.h>
#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: The integer to find the absolute value of
 *
 * Return: The absolute value of the integer.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
