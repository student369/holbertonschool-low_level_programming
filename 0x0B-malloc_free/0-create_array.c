#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Function to create an initialize an string
 * @size: The size of the string
 * @c: The character
 * Author: José Calderón
 * Return: NULL if fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}

	r = (char *)malloc(sizeof(char) * size);

	if (r == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		r[i] = c;
		i++;
	}
	return (r);
}
