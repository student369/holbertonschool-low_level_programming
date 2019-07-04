#include "holberton.h"

/**
 * _strncpy - function to concatenate to copy an string.
 * @dest: the second destiny string
 * @src: The first string
 * @n: Number of bytes from src
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i <  n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

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
