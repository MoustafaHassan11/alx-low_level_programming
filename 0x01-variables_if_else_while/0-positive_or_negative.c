#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: postive or negtive validation
*
* Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%i is postive\n");
	esle if (n < 0)
	printf("%i is negtive\n");
	esle
	printf("%i is zero\n");
	return (0);
}
