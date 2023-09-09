#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executed a parameter on each element of an array.
 *
 * @array: Data structure.
 * @size: Size of the array.
 * @action: function passed by parameters.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0, socket;

	if ((!(action)) || (!(array)))
		exit(1);

	for (; i < size; i++)
	{
		socket = array[i];
		(action)(socket);
	}
}
