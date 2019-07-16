#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Function to duplicated the string given
 * @str: The string to duplicate.
 * Author: José Calderón
 * Return: NULL if str is not or NULL with
 */
char *_strdup(char *str)
{
	char *r;
	unsigned int i = 0, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str);

	if (size == 0)
	{
		return (NULL);
	}

	r = (char *)malloc(sizeof(char) * size);

	if (r == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		r[i] = str[i];
		i++;
	}
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
