#include "main.h"

/**
 * array_range - Create an array of integers of min to max.
 *
 * @min: First min range.
 * @max: Second max range.
 * Return: pointer pointen to the specific memory.
 *
 * Author: Jeremias Ebra (tremendo vivido si).
 */

int *array_range(int min, int max)
{
	int *ptro, iterator;

	if (min > max)
		return (NULL);

	ptro = (int *)malloc(sizeof(int) * (max - (min - 1)));
	if (ptro == NULL)
		return (NULL);

	for (iterator = 0; min <= max; iterator++, min++)
		ptro[iterator] = min;

	return (ptro);
}
