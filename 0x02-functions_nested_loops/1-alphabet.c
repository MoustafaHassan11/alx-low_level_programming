#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z
 * Return: Always 0 (Success)
 *
 * Write a function that prints the alphabet, in lowercase, followed by
 * a new line.
*/

void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
