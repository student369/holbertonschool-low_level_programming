#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - Function to print the strings given
 * as a parameters.
 * @separator: The separator to use
 * @n: The strings to print separated by commas
 *
 * Author: José Calderón
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;
	char *c;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(vl, char*);
		if (i == (n - 1))
			printf("%s\n", ((c == NULL) ? "(nill)" : c));
		else
			printf("%s%s", ((c == NULL) ? "(nill)" : c), separator);
}
	va_end(vl);
}
