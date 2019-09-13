#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function to print a double linked list
 * Description: A funtion to print each element of a double
 * linked list.
 * @h: The double linked list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t i = 0;	

	if (h == NULL || h->next == NULL)
		return (0);
	c = h;
	while (c)
	{
		printf("%i\n", c->n);
		c = c->next;
		i++;		
	}
	return (i);
}
