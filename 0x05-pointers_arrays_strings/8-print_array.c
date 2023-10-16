#include "main.h"
#include <stdio.h>

/**
 * print_array - Show a list of candies (numbers) to your friend.
 *
 * This function takes an array of integers 'a'
 * and the number of candies to show 'n'.
 * It shows all the candies in the list in the same order
 * as they are stored in the array.
 * The candies are separated by a comma and a space,
 * and it adds a new line at the end.
 *
 * @a: A pointer to the array of candies (numbers).
 * @n: The number of candies (numbers) to show.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	{
	printf(", ");
	}
	}

	printf("\n");
}
