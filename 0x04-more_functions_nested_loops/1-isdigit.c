#include "holberton.h"

/**
 * _isdigit - funtion to verify a digit
 * Description: A function to verify if the
 * character given is a digit.
 * @c: The caracter to verify
 * Return: 1 if is a digit 0 in other case.
 */
int _isdigit(int c)
{
	for (int i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
