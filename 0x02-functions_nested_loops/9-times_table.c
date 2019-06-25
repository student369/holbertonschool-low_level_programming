#include "holberton.h"

/**
 * times_table - show the 9 time table
 * Description: show the 9 time table with a specific format
 * Return: 1 if is positive -1 if is negative and 0 if is zero
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(a + '0');
			}
			if (a != 81)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	_putchar('\n');
}
