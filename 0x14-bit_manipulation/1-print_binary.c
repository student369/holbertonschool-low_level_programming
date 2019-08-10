#include "holberton.h"

/**
 * print_binary - Function to print a binary
 * @n: The binary number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy = n;
	int i = 0;

	for (i = 0; (copy >>= 1) > 0; i++)
		;
	while (i >= 0)
		_putchar((n >> i--) & 1 ? '1' : '0');
}
