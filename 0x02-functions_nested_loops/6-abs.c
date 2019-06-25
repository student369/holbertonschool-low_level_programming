#include "holberton.h"

/**
 * int_abs - get the absolute value from the number
 * formed part of the alphabet
 * @c: The character to verify
 * Return: 1 if is positive -1 if is negative and 0 if is zero
 */
int int_abs(int n)
{
	if (n >= 0)
	{
		return n;
	}
	else
	{
		return (n*-1);
	}
}
