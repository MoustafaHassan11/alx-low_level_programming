#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: print value of n and the stutus
*		greater or is zero or is not less than 6.
*
* Return: 0 (success)
*/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
	printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
	printf("Last digit of %i is  and %i is less than 6 and not 0\n", n);
	return (0);
}
