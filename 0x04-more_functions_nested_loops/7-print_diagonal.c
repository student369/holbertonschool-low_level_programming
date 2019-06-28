#include "holberton.h"

/**
 * print_diagonal - funtion to print a diagonal
 * Description: Print a diagonal \ given lenght.
 * begining from the left.
 * @n: The length of the diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	if (!(n <= 0))
	{
		int h = 0;

		while (h < n)
		{
			for (int i = 0; i <= h; i++)
			{
				if (i == h)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
			h++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
