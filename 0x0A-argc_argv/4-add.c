#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: A program to the sum of
 * the given numbers.
 * @ac: The length of the console parameters
 * @av: The values passed by console
 * Author: José Calderón
 * Return: 0 in success or 1 in case of error
 */
int main(int ac, char *av[])
{
	int i = 1, j = 0, r = 0;

	while (i < ac)
	{
		if (av[i][0] == '-')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		while (av[i][j] != '\0')
		{			
			if (!_ispositive(av[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		r = r + atoi(av[i]);
		i++;
	}
	printf("%d\n", r);
	return (0);
}


/**
 * _ispositive - function to verify if is a positive number
 * @c: the character
 * Return: 1 if is positive 0 if not
 */
int _ispositive(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
