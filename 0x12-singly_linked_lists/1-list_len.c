#include <stdio.h>
#include "lists.h"


/**
 * print_list - Function to allocate in memory
 * @h: The linked list
 * Author: José Calderón
 * Return: void
 */
size_t list_len(const list_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
