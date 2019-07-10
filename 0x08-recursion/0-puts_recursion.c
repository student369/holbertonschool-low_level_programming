#include "holberton.h"

/**
 * _puts_recursion - function to fill the memory with a constant
 * @s: the string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
