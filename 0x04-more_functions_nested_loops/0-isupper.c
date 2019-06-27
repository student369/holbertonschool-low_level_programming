#include "holberton.h"

/**
 * _isupper - function to verify if is upper
 * Description: A function to verify if the
 * character is uppercase or not.
 * @c: The caracter to verify
 * Return: 1 if is uppercase 0 in other case.
 */
int _isupper(int c)
{
	for (int i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
