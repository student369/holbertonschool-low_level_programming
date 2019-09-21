#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that delete an specific
 * node of the double linked list.
 * @head: The double linked list
 * @index: The index of the insert
 *
 * Return: the count of the nodes of the linked list.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dl;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	dl = *head;
	for (i = 0; dl != NULL && i < index; i++)
		dl = dl->next;
	if (dl == NULL)
		return (-1);
	if (*head == dl)
		*head = dl->next;
	if (dl->next != NULL)
		dl->next->prev = dl->prev;
	if (dl->prev != NULL)
		dl->prev->next = dl->next;
	free(dl);
	return (1);
}
