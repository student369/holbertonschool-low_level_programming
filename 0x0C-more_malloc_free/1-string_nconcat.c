#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Function to concatenate the two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The bytes
 * Author: José Calderón
 * Return: NULL in failure or the string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int i = 0, j = 0, k, l = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);
	j = (n > j) ? j : n;
	r = (char *)malloc((i + j) + 1);
	if (r == NULL)
		return (0);
	for (k = 0; k < i; k++)
		r[k] = s1[k];
	for (; k < (i + j); k++)
	{
		r[k] = s2[l];
		l++;
	}
	r[k] = '\0';
	return (r);
}

/**
 * _strlen - funtion to get the size of an string
 * Description: A function to get the size of a
 * string given.
 * @s: The string to get size
 * Return: void
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
