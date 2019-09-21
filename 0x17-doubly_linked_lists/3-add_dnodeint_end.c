 #include "lists.h"

/**
 * add_dnodeint_end - Function to add a node in the double
 * linked list
 * @head: The head in the linked list
 * @n: The value to set in the end.
 * Author: José Calderón
 * Return: the pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *tmp0;

	nw = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	tmp0 = *head;
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		nw->prev = NULL;
		(*head) = nw;
		return (nw);
	}
	while (tmp0->next != NULL)
		tmp0 = tmp0->next;
	tmp0->next = nw;
	nw->prev = tmp0;
	return (nw);
}
