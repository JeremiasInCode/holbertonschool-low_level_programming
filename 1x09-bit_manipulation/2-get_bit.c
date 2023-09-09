#include "main.h"

/**
 * get_bit - Get a bit depending of index.
 *
 * @n: number
 * @index: index of bit in that number.
 *
 * Return: 1 or 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);

	/* We move the bits of n index times */
	n = n >> index;

	/* We compare the value */
	return (((n & 1) == 1) ? (1) : (0));
}
