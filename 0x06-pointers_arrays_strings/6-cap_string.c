#include "holberton.h"

/**
 * cap_string - function to capitalize the text
 * @s: the text to capitalize
 * Return: The capitalized text
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':

				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] -= 32;
				}
		}
		i++;
	}
	return (s);
}
