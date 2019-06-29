#include "holberton.h"

/**
 * print_number - funtion to verify a digit
 * Description: A function to print a number
 * of 4 length maximum
 * @n: The number that must be print
 * character given is a digit.
 * Return: void
 */
void print_number(int n)
{
	int d = 48;

	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	if (n < 10)
	{
		_putchar((n + d));
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(((n / 10) + d));
		_putchar(((n % 10) + d));
	}
	else if (n > 99 && n <= 999)
	{
		_putchar((((n / 100) % 10) + d));
		_putchar((((n % 100) / 10) + d));
		_putchar(((n % 10) + d));
	}
	else if (n > 999 && n <= 9999)
	{
		_putchar(((n / 1000) + d));
		_putchar((((n / 100) % 10) + d));
		_putchar((((n % 100) / 10) + d));
		_putchar(((n % 10) + d));
	}
}
