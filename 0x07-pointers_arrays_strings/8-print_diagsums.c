#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum_primary = 0, sum_secondary = 0;

	for (int i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
