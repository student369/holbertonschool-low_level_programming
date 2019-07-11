#include "holberton.h"
/**
 * _strlen_recursion - get the lenght of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	i = (_strlen_recursion(s + 1));
	return (i + 1);
}
/**
 * first_is_last - returns the square of a number
 * @f: initial position
 * @l: end
 * Return: eval the palindrome
 **/

int _fil(char *f, char *l)
{
	if (*f != *l)
	{
		return (0);
	}
	else if (f >= l)
	{
		return (1);
	}
	else
	{
		return (_fil(f + 1, l - 1));
	}
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0
 * @s: pointer to string
 * Return: 1 if palindrome, 0 in not
 **/
int is_palindrome(char *s)
{

	int len = _strlen_recursion(s);
	char *first;
	char *last;

	first  = s;
	last = (s + len - 1);

	return (_fil(first, last));
}
