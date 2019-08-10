#include "holberton.h"

/**
 * get_bit - Function to get an specific bit
 * @n: The number
 * @index: The index
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1 ? 1 : 0);
}
