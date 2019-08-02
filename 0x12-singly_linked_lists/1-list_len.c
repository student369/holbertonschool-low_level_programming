#include <stdio.h>
#include "lists.h"


/**
 * list_len - Function to get the len of the linked list
 * @h: The linked list
 * Author: José Calderón
 * Return: the size
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
