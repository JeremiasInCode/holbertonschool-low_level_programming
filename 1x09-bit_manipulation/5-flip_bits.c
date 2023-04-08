#include "main.h"

/**
 * flip_bits - Number of bits for get a number to another.
 *
 * @n: First param.
 * @m: Second param.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux = 0, iterator = 0;

	aux = m ^ n;

	for (; aux; iterator++)
		aux = aux & (aux - 1);

	return (iterator);
}
