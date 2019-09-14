#include "lists.h"

/**
 * get_dnodeint_at_index - Function that get an specific
 * node of the double linked list.
 * @head: The double linked list
 * @index: The index of the element to get
 *
 * Return: the count of the nodes of the double linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t j = 0;
	dlistint_t *tmp0, *tmp1;

	tmp0 = head;
	tmp1 = head;
	while (tmp0 != NULL)
	{
		tmp0 = tmp0->next;
		j++;
	}
	if (index > (j - 1))
		return (NULL);
	j = 0;
	while (tmp1 != NULL)
	{
		if (index == j)
			return (tmp1);
		tmp1 = tmp1->next;
		j++;
	}
	return (NULL);
}
