#include "holberton.h"

/**
 * jack_bauer - get the time from 00:00 to 23:59
 * Return: 1 if is positive -1 if is negative and 0 if is zero
 */
void jack_bauer(void)
{
	int i, j, k, l;
	for (i = 48; i <= 50; i++)
	{
		for (j =48; j <= 51; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
