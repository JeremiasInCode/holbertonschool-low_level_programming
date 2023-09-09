#include "main.h"
#include <stdio.h>

/**
 * print_array - Print the values of a array.
 *
 * @a: array.
 * @n: counter.
 *
 * Author: Jeremias Erba.
 */

void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		printf("%d", a[index]);

		if (index < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
