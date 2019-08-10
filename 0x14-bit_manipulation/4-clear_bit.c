#include "holberton.h"

/**
 * clear_bit - Function to clear some bits
 * depend of an specific index.
 * @n: The number
 * @index: The index to clear
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ch = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	ch <<= index;
	*n = *n & ~ch;
	return (1);
}
