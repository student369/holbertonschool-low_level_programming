#include "holberton.h"

/**
 * print_sign - function to print the sign of a number
 * formed part of the alphabet
 * @c: The character to verify
 * Return: 1 if is positive -1 if is negative and 0 if is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
