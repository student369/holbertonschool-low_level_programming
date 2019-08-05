#include "lists.h"

/**
 * sum_listint - Function that sum the node values
 * of a linked list.
 * @head: The linked list
 *
 * Author: José Calderón
 * Return: the count of the elements in the linked list
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	const listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
