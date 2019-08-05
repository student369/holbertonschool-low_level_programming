#include "lists.h"

/**
 * add_nodeint - Function to add a new node in the linked list
 * @head: The head in the linked list
 * @n: The new value to add
 * Author: José Calderón
 * Return: the structure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = (*head);
	(*head) = nw;
	return (nw);
}
