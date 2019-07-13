#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program to get the change of
 * a count of money given.
 * @ac: The length of the console parameters
 * @av: The values passed by console
 * Author: José Calderón
 * Return: 0 in success or 1 in case of error
 */
int main(int ac, char *av[])
{
	int n = 0, c = 0;

	if (ac == 2 && atoi(av[1]) > 0)
	{
		n = atoi(av[1]);
		do {
			if (n >= 25)
				n -= 25;
			else if (n < 25 && n >= 10)
				n -= 10;
			else if (n < 10 && n >= 5)
				n -= 5;
			else
				n -= 1;
			c++;
		} while (n > 0);
		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
