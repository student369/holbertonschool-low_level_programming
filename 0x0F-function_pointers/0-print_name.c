#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Function to print a name
 * @name: The name to print
 * @f: The function to use
 * Author: José Calderón
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
