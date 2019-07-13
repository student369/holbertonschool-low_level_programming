#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A a program to show your name
 * followed by a new line.
 * @ac: The length of the console parameters
 * @av: The values passed by console
 * Author: José Calderón
 * Return: Success or failure
 */
int main(int ac, char **av)
{
	if (ac > 0)
	{
		printf("%s\n", *(av + 0));
		exit(EXIT_SUCCESS);
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}
