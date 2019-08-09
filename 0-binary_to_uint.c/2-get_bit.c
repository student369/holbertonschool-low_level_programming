#include "holberton.h"

/**
 * set_bit - Function to set a bit of a number
 * depends of the index given.
 * @n: The number
 * @index: The specific index
 *
 * Return: The bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, j;

	i = 0;
	while (i < (sizeof(unsigned long int) * 8))
	{
		if (i == index)
		{
			*n |= 1 << index;
			return (1);
		}
		i++;
	}
	return (-1);
}
