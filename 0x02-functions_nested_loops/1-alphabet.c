#include <stdio.h>
#include "mian.h"

/**
 * print_alphabet - Print the lowercase alphabet followed by a newline
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
