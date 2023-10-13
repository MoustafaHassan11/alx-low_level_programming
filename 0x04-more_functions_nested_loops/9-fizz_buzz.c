#include "main.h"

/**
 * main - Entry point for the FizzBuzz program.
 *
 * This program prints numbers from 1 to 100.
 * For multiples of three, it prints "Fizz"
 * instead of the number, for multiples of five,
 * it prints "Buzz," and for numbers that
 * are multiples of both three and five, it prints "FizzBuzz."
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0)
			printf("Fizz");

		if (number % 5 == 0)
			printf("Buzz");

		if (number % 3 != 0 && number % 5 != 0)
			printf("%d", number);

		if (number < 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}

