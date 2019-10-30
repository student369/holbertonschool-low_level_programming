#include "sort.h"
/**
 * insertion_sort_list - function that use the insertion sort
 * Description: A function that implements the
 * insertion sort algoritm to organize the double
 * linked list given.
 * @list: The double linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp0;

	if (list == NULL || *list == NULL)
		return;
	for (tmp0 = *list; tmp0 != NULL; tmp0 = tmp0->next)
	{
		while (tmp0->prev != NULL &&
		      tmp0->n < tmp0->prev->n)
		{
			tmp0->prev->next = tmp0->next;
			if (tmp0->next != NULL)
				tmp0->next->prev = tmp0->prev;
			tmp0->next = tmp0->prev;
			tmp0->prev = tmp0->next->prev;
			tmp0->next->prev = tmp0;
			if (tmp0->prev == NULL)
				*list = tmp0;
			else
				tmp0->prev->next = tmp0;
			print_list(*list);
		}
	}
}
