#include "holberton.h"

/**
 * flip_bits - Function to flip some numbers.
 * @n: The first number
 * @m: The second number
 *
 * Return: the diference
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int newn = n ^ m;
	int i = (sizeof(unsigned long int) * 8) - 1;
	int bf = 0;

	while (i >= 0)
	{
		if ((newn >> i) & 1)
			bf++;
		i--;
	}
	return (bf);
}
