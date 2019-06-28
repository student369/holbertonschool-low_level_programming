#include "holberton.h"

/**
 * print_square - funtion to print a square
 * Description: Print a square with the #
 * character, from n x n size,
 * @size: The dimension of the square
 * Return: void
 */
void print_square(int size)
{
	if (!(size <= 0))
	{
		int h = 0;

		while (h < size)
		{
			for (int i = 0; i < size; i++)
			{
				_putchar(35);
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
