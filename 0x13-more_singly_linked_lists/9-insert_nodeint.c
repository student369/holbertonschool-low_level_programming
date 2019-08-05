#include "lists.h"

/**
 * insert_nodeint_at_index - Function that insert an specific
 * node of the linked list.
 * @head: The linked list
 * @idx: The index of the insert
 * @n: The value of the node
 *
 * Return: the count of the nodes of the linked list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t j = 0;
	listint_t *tmp, *tmp2, *tmp3;

	tmp = *head;
	tmp2 = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		j++;
	}
	if (idx > (j - 1))
		return (NULL);
	j = 0;
	tmp3 = (listint_t *)malloc(sizeof(listint_t));
	if (tmp3 == NULL)
		return (NULL);
	tmp3->n = n;
	while (tmp2 != NULL)
	{
		if (idx == j)
		{
			tmp3->next = tmp2->next;
			tmp2->next = tmp3;
			return (tmp3);
		}
		tmp2 = tmp2->next;
		j++;
	}
	return (NULL);
}
