#include "holberton.h"

/**
 * _strspn - function to find the lengt of a prefix
 * @s: The string
 * @accept: The substring to compare
 * Return: The lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, r = 0, l = 0;

	while (accept[l] != '\0')
	{
		l++;
	}
	++l;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
			j++;
		}
		if (l == r)
		{
			break;
		}
		i++;
	}

	return (r);
}
