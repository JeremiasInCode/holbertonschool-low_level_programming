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
	char reverseLeters;

	for (reverseLeters = 'z'; reverseLeters >= 'a'; reverseLeters--)
	{
		putchar(reverseLeters);
	}
	putchar('\n');
	return (0);
}

