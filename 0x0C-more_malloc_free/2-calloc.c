#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Function to define a calloc
 * with a values by default
 * @nmemb: The bytes to allocate
 * @size: The bytes to alocate
 * Author: José Calderón
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i = 0, t = (size * nmemb);

	if (size <= 0 || nmemb <= 0)
		return (0);
	r = (void *)malloc(t);
	if (r == NULL)
		return (0);
	while (i < t)
	{
		*(r + i) = 0;
		i++;
	}
	return (r);
}
