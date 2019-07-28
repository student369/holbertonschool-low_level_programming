#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - funtion to copy an string in other
 * Description: A funtion to copy an string in other
 * including the null final element.
 * @src: The first string that need to be copy
 * @dest: The destiny string
 * Return: a pointer to the string copied
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
