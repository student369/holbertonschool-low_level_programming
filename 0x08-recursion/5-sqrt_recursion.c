#include "holberton.h"
/**
 * root - fint the square
 * @i: the number
 * @n: the root number
 * Return: square root
 */
int _r(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (_r(i + 1, n));
	}
}
/**
 * _sqrt_recursion - returns the natural square
 * @n: integer to find the square
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	n = _r(i + 1, n);
	return (n);
}
