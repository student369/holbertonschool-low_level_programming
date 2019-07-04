#include "holberton.h"

/**
 * _strncat - function to concatenate two strings.
 * @dest: the second string
 * @src: The first string
 * @n: Number of bytes from src
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, i = 0;

	l = _strlen(dest);
	while (i <  n && src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';

	return (dest);
}

/**
 * _strlen - function to get the size of an string
 * Description: A function to get the size of a
 * string given.
 * @s: The string to get size
 * Return: The length
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
