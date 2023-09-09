#include "main.h"

/**
 * print_square - This function print certain times #.
 * @size: number de # to print.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_square(int size)
{
	int times, simbol;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (times = 0; times < size; times++)
	{
		for (simbol = 0; simbol < size; simbol++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
