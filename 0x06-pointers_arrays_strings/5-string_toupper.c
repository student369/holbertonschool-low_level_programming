#include "holberton.h"

/**
 * string_toupper - function to convert the string in upper case
 * @s: the string
 * Return: The uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);
}
