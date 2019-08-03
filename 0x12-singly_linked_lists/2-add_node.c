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

	if (nw == NULL)
		return (NULL);
	nw->str = strdup(str);
	nw->len = _strlen(str);
	nw->next = (*head);
	(*head) = nw;
	return (nw);
}

/**
 * _strlen - funtion to get the size of an string
 * Description: A function to get the size of a
 * string given.
 * @s: The string to get size
x * Return: void
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
