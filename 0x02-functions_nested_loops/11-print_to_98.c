#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints the numbers from n to 98
 * @n: The initial numbert to create the secuence
 *
 * Description: Show the numbers from n to 98.
 * Return: 1 if is positive -1 if is negative and 0 if is zero
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else
			{
				printf("%d", j);
			}
		}
	}
	printf("\n");
}
