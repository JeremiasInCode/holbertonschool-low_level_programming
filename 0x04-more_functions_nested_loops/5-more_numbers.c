#include "main.h"

/**
 * more_numbers - This function print 10 times since 0-14.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void more_numbers(void)
{
	int times, number;

	for (times = 1; times <= 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				putchar((number / 10) + '0');
			}
			putchar((number % 10) + '0');
		}
		putchar('\n');
	}
}
