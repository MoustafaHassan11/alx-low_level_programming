#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Return: void
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num < 98; num++)
		{
			printf("%d, ", num);
		}
	}
	else
	{
		for (num = n; num > 98; num--)
		{
			printf("%d, ", num);
		}
	}
	printf("98\n");
}
