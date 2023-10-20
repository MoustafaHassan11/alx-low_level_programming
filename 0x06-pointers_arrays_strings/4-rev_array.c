#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @array: The given array of numbers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *array, int n)
{
	int tmp;
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		tmp = array[first];
		array[first] = array[last];
		array[last] = tmp;

		first++;


		last--;
	}
}
