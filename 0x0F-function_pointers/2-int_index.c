#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Function to find a number in
 *  an array given the function
 * @array: The array to do the action
 * @size: The size of the array
 * @cmp: The function to compare
 * Author: José Calderón
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int r = -1;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (r);
}
