#include "main.h"

/**
 * print_chessboard - Print the chessboard.
 *
 * Return: void.
 * @a: Array bidemensional to test.
 *
 * Author: Jeremias Erba.
*/

void print_chessboard(char a[8][8])
{
	int column, row;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
		{
			putchar(a[column][row]);
		}
		putchar('\n');
	}
}
