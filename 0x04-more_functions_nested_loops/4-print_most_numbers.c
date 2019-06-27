#include "holberton.h"

/**
 * print_most_numbers - funtion that print numbers
 * Description: A function to print numbers
 * from 0 to 9 except the 2 and 4
 * Return: numbers between 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		if (!(i == 50 || i == 52))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
