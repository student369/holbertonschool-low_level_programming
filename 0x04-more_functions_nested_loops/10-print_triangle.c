#include "holberton.h"

/**
 * print_triangle - funtion to print a triangle
 * Description: Print a triangle with the #
 * character, from n x n size,
 * @size: The dimension of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (!(size <= 0))
	{
		int h = 0, i;

		while (h < size)
		{
			i = 0;
			for (int j = 0; j < (size - h); j++)
			{
				_putchar(32);
			}
			while (i <= h)
			{
				_putchar(35);
				i++;
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
