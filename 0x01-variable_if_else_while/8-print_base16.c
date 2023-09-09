#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Alaways 0.
 *
 * Author: Jeremias Erba
*/

int main(void)
{
	int Hexadecimal;
	char Leters;

	for (Hexadecimal = 0; Hexadecimal <= 9; Hexadecimal++)
	{
		putchar(Hexadecimal + '0');
	}
	for (Leters = 'a'; Leters <= 'f'; Leters++)
	{
		putchar(Leters);
	}
	putchar('\n');
	return (0);
}
