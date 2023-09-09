#include "main.h"

/**
 * reverse_array - Reverse a array.
 *
 * @a: Array to traverse.
 * @n: Cant of the Array.
 * Return: void.
 *
 * Author: Jeremias Erba
 */

void reverse_array(int *a, int n)
{
	int reverse = 0, index = 0;
	int lenght = n - 1;

	for (; index <= lenght; index++, lenght--)
	{
		reverse = a[index];
		a[index] = a[lenght];
		a[lenght] = reverse;
	}
}
