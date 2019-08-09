#include "holberton.h"

/**
 * flip_bits - Function to flip the specific bytes
 * @n: The first number
 * @m: the second number
 *
 * Return: the number of bits of difference.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int s;
	unsigned long int num;

	s = 0;
	num = n ^ m;
	while (num != 0)
	{
		printf("num is %lu\n", num);
		s += (num & 1);
		num = num >> 1
	}
	return (s);
}
