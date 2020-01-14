#include "search_algos.h"

/**
 * linear_search - function to find a value using a
 * linear algorithm.
 *
 * @array: The array
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: natural number value, 0 or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%i] = [%i]\n",
			       i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%i] = [%i]\n",
			       i, array[i]);
		}
	}
	return (-1);
}
