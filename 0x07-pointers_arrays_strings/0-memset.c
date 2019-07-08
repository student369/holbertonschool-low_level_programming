#include "holberton.h"

/**
 * _memset - function to fill the memory with a constant
 * @s: the memory section
 * @b: The constant to replace
 * @n: the bytes to change
 * Return: The memory section given
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n > i)
	{
		while (i < n)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}
