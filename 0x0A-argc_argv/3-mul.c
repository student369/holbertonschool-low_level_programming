#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program to show the result of
 * the multiplication of two numbers given.
 * @ac: The length of the console parameters
 * @av: The values passed by console
 * Author: José Calderón
 * Return: 0 in success or 1 in case of error
 */
int main(int ac, char **av)
{
	int r = 0;

	if (ac > 2)
	{
		int x = atoi(av[1]);
		int y = atoi(av[2]);

		printf("%d\n", (x * y));
	}
	else
	{
		r = 1;
		printf("Error\n");
	}
	return (r);
}
