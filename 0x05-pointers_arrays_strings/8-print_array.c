#include "holberton.h"
#include <stdio.h>

/**
 * print_array - funtion to print an array
 * Description: A function to print an array with the specifyc lenght.
 * @a: The integer arrays
 * @n: The length to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (!(j == (n - 1)))
		{
			printf(", ");
		}
	}
	printf("\n");
}
