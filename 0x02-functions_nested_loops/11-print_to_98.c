#include "main.h"

/**
 * print_to_98 - This function calculates print a range of number (n - 98).
 *
 * @n: Is the number to print.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_to_98(int n)
{
	int iteratorMin, iteratorMay;

	if (n <= 98)
	{
		for (iteratorMin = n; iteratorMin < 98; iteratorMin++)
		{
			printf("%d, ", iteratorMin);
		}
		printf("%d", iteratorMin);
		printf("\n");
	}
	else
	{
		for (iteratorMay = n; iteratorMay > 98; iteratorMay--)
		{
			printf("%d, ", iteratorMay);
		}
		printf("%d", iteratorMay);
		printf("\n");
	}
}
