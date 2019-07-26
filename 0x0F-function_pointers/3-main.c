#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @ac: The count of the params of main function
 * @av: The params passed to the main function
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(strcmp(av[2], "+") == 0) ||
	    !(strcmp(av[2], "-") == 0) ||
	    !(strcmp(av[2], "*") == 0) ||
	    !(strcmp(av[2], "/") == 0) ||
	    !(strcmp(av[2], "%") == 0))
	{
		printf("Error\n");
		exit(99);
	}
	else if (atoi(av[3]) == 0 && (strcmp(av[2], "/") == 0||
				      strcmp(av[2], "/") == 0))
	{
		printf("Error\n");
		exit(99);
	}
	return (get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
}
