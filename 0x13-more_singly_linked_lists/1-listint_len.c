#include "lists.h"

/**
 * listint_len - Function that return the nodes
 * of a linked list.
 * @h: The linked list
 * Author: José Calderón
 * Return: the count of the nodes of the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		j++;
	}
	return (j);
}
