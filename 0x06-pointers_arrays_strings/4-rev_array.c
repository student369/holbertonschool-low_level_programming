#include "holberton.h"

/**
 * reverse_array - function to reverse an array
 * @a: the array
 * @n: the second string to compare
 * Return: The concatenated string
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	while (i < n / 2)
	{

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
