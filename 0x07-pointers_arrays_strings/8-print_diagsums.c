#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum_one = 0;
	int sum_two = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_one += a[i * size + i];
		sum_two += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_one, sum_two);
}
