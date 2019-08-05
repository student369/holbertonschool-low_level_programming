#include "lists.h"

/**
 * pop_listint - Function to remove the top node
 * in the linked list.
 * @head: The head in the linked list
 *
 * Author: José Calderón
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int r;

	if (*head == NULL)
		return (0);
	tmp = *head;
	r = (*head)->n;
	*head = tmp->next;
	free(tmp);
	return (r);
}
