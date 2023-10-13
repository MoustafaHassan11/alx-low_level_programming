#include "main.h"

/**
 * print_most_numbers - Prints the numbers '0' through '9'
 * excluding '2' and '4'.
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57 && num >= 48 && num != 50 && num != 52)
	{

	_putchar(num);

	num++;

	}
	_putchar('\n');
}
