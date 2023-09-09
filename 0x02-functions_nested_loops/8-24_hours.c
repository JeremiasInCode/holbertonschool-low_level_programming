#include "main.h"

/**
 * jack_bauer - Print the watch of jack_bauer.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
		}
	}
}
