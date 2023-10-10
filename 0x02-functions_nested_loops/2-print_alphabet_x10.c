#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet from a-z
 *
 * Return: Always (0) success
 */

void print_alphabet_x10(void)
{
	char ch;
	int num = 0;

	for (; num < 10; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
