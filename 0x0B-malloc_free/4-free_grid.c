#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Function that free a section of memory
 * the width and height given
 * @grid: The width
 * @height: The heigth
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	else
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
