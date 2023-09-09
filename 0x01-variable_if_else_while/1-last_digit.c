#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (If is Success)
 *
 * Author: Jeremias Erba
 */

int main(void)
{
	int n, result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = n % 10;
	printf("Last digit of %d is ", n);

	(result < 6 && result != 0) ?
	printf("%d and is less than 6 and not 0\n", result)
	: (result > 5) ? printf("%d and is greater than 5\n", result) :
	printf("%d and is 0\n", result);
	return (0);
}
