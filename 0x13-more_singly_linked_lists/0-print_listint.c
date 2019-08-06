#include "lists.h"

/**
 * print_listint - Function print the elements
 * of a linked list.
 * @h: The linked list
 * Author: José Calderón
 * Return: the count of the elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
