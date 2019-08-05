#include "lists.h"

/**
 * get_nodeint_at_index - Function that get an specific
 * node of the linked list.
 * @head: The linked list
 * @index: The index of the element to get
 *
 * Return: the count of the nodes of the linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t j = 0;
	listint_t *tmp, *tmp2;

	tmp = head;
	tmp2 = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		j++;
	}
	if (index > (j - 1))
		return (NULL);
	j = 0;
	while (tmp2 != NULL)
	{
		if (index == j)
			return (tmp2);
		tmp2 = tmp2->next;
		j++;
	}
	return (NULL);
}
