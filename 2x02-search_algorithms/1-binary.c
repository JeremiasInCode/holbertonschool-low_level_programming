#include "search_algos.h"

/**
 * binary_search - Search a element in a array through binary search algoritm.
 *
 * @array: Array to test.
 * @size: size of the array.
 * @value: value within that index.
 *
 * Return: index.
*/

int binary_search(int *array, size_t size, int value)
{
	int first = 0, end = 0, mid = 0, i = 0;

	end = size - 1;

	if (!array || size == 0)
		return (-1);

	while (first <= end)
	{
		mid = (first + end) / 2;
		printf("Searching in array: ");
		for (i = first; i <= end; i++)
		{
			((i < end)
			? printf("%d, ", array[i])
			: printf("%d", array[i]));
		}
		putchar('\n');

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			first = mid + 1;
		}
		else if (value < array[mid])
		{
			end = mid  - 1;
		}
	}
	return (-1);
}
