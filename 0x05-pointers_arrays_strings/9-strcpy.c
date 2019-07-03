#include "holberton.h"

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
	unsigned int i;
	unsigned int n = sizeof(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
