#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that insert an specific
 * node of the linked list.
 * @h: The double linked list
 * @idx: The index of the insert
 * @n: The value of the node
 *
 * Return: the count of the nodes of the linked list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *nw;

	tmp = *h;
	for (i = 0; tmp != NULL && i < (idx - 1); i++)
		tmp = tmp->next;
	nw = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (nw == NULL || tmp == NULL)
		return (NULL);
	nw->n = n;
	if (tmp->next == NULL)
	{
		nw->next = NULL;
		nw->prev = tmp;
		tmp->next = nw;
		tmp = nw;
		return (nw);
	}
	else if (tmp != NULL)
	{
		nw->next = tmp->next;
		nw->prev = tmp;
		if (tmp->next != NULL)
			tmp->next->prev = nw;
		tmp->next = nw;
		return (nw);
	}
	return (NULL);
}
