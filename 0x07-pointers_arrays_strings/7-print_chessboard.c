#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Print a chessboard.
 * @a: Pointer to an 8x8 character array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			putchar(a[row][column]);
		}
		putchar('\n');
	}
}
