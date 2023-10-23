#include "main.h"

/**
 * rot13 - Encodes a string using the rot13 algorithm.
 *
 * This function takes an input string and applies the rot13 transformation,
 * which rotates each character in the string by 13 positions in the alphabet.
 * It works for both lowercase and uppercase letters without changing
 * non-alphabet characters.
 *
 * @param input_string: The array of characters to be modified.
 *
 * Return: A pointer to the modified string after applying the rot13 transformation.
 *
 * Author: Youssef Hassane
 */
char *rot13(char *input_string)
{
	for (int i = 0; input_string[i] != '\0'; i++)
	{
		if ((input_string[i] >= 'a' && input_string[i] <= 'z') ||
			(input_string[i] >= 'A' && input_string[i] <= 'Z'))
		{
			char base = (input_string[i] >= 'a' && input_string[i] <= 'z') ? 'a' : 'A';
			input_string[i] = ((input_string[i] - base + 13) % 26) + base;
		}
	}

	return (input_string);
}
