#include "holberton.h"

/**
 * more_numbers - funtion that print numbers
 * Description: A function to print the numbers
 * from 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int h = 0, i, j;

	while (h < 10)
	{
		i = 48;
		while (i <= 49)
		{
			j = 48;
			while (j <= 57)
			{
				if (i == 49 && j == 53)
				{
					break;
				}
				_putchar(i);
				_putchar(j);
				j++;
			}
			i++;
		}
		_putchar('\n');
		h++;
	}
}
