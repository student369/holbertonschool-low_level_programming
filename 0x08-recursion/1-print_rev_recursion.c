#include "holberton.h"

/**
 * _print_rev_recursion - function to print the
 * text in reverse order.
 * @s: the string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
