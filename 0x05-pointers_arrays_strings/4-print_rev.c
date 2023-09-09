#include <stdio.h>
#include "main.h"

/**
 *  print_rev - Development the print_rev function.
 *
 *
 *  @s: Character string.
 *  Return: void function.
 *
 *
 *  Explain the function:
 *  ------------------------------------------------------------------------
 *  This function revert a character string.
 *  ------------------------------------------------------------------------
 *
 *  Author: Jeremias Erba.
 */

void print_rev(char *s)
{
	int index = 0;

	for (; s[index]; index++)
		continue;

	index -= 1;

	for (; index > -1; index--)
		printf("%c", s[index]);
	putchar('\n');
}
