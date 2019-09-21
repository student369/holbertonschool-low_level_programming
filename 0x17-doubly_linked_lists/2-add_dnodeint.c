#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function to add a node in the  double linked list
 * @head: The double linked list
 * @n: The value to add.
 *
 * Return: the number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	nw = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = (*head);
	nw->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = nw;
	(*head) = nw;
	return ((*head));
}
