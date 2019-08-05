 #include "lists.h"

/**
 * add_nodeint_end - Function to add a node in the end
 * @head: The head in the linked list
 * @n: The value to add in the end
 * Author: José Calderón
 * Return: the pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;

	nw = (listint_t *)malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	tmp = *head;
	nw->n = n;
	if (*head == NULL)
	{
		*head = nw;
		nw->next = NULL;
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = nw;
	nw->next = NULL;
	return (nw);
}
