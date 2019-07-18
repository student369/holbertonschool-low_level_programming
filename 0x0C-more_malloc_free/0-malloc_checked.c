#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Function to allocate in memory
 * @b: The bytes to allocate
 * Author: José Calderón
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	if (b <= 0)
	{
		return (0);
	}
	r = malloc(b);
	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
