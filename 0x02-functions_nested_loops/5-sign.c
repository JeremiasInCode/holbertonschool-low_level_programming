#include "main.h"

/**
 * print_sign - Program that to verify number, first developed
 * with if-else conditionals, then it was developed witch ternary
 *
 * @n: Number test
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	} else if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
	return (0);
}
