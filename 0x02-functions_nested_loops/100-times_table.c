#include "main.h"

/**
 * print_times_table - Print the n times table.
 * @givenNumber: The number for the times table (0 to 15).
 *
 * Description:
 * This function prints the times table for a given number, starting with 0.
 */
void print_times_table(int givenNumber)
{
	int row, column, product;

	/* Check if the givenNumber is within the valid range (0 to 15) */
	if (givenNumber < 0 || givenNumber > 15)
		return;

	/* Loop through each row */
	for (row = 0; row <= givenNumber; row++)
	{
		/* Loop through each column */
		for (column = 0; column <= givenNumber; column++)
		{
			/* Calculate the product of row and column */
			product = row * column;

			/* Print the result with proper formatting */
			if (column == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');

				if (product >= 100)
					_putchar(product / 100 + '0');
				if (product >= 10)
					_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		/* Move to the next row */
		_putchar('\n');
	}
}
