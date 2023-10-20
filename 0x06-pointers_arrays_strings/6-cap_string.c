#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (index == 0 || str[index - 1] == ' ' || str[index - 1] == '\t' ||
				str[index - 1] == '\n' || str[index - 1] == ',' || str[index - 1] == ';' ||
				str[index - 1] == '.' || str[index - 1] == '!' || str[index - 1] == '?' ||
				str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')' ||
				str[index - 1] == '{' || str[index - 1] == '}')
			{
				str[index] = str[index] - 'a' + 'A';
			}
		}

		index++;
	}

	return (str);
}
