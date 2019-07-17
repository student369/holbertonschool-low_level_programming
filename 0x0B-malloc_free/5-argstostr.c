#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Function to concatenate the argv of
 * a program.
 * @ac: The count of the params
 * @av: The params
 * Return: string or NULL in fails
 */
char *argstostr(int ac, char **av)
{
	char *r;

	int i, j, k, all = 0;

	if (ac == 0 || av == 0)
		return (0);
	for (i = 0; i < ac; i++)
		all += _strlen(av[i]) + 1;
	r = malloc(sizeof(char) * all + 1);
	if (r == 0)
		return (0);
	i = 0;
	k = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			r[k] = av[i][j];
		r[k] = '\n';
		i++;
		k++;
	}
	r[k] = '\0';
	return (r);
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
