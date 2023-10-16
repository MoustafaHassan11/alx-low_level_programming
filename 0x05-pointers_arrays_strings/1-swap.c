#include "main.h"

/**
 * swap_int - Swap the values of two integers using pointers.
 *
 * This function takes two pointers to integers as input and swaps the values
 * they point to. After the function is executed,
 * the values of 'a' and 'b' will
 * be exchanged.
 *
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
