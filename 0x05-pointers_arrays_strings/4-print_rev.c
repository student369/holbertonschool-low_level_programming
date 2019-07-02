#include "holberton.h"

/**
 * print_rev - function to print a string inversing
 * Description: A function to print a text in inverse
 * order.
 * @s: The string to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i - 1;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
