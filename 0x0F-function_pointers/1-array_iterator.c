#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Function to loop an array and
 * do an action
 * @array: The array to do the action
 * @size: The size of the array
 * @action: The action to do in the array
 * Author: José Calderón
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		action(array[i]);
}
