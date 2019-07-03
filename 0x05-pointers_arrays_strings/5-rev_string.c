#include "holberton.h"

/**
 * rev_string - function to return a string inversed
 * Description: A function to return a string in
 * reverse order.
 * @s: The string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int l = _strlen(s), i = 0, j;
	int t[l], l2 = l;

	l = (l - 1);
	while (l >= 0)
	{
		t[i] = s[l];
		l--;
		i++;
	}

	for (j = 0; j < l2; j++)
	{
		*(s + j) = t[j];
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
