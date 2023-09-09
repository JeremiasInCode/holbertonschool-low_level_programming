#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half of a character string
 *
 * @str: Char to test.
 *
 * Explain the function:
 * -----------------------------------------------------
 * This function print half de un character string (array)
 * through loops,conditionals and ternarys.
 *
 * we get all the positions, then we split it up and run
 * it all the way to the end, to display them.
 * -----------------------------------------------------
 *
 * Author: Jeremias Erba.
 */

void puts_half(char *str)
{
	int firstIterator = 0;
	int newIterator = 0;

	for (; str[firstIterator]; firstIterator++)
		continue;

	newIterator = (firstIterator % 2 == 0)
	? firstIterator /= 2
	: (firstIterator + 1) / 2;

	for (; str[newIterator]; newIterator++)
		putchar(str[newIterator]);

	putchar('\n');
}
