#include "main.h"
int find_prime(int n, int numberTest);
/**
 * is_prime_number - This function verify the number is correct.
 *
 * @n: number.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */
int is_prime_number(int n)
{
	int response = 0;

	if (n <= 1)
	{
		return (0);
	}
	else if (n > 1)
	{
		response = find_prime(n, 2);
	}
	return (response);
}


/**
 * find_prime - This function doing the logic.
 *
 * @n: Integer to test.
 * @numberTest: number that help us to verify that it is even or odd.
 * Return: int or second function.
 *
 * Author: Jeremias Erba.
 */

int find_prime(int n, int numberTest)
{
	if (n % numberTest == 0 && numberTest < n)
	{
		return (0);
	}
	else if (n == numberTest)
	{
		return (1);
	}
	else
	{
		return (find_prime(n, numberTest + 1));
	}
	return (0);
}


