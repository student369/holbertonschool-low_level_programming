#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function to show the sum of the diagonal
 * @a: the matrix
 * @size: the length of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int e, l = (size * size);
	int d1 = 0, d2 = 0;
	int l1 = (size - 1), l2 = (size + 1);

	for (e = 0; e < l; e++)
	{
		if (e % l2 == 0)
		{
			d1 += a[e];
		}
		if (e % l1 == 0 && e < (l - (size - 1)))
		{
			d2 += a[e];
		}
	}
	printf("%d, %d\n", (d1 + a[0]), d2);
}
