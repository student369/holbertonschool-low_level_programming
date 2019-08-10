#include "holberton.h"

/**
 * set_bit - Function to set a bit in a specific
 * index.
 * @n: The number
 * @index: The index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ch = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	ch <<= index;
	*n = *n | ch;
	return (1);
}
