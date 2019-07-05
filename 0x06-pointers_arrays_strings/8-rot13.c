#include "holberton.h"

/**
 * rot13 - function to encode to rot13
 * @s: the text to encode
 * Return: The encoded text
 */
char *rot13(char *s)
{
	int i = 0, j = 0;

	char *s1 = "abcdefghijklmABCDEFGHIJKLM";
	char *s2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (s[i] != '\0')
	{
		for (s1[j] != '\0')
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
			else if (s[i] == s2[j])
			{
				s[i] = s1[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
