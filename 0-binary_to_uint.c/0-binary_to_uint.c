#include "holberton.h"

/**
 * binary_to_uint - Function to convert bin to int
 * of a linked list.
 * @b: The char that contains the binary.
 *
 * Return: the number converted.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;
	int j;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	res = j = 0;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res += (b[i] - 48) * (1 << j);
		i--, j++;
	}
	return (res);
}
