#include "holberton.h"
/**
 * factorial - function that returns the factorial
 * @n: integer to obtain the factorial
 * Return:  0, -1 or the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n <  0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
