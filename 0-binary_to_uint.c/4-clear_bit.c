#include "holberton.h"

/**
 * clear_bit - Function to clean the specific bit.
 * @n: The numbert
 * @index: The index to clear.
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 0;
	for (i < (sizeof(n) * sizeof(int)))
	{
		if (i == index)
		{
			*n &= ~(1 << index);
			return (1);
		}
		i++;
	}
	return (-1);
}
