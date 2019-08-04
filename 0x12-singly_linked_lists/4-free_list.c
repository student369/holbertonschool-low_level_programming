#include "lists.h"


/**
 * free_list - Function to print a list
 * @head: The linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
