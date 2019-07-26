#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function to print the elements fiven
 * as a parameters.
 * @separator: The separator to use
 * @n: The numbers to print separated by commas
 *
 * Author: José Calderón
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;

	if (separator == NULL)
		return;

	if (n == 0)
		return;
	va_start(vl, n);
	for (i = 0; i < n; i++)
		if (i == (n - 1))
			printf("%d\n", va_arg(vl, int));
		else
			printf("%d%s", va_arg(vl, int), separator);
	va_end(vl);
}
