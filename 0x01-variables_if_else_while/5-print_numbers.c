#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers from 0 to 9, followed by a new line
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	printf("%i", digit);
	digit++;
	}

	printf("\n");
	return (0);
}
