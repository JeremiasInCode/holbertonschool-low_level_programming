#include "main.h"

/**
 * factorial - This function print the factorial using recursion.
 *
 * @n: number to test.
 * Return: int.
 * Author: Jeremias Erba.
 */

int factorial(int n)
{
	return ((n == 0 || n == 1) ? (1) : (n < 0) ? (-1) : (n * factorial(n - 1)));
}
