#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - pointer to the grid
 * @width:input to row
 * @height:input to the column
 *
 * Return: pointer to output string.
 */
int **alloc_grid(int width, int height)
{
	int **final, *ptr;
	int i, j, cn = 0, len = 0;

	len = sizeof(int *) * width + sizeof(int) * height * width;
	final = (int **)malloc(len);
	if (final == NULL)
	{
		return (NULL);
	}
	ptr = (int *)(final + width);
	for (i = 0; i < width; i++)
		final[i] = (ptr + height * i);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			final[i][j] = cn;
	return (final);
}
