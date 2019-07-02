#include "holberton.h"

/**
 * swap_int - funtion to swap the values of two
 * integers
 * Description: A function to swap the values
 * of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *(a + 1);
	*b = p;
}
