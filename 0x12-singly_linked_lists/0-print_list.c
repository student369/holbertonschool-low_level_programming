#include <stdio.h>
#include "lists.h"


/**
 * print_list - Function to allocate in memory
 * @h: The linked list
 * Author: José Calderón
 * Return: void
 */
size_t print_list(const list_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
