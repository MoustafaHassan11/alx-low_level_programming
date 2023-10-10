#include <stdio.h>

/**
 * print_to_98 - Prints a sequence of natural numbers from a given number to 98.
 * @n: The starting point for the sequence.
 *
 * This function takes an integer 'n' as its parameter and prints a sequence of natural numbers
 * starting from 'n' and continuing until the number 98. If 'n' is less than or equal to 98,
 * it counts up from 'n' to 98, and if 'n' is greater than 98, it counts down from 'n' to 98.
 * The numbers in the sequence are separated by commas and spaces, and a newline is printed at the end.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}

int main(void)
{
	int n = 10;
	print_to_98(n);
	return (0);
}
