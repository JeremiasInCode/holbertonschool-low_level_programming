#include "main.h"

/**
 * alloc_grid - Return a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: Rows of matriz.
 * @height: Columns of matriz.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */

int **alloc_grid(int width, int height)
{
	int i, x, y;
	int **ptro;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptro = (int **)malloc(sizeof(int *) * height);
	if (ptro == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptro[i] = (int *)malloc(sizeof(int) * width);
		if (ptro[i] != NULL)
		{
			continue;
		}
		else
		{
			for  (; i >= 0; i--)
			{
				free(ptro[i]);
			}
			free(ptro);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ptro[x][y] = 0;
		}
	}
	return (ptro);
}


