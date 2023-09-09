#include "main.h"

/**
 * _pow_recursion - This function print the value of x raised
 * to the power of y.
 *
 * @x: number 1 to test.
 * @y: number 2 to test.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */

int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y < 0)
		return (-1);
	if (y > 0)
		res = x * _pow_recursion(x, (y - 1));
	if (y == 0)
		return (1);
	return (res);
}
