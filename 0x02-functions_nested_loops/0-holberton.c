#include <string.h>
#include "holberton.h"

/**
 * main - Entry point
 * Description: A program that
 * show Holberton in the stdout
 * Return: 0 Always
 */
int main(void)
{
	char *t = "Holberton\n";
	int l = strlen(t);
	int i;

	for (i = 0;  i <= l; i++)
	{
		_putchar(t[i]);
	}
	return (0);
}
