#include "holberton.h"

/**
 * main - Entry point
 * Description: A program that
 * show Holberton in the stdout
 * Return: 0 Always
 */
int main(void)
{
	char *t = "Holberton";
	int i;

	for (i = 0;  t[i] != '\0'; i++)
	{
		_putchar(t[i]);
	}
	_putchar('\n');
	return (0);
}
