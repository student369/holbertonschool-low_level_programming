#include "sort.h"
#include "deck.h"
#include <stdio.h>

/**
 * co - function to order some cards
 * @c: The deck
 *
 * Return: int
 */
int co(char c)
{
	int idc;

	idc = (int)c;
	if (c == 'A')
		idc = idc - 16;
	if (c == '1')
		idc = idc + 8;
	if (c == 'K')
		idc = idc + 10;
	return (idc);
}

/**
 * sort_deck - function that use the insertion sort
 * Description: A function that implements the
 * insertion sort algoritm to organize a deck of
 * cards.
 * @deck: The deck
 *
 * Return: void
 */
void sort_deck(deck_node_t **deck)
{
	deck_node_t *tmp0, *tmp1;

	if (deck == NULL || *deck == NULL)
		return;
	for (tmp0 = *deck; tmp0 != NULL; tmp0 = tmp0->next)
	{
		while (tmp0->prev != NULL &&
		       co(tmp0->card->value[0]) <
		       co(tmp0->prev->card->value[0]))
		{
			tmp0->prev->next = tmp0->next;
			if (tmp0->next != NULL)
				tmp0->next->prev = tmp0->prev;
			tmp0->next = tmp0->prev;
			tmp0->prev = tmp0->next->prev;
			tmp0->next->prev = tmp0;
			if (tmp0->prev == NULL)
				*deck = tmp0;
			else
				tmp0->prev->next = tmp0;
		}
	}
	for (tmp1 = *deck; tmp1 != NULL; tmp1 = tmp1->next)
	{
		while (tmp1->prev != NULL &&
		      tmp1->card->kind <
		       tmp1->prev->card->kind)
		{
			tmp1->prev->next = tmp1->next;
			if (tmp1->next != NULL)
				tmp1->next->prev = tmp1->prev;
			tmp1->next = tmp1->prev;
			tmp1->prev = tmp1->next->prev;
			tmp1->next->prev = tmp1;
			if (tmp1->prev == NULL)
				*deck = tmp1;
			else
				tmp1->prev->next = tmp1;
		}
	}
}
