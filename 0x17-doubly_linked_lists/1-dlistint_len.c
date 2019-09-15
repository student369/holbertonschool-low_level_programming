#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function to get the len of a double linked list
 * @h: The double linked list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t i = 0;

	if (h == NULL)
		return (0);
	c = h;
	while (c)
	{
		c = c->next;
		i++;
	}
	return (i);
}
