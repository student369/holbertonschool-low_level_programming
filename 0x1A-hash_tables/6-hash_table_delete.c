#include "hash_tables.h"

/**
 * hash_table_delete - function to felete the hash table
 * @ht: The hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - function to free a list
 * @head: The head of the list.
 *
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		if (tmp->value)
			free(tmp->value);
		free(tmp);
	}
}
