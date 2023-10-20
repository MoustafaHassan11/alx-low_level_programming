#include "main.h"

/**
 * leet - Encodes a string into "leet" language.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leetMap[] = "aAeEoOtTlL";
	char leetReplacements[] = "44337711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			if (str[i] == leetMap[j])
			{
				str[i] = leetReplacements[j];
				break;
			}
		}
	}

	return (str);
}
