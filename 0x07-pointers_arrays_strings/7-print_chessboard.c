#include "holberton.h"

/**
 * print_chessboard - function to fill the memory with a constant
 * @a: the chessboard array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int r = 0, c = 0;

	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\n');
		r++;
	}
}
