#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the lowercase alphabet 10 times,
 * each followed by a new line
*/

void print_alphabet_x10(void)
{
	char ch;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (ch = 'a'; chr <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
