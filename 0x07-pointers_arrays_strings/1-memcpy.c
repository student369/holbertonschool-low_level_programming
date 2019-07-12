#include "holberton.h"

/**
 * _memcpy - function that copy a memory area
 * @dest: the destiny in memory
 * @src: The source
 * @n: the bytes
 * Return: the pointer to the destiny
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (n > i)
	{
		while (i < n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (&dest);
}
