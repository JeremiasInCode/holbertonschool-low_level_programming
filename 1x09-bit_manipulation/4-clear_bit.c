#include "main.h"

/**
 * clear_bit - Delete a bit.
 *
 * @n: Pointer.
 * @index: Index for delete.
 *
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux = 1;

	if (index > 33 || !n)
		return (-1);

	aux = aux << index;
	aux = ~aux;
	(*n) = (*n) & aux;
	return (1);
}
