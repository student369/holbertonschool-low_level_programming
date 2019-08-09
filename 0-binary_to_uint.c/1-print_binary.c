#include "holberton.h"

/**
 * get_bit - Function get a bit of a number
 * depends of the index given.
 * @n: The number
 * @index: The specific index
 *
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
