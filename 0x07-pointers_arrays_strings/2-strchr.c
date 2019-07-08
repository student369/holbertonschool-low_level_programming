#include "holberton.h"

/**
 * _strchr - function to find a char in the string
 * @s: The string
 * @c: The char to find in the string
 * Return: The pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (0);
}
