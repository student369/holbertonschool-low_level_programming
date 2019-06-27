#include "holberton.h"

/**
 * print_numbers - funtion to verify a digit
 * Description: A function to verify if the
 * character given is a digit.
 * Return: void
 */
void print_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
