#include <stdio.h>
#include "main.h"

/**
 *  _puts - Development the _puts function.
 *
 *  @str: Character stng.
 *  Return: void function.
 *
 *  Explain the function:
 *  ------------------------------------------------------------------------
 *  While the index does not terminate (\0), save the current position and
 *  then we print it. then add +1 to the index to move to the next position.
 *  -------------------------------------------------------------------------
 *
 *  Author: Jeremias Erba.
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		char currentIndex = str[index];

		printf("%c", currentIndex);
		index++;
	}
	putchar('\n');
}
