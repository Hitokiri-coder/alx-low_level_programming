#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - creates 2d array of ints
 * @width: the rows
 * @height: the columns
 *
 * Return: a pointer to the result, NULL if any arg is <= 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int i_2;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (!(grid))
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!(grid[i]))
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	i = 0;
	while (i < height)
	{
		i_2 = 0;
		while (i_2 < width)
		{
			grid[i][i_2] = 0;
			i_2++;
		}
		i++;
	}
	return (grid);
}
