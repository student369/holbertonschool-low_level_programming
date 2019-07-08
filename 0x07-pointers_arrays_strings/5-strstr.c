#include "holberton.h"

/**
 * _strstr - function to find the first ocurrence
 * @haystack: The string
 * @needle: The substring to find any character
 * Return: The pointer to the byte
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, l = 0;
	int e = 0, f = 0;

	while (needle[l] != '\0')
	{
		l++;
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			e = 1;
			f = i;
		}
		if (e == 1 && haystack[i] == needle[j])
		{
			j++;
		}
		i++;
	}

	if (j == l)
	{
		return (&haystack[f]);
	}

	return (0);
}
