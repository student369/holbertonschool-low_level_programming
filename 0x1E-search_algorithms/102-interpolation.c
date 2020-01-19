#include "search_algos.h"

/**
 * interpolation_search - function to find a value using a
 * interpolation search algorithm.
 *
 * @array: The array
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: natural number value, 0 or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, hig, pos;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	hig = size - 1;
	pos = low + (((double)(hig - low) / (array[hig] - array[low]))
		     * (value - array[low]));
	while (low <= hig && value >= array[low] && value <= array[hig])
	{
		printf("Value checked array[%i] = [%i]\n",
		       (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			hig = pos - 1;
		pos = low + (((double)(hig - low) /
			      (array[hig] - array[low]))
			     * (value - array[low]));
	}
	if (value > array[hig])
		printf("Value checked array[%i] is out of range\n",
		       (int)pos);
	return (-1);
}
