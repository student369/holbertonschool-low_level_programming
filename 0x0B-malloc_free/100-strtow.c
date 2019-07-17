#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - Function to slit a string
 * @str: The string
 * Return: string splitted, NULL in case of error.
 */
char **strtow(char *str)
{
	char **r;
	int i;

	if (str == NULL || str == "")
		return (0);
	r = malloc(sizeof(char *) * _strlen(str));
	if (r == NULL)
	{
		return (0);
	}	
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
