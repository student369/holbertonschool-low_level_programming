#include "sort.h"

/**
 * bubble_sort - function that use the buble sort
 * Description: A function that implements the
 * buble sort algoritm to organize the array given.
 * @array: The array to order
 * @size: The size
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, tmp, swp;

	if (size < 2)
		return;
	do {
		swp = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				swp = 1;
				print_array(array, size);
			}
		}
	} while (swp);
}
