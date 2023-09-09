#include "main.h"

/**
 * set_bit - Set the value of a bit.
 *
 * @n: Pointer.
 * @index: index of the bit to set.
 *
 * Return: 0 or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux = 1;

	if (index > 33 || !n)
		return (-1);

	aux = aux << index;
	(*n) = (*n) | aux;
	return (1);
}
