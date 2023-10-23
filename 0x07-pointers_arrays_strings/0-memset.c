#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area `s` after filling.
 *
 * This function sets the first `n` bytes of memory at `s`
 * to the constant byte `b`.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
