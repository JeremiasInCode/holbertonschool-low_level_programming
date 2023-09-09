#include "main.h"

/**
 * print_line - This function print _ .
 * @n: number de _ to print
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
