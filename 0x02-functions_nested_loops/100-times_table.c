#include "holberton.h"

void repeat(int s, int v);
void time_table(int i, int n);

/**
 * print_times_table - show the n times table
 * @n: A number that indicate the time table to show
 * Description: show the n time table with a specific
 * format only show from the 0 to 15
 * Return: 1 if is positive -1 if is negative and 0 if is zero
 */
void print_times_table(int n)
{
	int i;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			time_table(i, n);
		}
	}
	_putchar('\n');
}

/**
 * repeat - to repeat some int s times an print
 * @s: The s times to repeat the number
 * @v: The int value to print
 * Return: void
 */
void repeat(int s, int v)
{
	int i;

	for (i = 0; i < s; i++)
	{
		_putchar(v);
	}
}

/**
 * time_table - a function to show a time table
 * @i: the first numbert to operate
 * @n: the last numbert of the table
 * Return: void
 */
void time_table(int i, int n)
{
	int j, a, s;

	for (j = 0; j <= n; j++)
	{
		a = i * j;
		if (a >= 0 && a <= 9)
		{
			s = 3;
			_putchar(a + '0');
		}
		else if (a > 9 && a <= 99)
		{
			s = 2;
			_putchar((a / 10)
				 + '0');
			_putchar((a % 10)
				 + '0');
		}
		else
		{
			s = 1;
			_putchar((a / 100)
				 + '0');
			_putchar(((a / 10) % 10)
				 + '0');
			_putchar((a % 10)
				 + '0');
		}
		if (a != (n * n))
		{
			_putchar(44);
			repeat(s, 32);
		}
	}
	_putchar('\n');
}
