#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of two digits.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0, digit2;

	while (digit <= 9)
	{
	digit2 = 0;
	while (digit2 <= 9)
	{
	if (digit != digit2 && digit < digit2)
	{
	putchar(digit + '0');
	putchar(digit2 + '0');
	if (digit != 8 || digit2 != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	digit2++;
	}
	digit++;
	}
	putchar('\n');

	return (0);
}
