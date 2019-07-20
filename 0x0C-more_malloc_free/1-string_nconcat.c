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
	char *d1 = "";
	char *d2 = "";
	unsigned int i = 0, sz1 = 0, sz2 = 0, sf = 0, j = 0;

	if (s1 == 0)
		s1 = d1;
	if (s2 == 0)
		s2 = d2;
	sz1 = _strlen(s1);
	sz2 = (_strlen(s2) >= n) ? (n + 1) : (_strlen(s2) + 1);
	sf = sz1 + sz2 + 1;
	r = (char *)malloc(sizeof(char) * sf);
	if (r == 0)
		return (0);
	while (i < sf)
	{
		if (s1[i] != '\0')
			r[i] = s1[i];
		else
			r[i] = s2[(i - sz2)];
		i++;
	}
	r[i] = '\0';
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
