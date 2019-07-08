#include "holberton.h"

/**
 * _strpbrk - function to find any char of an substring
 * @s: The string
 * @accept: The substring to find any character
 * Return: The pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
