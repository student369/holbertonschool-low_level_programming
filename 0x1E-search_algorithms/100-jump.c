#include "search_algos.h"

/**
 * jump_search - function to find a value using a
 * jump search algorithm.
 *
 * @array: The array
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: natural number value, 0 or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t stp, pos;

	if (array == NULL || size == 0)
		return (-1);
	stp = sqrt(size);
	pos = 0;
	while (pos < size + stp)
	{
		if (array[pos] >= value || pos > size)
		{
			printf("Value found between indexes [%i] and [%i]\n",
			       (int)(pos - stp), (int)pos);
			pos = pos - stp;
			break;
		}
		else
		{
			printf("Value chcked array[%i] = [%i]\n",
			       (int)pos, array[pos]);
			pos = pos + stp;
		}
	}
	for (; pos < size; pos++)
	{
		printf("Value checked array[%i] = [%i]\n",
		       (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
	}
	return (-1);
}
