#include "holberton.h"

/**
 * binary_to_uint - Function to convert a number from
 * binary in a int.
 * @b: The binary number in a string
 *
 * Return: the integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n <<= 1;
		if (b[i] == '1')
			n ^= 1;
	}
	return (n);
}
