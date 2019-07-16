#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Function to concatenate the two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * Author: José Calderón
 * Return: NULL in failure or the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	char *d1 = "";
	char *d2 = "";
	unsigned int i = 0, sz1 = 0, sz2 = 0, sf = 0;

	if (s1 == 0)
		s1 = d1;
	if (s2 == 0)
		s2 = d2;
	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	sf = sz1 + sz2 + 1;
	r = (char *)malloc(sizeof(char) * sf);
	if (r == 0)
		return (0);
	while (i < sf)
	{
		if (i < sz1 && s1[i] != '\n')
			r[i] = s1[i];
		else
			r[i] = s2[(i - sz1)];
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
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
