#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete an specific
 * node of the linked list.
 * @head: The linked list
 * @index: The index of the insert
 *
 * Return: the count of the nodes of the linked list.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t j = 0;
	listint_t *tmp, *tmp2, *tmp3;

	tmp = *head;
	tmp2 = *head;
	while (tmp != NULL)
	{
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		else if ((index - 1) == j)
			tmp3 = tmp;
		tmp = tmp->next;
		j++;
	}
	if (index > (j - 1))
		return (-1);
	j = 0;
	while (tmp2 != NULL)
	{
		if (index == j)
		{
			tmp3->next = tmp2->next;
			tmp2->next = tmp3;
			free(tmp2);
			return (1);
		}
		tmp2 = tmp2->next;
		j++;
	}
	return (-1);
}
