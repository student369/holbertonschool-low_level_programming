#include <stdio.h>
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
	char *s;

	va_start(vl, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", ((char)va_arg(vl, int)));
			break;
		case 'i':
			printf("%i", (va_arg(vl, int)));
			break;
		case 'f':
			printf("%f", (va_arg(vl, double)));
			break;
		case 's':
			s = va_arg(vl, char *);
			if (s == NULL)
			{
				printf("(nil)");			
			}
			else
			{
				printf("%s", s);
			}			
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
