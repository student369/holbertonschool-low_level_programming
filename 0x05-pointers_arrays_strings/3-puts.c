#include "holberton.h"

/**
 * _puts - funtion to print a string
 * Description: A function to print a string
 * in the default standar output.
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
