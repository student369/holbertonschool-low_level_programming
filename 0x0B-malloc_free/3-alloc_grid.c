#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that return a grid from
 * the width and height given
 * @width: The width
 * @height: The heigth
 * Return: NULL in failure or the grid
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
		return (0);
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(r[i]);
			}
			free(r);
			return (0);
		}
		i++;
	}
	for (i = 0; j < width; j++)
		r[i][j] = 0;
	return (r);
}
