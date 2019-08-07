#include "lists.h"

/**
 * reverse_listint - Function to reverse a linked list.
 * @head: The linked list
 *
 * Return: the pointer to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *prev;

	prev = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	*head = prev;
	return (*head);
}
