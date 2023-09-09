#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10x witch a line in the end.
 *
 * Return: Already 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_alphabet_x10(void)
{
	int cant;

	char letter;

	for (cant = 0; cant <= 9; cant++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			write(1, &letter, 1);
		}
		write(1, "\n", 1);
	}
}


