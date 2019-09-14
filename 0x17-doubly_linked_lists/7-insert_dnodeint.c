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
	size_t j = 0;
	dlistint_t *tmp0, *tmp1, *nw, *next;

	tmp0 = *h;
	tmp1 = *h;
	while (tmp0 != NULL)
	{
		tmp0 = tmp0->next;
		j++;
	}
	if (idx > (j - 1))
		return (NULL);
	j = 0;
	nw = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	idx -= 1;
	while (tmp1 != NULL)
	{
		if (idx == j)
		{
			next = tmp1->next;
			tmp1->next = nw;
			nw->prev = tmp1;
			nw->next = next;
			next->prev = nw;
			return (nw);
		}
		tmp1 = tmp1->next;
		j++;
	}
	return (NULL);
}
