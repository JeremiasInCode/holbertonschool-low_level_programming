#include "main.h"

/**
 * print_most_numbers - This function print 0-9 numbers - 2 and 4.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
}
