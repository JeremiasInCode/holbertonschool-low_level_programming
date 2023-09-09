#include "main.h"

/**
 * print_alphabet - Print the alphabet witch a line in the end.
 *
 * Return: Already 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		write(1, &letter, 1);
	}
	write(1, "\n", 1);
}
