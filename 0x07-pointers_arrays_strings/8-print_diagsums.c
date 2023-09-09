#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals de a
 * square matrix of integers.
 *
 * Return: void.
 * @a: Array bidemensional to test.
 * @size: Index of the array.
 *
 * Author: Jeremias Erba.
*/

void print_diagsums(int *a, int size)
{
	int columns;
	int lines;
	int count1 = 0;
	int count2 = 0;

	for (lines = 0; lines < size; lines++)
	{
		for (columns = 0; columns < size; columns++)
		{
			if (lines == columns)
				count1 = count1 + *(a + lines * size + columns);
				/* Position: 0 | 4 | 8 ---- First diagonal. */
		}
	}
	for (lines = 0; lines <= size; lines++)
	{
		for (columns = size; columns >= 0; columns--)
		{
			if (lines == size - columns - 1)
				count2 = count2 + *(a + lines * size + columns);
				/*Position: 2 | 4 | 6 ---- Second diagonal. */
		}
	}
	/*Print the diagonal*/
	printf("%d, %d\n", count1, count2);
}
