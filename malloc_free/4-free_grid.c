#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: Dynamic 2 dimensional array.
 * @height: Position to free, (height - rows).
 * Return: void.
 *
 * Author: Jeremias Erba.
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
