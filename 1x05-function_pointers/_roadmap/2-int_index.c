#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (; i < size; i++)
		(((cmp)(i)) == 0) ? continue : (((cmp)(i)) == 1) : return (i);

	return (-1);
}
