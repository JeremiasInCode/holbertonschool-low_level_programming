#include "search_algos.h"

/**
 * linear_search - Search a element in a array through linear search algoritm.
 *
 * @array: Array to test.
 * @size: size of the array.
 * @value: value within that index.
 *
 * Return: index.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0, not_found = 1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			not_found = 0;
			break;
		}
	}
	return ((not_found == 1 || !array) ? (-1) : (int)i);
}
