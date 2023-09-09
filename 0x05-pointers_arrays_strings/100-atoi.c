#include "main.h"

/**
 * _atoi - Convert a string to a number.
 *
 * @s: Array to will test.
 * Return: List of numbers.
 *
 * Author: Jeremias Erba.
 */

int _atoi(char *s)
{
	unsigned int number = 0, sign = 1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (*s == 45)
			sign = sign * -1;
		else if (number > 0)
			break;
		s++;
	}
	return (number * sign);
}
