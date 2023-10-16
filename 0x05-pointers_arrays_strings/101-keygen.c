#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random passwords for 101-crackne
 *
 * Return: zero
 */

int main(void)
{
	int num;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() & 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}

