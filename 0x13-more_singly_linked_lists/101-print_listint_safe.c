#include "lists.h"

/**
 * print_listint_safe - Function print the elements
 * of a linked list.
 * @head: The linked list
 *
 * Return: the counted elements of the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j = 0;
	listpt_t *tmp, *h2 = NULL;

	while (head != NULL)
	{
		tmp = h2;
		for (; tmp != NULL; tmp = tmp->next)
		{
			if (tmp->pt == head)
			{
				printf("-> [%p] %i\n", (void *)head, head->n);
				free_listpt(h2);
				return (j);
			}
		}
		printf("[%p] %i\n", (void *)head, head->n);
		add_npt(&h2, head);
		head = head->next;
		j++;
	}
	free_listpt(h2);
	return (j);
}

/**
 * add_npt - Function to add a node
 * @h: The linked list
 * @p: The pointer to add
 *
 * Return: void
 */
listpt_t *add_npt(listpt_t **h, const listint_t *p)
{
	listpt_t *nw = malloc(sizeof(listpt_t));

	if (nw == NULL)
	{
		free_listpt(*h);
		exit(98);
	}
	nw->pt = (void *)p;
	nw->next = *h;
	*h = nw;
	return (nw);
}

/**
 * free_listpt - Function to free a linked list.
 * @h: The linked list
 *
 * Return: void
 */
void free_listpt(listpt_t *h)
{
	listpt_t *tmp;

	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
}
