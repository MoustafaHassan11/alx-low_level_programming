#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all the numbers
 *	of base 16 in lowercase.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int firstNumber, secondNumber, thirdNumber;

	for (firstNumber = 0; firstNumber < 8; firstNumber++)
	{
		secondNumber = firstNumber + 1;
		while (secondNumber < 9)
		{
			for (thirdNumber = secondNumber + 1; thirdNumber < 10; thirdNumber++)
			{
				putchar((firstNumber % 10) + '0');
				putchar((secondNumber % 10) + '0');
				putchar((thirdNumber % 10) + '0');

				if (firstNumber == 7 && secondNumber == 8 && thirdNumber == 9)
					break;

				putchar(',');
				putchar(' ');
			}
			secondNumber++;
		}
	}
	putchar('\n');

	return (0);
}
