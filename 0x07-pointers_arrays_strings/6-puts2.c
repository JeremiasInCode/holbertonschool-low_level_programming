#include "main.h"
#include <stdio.h>

/**
 * puts2  - print every other character of a string.
 *
 * @str: Char to test.
 *
 * Explain the function:
 * -----------------------------------------------------
 *  This function prints every other time the array.
 * -----------------------------------------------------
 *
 * Author: Jeremias Erba.
 */

void puts2(char *str)
{
	int count = 0;

	for (; *str; str++)
	{
		if (count % 2 == 0)
		{
			write(1, &str, 8);
		}
		count++;
	}
	putchar('\n');
}
