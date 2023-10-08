#include <stdio.h>

/**
 * main - Entry
 *
 * Description: print a to z in lower case and upper case
 *
 * Return: 0 (success)
*/

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
	putchar(letters);
	letters++;
	}
	putchar('\n');
	return (0);

}
