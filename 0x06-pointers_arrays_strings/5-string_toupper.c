#include "holberton.h"

/**
 * string_toupper - function to convert the string in upper case
 * @s: the string
 * Return: The uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (_islower(s[i]))
		{
			s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);
}

/**
 * _islower - function to evaluate if a text
 * is in lowercase.
 * @c: the character to evaluate
 * Return: 1 is is or 0 if not
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}
