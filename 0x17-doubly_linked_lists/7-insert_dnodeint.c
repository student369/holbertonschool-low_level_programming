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
	dlistint_t *nw, *tmp0, *tmp1;
	unsigned int i;

	nw = NULL;
	nw = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if ((*h) == NULL)
	{
		nw->next = NULL;
		(*h) = nw;
		nw->prev = (*h);
		return (nw);
	}
	else
	{
		tmp0 = (*h);
		tmp1 = NULL;
		for (i = 0; i < (idx - 1); i++)
		{
			tmp0 = tmp0->next;
			tmp1 = tmp0->next;
		}
		nw->next = tmp1;
		tmp1->prev = nw->next;
		tmp0->next = nw;
		nw->prev = tmp0;
		return (nw);
	}
	return (NULL);
}
