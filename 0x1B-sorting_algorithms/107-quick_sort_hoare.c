#include "sort.h"

/**
 * qs - function that use the recursion
 * Description: A function that implements the
 * internal recursion of the quicksort algoritm.
 * @array: The subarray
 * @lo: The low value
 * @hi: The hi value
 * @os: The original len
 *
 * Return: void
 */
void qs(int *array, int lo, int hi, int os)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, os);
		qs(array, lo, p, os);
		qs(array, p + 1, hi, os);
	}
}

/**
 * partition - function that use the recursion
 * Description: A function that implements the
 * internal recursion of the quicksort algoritm.
 * @array: The subarray
 * @lo: The low value
 * @hi: The hi value
 * @os: The original len
 *
 * Return: the partition index
 */

int partition(int *array, int lo, int hi, int os)
{
	int pivot = 0, i = 0, j = 0, tmp = 0;

	pivot = array[lo];
	i = lo - 1;
	j = hi + 1;
	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return (j);
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, os);
	}
}

/**
 * quick_sort_hoare - function that use the quicksort sort
 * Description: A function that implements the
 * quicksort algoritm with the hoare implementation
 * to organize the array given.
 * @array: The array to order
 * @size: The size
 *
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qs(array, 0, size - 1, size);
}
