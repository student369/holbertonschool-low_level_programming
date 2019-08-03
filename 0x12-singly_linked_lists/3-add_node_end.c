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
	list_t *tmp;

	if (nw == NULL)
		return (NULL);
	tmp = *head;
	nw->str = strdup(str);
	nw->len = _strlen(str);
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
	return (tmp->next);
}

/**
 * _strlen - funtion to get the size of an string
 * Description: A function to get the size of a
 * string given.
 * @s: The string to get size
 * Return: void
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
