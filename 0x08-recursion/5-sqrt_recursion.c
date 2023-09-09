#include "main.h"

int _sqrt_recursion(int n);
int secondFunction(int n, int param2);

/**
 * _sqrt_recursion - This function verify than n not
 * is > 0 and called secondFunction().
 *
 * @n: Integer to test.
 * Return: int or second function.
 *
 * Author: Jeremias Erba.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (secondFunction(n, 1));
	}
}

/**
 * secondFunction  - This is doing the recursion logic.
 *
 * @n: Integer to test.
 * @param2: Integer to verify the multiplication and that it is the same as n.
 * Return: int or second function.
 *
 * Author: Jeremias Erba.
 */

int secondFunction(int n, int param2)
{
	if (param2 * param2 == n)
	{
		return (param2);
	}
	else if (param2 * param2 > n)
	{
		return (-1);
	}
	else
	{
		return (secondFunction(n, param2 + 1));
	}
}
