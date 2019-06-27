#include "holberton.h"

/**
 * print_line - funtion to print a line
 * Description: Print a line from the
 * given lenght.
 * @n: The length line
 * Return: void
 */
void print_line(int n)
{
	if (!(n <= 0))
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
