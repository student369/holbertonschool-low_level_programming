#include "search_algos.h"

/**
 * binary_search - function to find a value using a
 * binary search algorithm.
 *
 * @array: The array
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: natural number value, 0 or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low, hig, mid, i;

	low = 0;
	hig = size - 1;
	while (low <= hig)
	{
		mid = ((low + hig) / 2);
		printf("Searching in array: ");
		if (low == hig)
			printf("%i\n", hig);
		else
		{
			printf("%i, ", low);
			for (i = (low + 1); i < hig; i++)
				printf("%i, ", i);
			printf("%i\n", hig);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			hig = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
