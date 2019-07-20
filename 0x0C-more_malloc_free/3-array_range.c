#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Function to create an integer array
 * @min: The minimum
 * @max: The maximum
 * Author: José Calderón
 * Return: void
 */
int *array_range(int min, int max)
{
	int *r;
	int i = 0;

	if (min > max)
		return (0);
	r = (int *)malloc(sizeof(int *) * ((max - min) + 1));
	if (r == NULL)
		return (0);
	while (i < max)
	{
		*(r + i) = min++;
		i++;
	}
	return (r);
}
