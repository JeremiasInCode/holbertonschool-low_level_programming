#include "main.h"

/**
 * print_diagonal - This function print certain times.
 * @n: number de _ to print
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_diagonal(int n)
{
	int times, spaces;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (times = 0; times < n; times++)
	{
		for (spaces = 0; spaces < times; spaces++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
