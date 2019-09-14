#include "lists.h"

/**
 * sum_dlistint - Function that sum the node values
 * of a double linked list.
 * @head: The double linked list
 *
 * Author: José Calderón
 * Return: the count of the elements in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
