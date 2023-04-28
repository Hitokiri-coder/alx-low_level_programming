#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d grid.
 * @height: the columns
 * @grid: the given 2d array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
