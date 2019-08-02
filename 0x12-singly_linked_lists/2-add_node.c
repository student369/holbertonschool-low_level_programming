#include <stdio.h>
#include "lists.h"

/**
 * add_node - Function to allocate in memory
 * @head: The head in the linked list
 * @str: The text to add
 * Author: José Calderón
 * Return: the pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw = malloc(sizeof(list_t));

	nw->str = strdup(str);
	nw->len = _strlen(nw->str);
	nw->next = (*head);
	(*head) = nw;
	return (nw);
}
