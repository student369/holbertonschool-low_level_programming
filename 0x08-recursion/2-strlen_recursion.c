#include "holberton.h"
/**
 * _strlen_recursion - function that show the length of a string
 * @s: the string
 * Description: returns the length of a string
 * Return: the lenght of string
 */
int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		r = (_strlen_recursion(s + 1));
		return (r + 1);
	}
}
