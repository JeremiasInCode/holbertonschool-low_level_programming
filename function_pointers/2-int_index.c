#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches a integer.
 *
 * @array: Data structure.
 * @size: Size of the array.
 * @cmp: Pointer to function where the logic already given.
 *
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if ((cmp)(array[i]) == 0)
		{
			continue;
		}
		else if ((cmp)(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
