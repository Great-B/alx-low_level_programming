#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - pointer to the grid
 * @grid: the entire data grid
 * @height: pointer to the column
 *
 * Return: pointer to output string.
 */
void free_grid(int **grid, int height)
{
	if (height < 0)
	{
		while (*grid)
		{
			free(*grid);
			*grid++ = NULL;
		}
	}
	else
	{
		while (height)
		{
			free(grid[height]);
			grid[height--] = NULL;
		}
	}
}
