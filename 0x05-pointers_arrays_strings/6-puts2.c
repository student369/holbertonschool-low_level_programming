#include "holberton.h"

/**
 * puts2 - funtion to print a even characters
 * Description: A function to print the
 * even characters begining with the first
 * in the default standar output.
 * @str: The string to print
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || (i % 2 == 0))
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
