#include "holberton.h"

/**
 * leet - function to encode a text to 1337
 * @s: the text to encoding
 * Return: The concatenated string
 */
char *leet(char *s)
{
	int i = 0, j = 0;

	char *s1 = "aeotlAEOTL";
	char *s2 = "4307143071";

	for (s[i] != '\0')
	{
		for (s1[j] != '\0')
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
			j++;
		}
		i++;
	}
	return (s);
}
