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
	size_t j = 0;
	dlistint_t *tmp0, *tmp1, *tmp2;

	tmp0 = *head;
	tmp1 = *head;
	while (tmp0 != NULL)
	{
		if (index == 0)
		{
			*head = tmp0->next;
			free(tmp0);
			return (1);
		}
		else if ((index - 1) == j)
			tmp2 = tmp0;
		tmp0 = tmp0->next;
		j++;
	}
	if (index > (j - 1))
		return (-1);
	j = 0;
	while (tmp1 != NULL)
	{
		if (index == j)
		{
			tmp2->prev = tmp1->prev;
			tmp2->next = tmp1->next;
			tmp1->next = tmp2;
			free(tmp1);
			return (1);
		}
		tmp1 = tmp1->next;
		j++;
	}
	return (-1);
}
