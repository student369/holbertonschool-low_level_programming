#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Function to add a node in the end
 * @head: The head in the linked list
 * @str: The text to add in the end
 * Author: José Calderón
 * Return: the pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (nw == NULL || str == NULL)
		return (NULL);
	nw->str = strdup(str);
	nw->len = _strlen(nw->str);
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (NULL);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = nw;
	return (nw);
}
