#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A a program to print the parameters
 * given to the main function followed by a new line.
 * @ac: The length of the console parameters
 * @av: The values passed by console
 * Author: José Calderón
 * Return: Success
 */
int main(int ac, char **av)
{
	while (ac--)
	{
		printf("%s\n", *av++);
	}
	exit(EXIT_SUCCESS);
}
