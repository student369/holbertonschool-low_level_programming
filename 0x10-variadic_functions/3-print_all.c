#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - Function to print anything elements given
 * as a parameters.
 * @format: The text with the format (c, i, f, s)
 *
 * Author: José Calderón
 * Description: A function to print various elements from
 * these formats: char (c), integer (i), float (f) and char*(s)
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	unsigned int i = 0;

	va_start(vl, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_args(vl, int));
			break;
		case 'i':
			printf("%i", va_args(vl, int));
			break;
		case 'f':
			printf("%f", va_args(vl, float));
			break;
		case 's':
			if (va_args(vl, char *) == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", va_args(vl, char *));
			break;
		default:
			i++;
			continue;
		while (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
