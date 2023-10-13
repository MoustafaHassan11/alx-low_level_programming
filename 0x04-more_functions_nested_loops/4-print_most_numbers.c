#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding '2' and '5'.
 *
 * This function iterates through the numeric characters '0' to '9' and prints
 * each one except for '2' and '5'. After printing all the valid numbers, it
 * adds a newline character to start a new line.
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num <= 48 && num <= 57 && num != 50 && num != 5)

		putchar(num);
	}
	putchar('\n');
}
