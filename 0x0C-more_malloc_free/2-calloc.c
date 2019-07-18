#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Function to allocate an array of ints
 * @nmemb: The bytes to allocate
 * @size: The bytes to alocate
 * Author: José Calderón
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i = 0;

	if (size <= 0 || nmemb <= 0)
	{
		return (0);
	}
	r = (void *)malloc(size * nmemb);
	if (r == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(r + i) = nmemb;
		i++;
	}
	return (r);
}
