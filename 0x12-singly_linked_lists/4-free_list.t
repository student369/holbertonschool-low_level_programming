#include <stdio.h>
#include "lists.h"

/**
 * free_list - Function to clean the linked list
 * @h: The linked list
 * Author: José Calderón
 * Return: void
 */
void free_list(list_t *head)
{
	list_t tmp = *head;

	while (head != NULL)
	{
		free(head->str);
		free(head->len);
		free(head);
		head = tmp->next;
	}
}
