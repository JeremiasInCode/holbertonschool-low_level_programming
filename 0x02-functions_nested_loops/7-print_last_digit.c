#include "main.h"

/**
 * print_last_digit - Print the end number of a digit.
 * @num: number for divide.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

int print_last_digit(int num)
{
	int numEnd = num % 10;

	if (numEnd >= 0)
	{
		_putchar(numEnd + '0');
		return (numEnd);
	}
	else
	{
		_putchar(-numEnd + '0');
		return (-numEnd);
	}
	return (0);
}
