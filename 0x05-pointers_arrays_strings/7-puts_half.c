#include "holberton.h"

/**
 * puts_half - funtion to get the half part of an string
 * Description: A function to get the half of an string.
 * @str: The string to bit
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, h, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	h = i / 2;
	for (j = h; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
