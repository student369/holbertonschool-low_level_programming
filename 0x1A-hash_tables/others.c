#include "hash_tables.h"

/**
 * shash_table_get - function to get the value
 * @ht: the hash table
 * @key: the key
 * Return: the value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *start;
	int res;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = hash_djb2((const unsigned char *) key);
	start = ht->array[idx];
	if (start == NULL)
		return (NULL);
	while (start != NULL)
	{
		res = strcmp(key, start->key);
		if (res == 0)
			return (start->value);
		start = start->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the hash table like a dictionary
 * @ht: the hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *start;
	int count;

	if (ht == NULL)
		return;
	start = ht->shead;
	count = 0;
	printf("{");
	while (start != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("\'%s': \'%s'", start->key, start->value);
		count++;
		start = start->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the values in reverse
 * @ht: the hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail;
	int count;

	if (ht == NULL)
		return;
	tail = ht->stail;
	count = 0;
	printf("{");
	while (tail != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("\'%s': \'%s'", tail->key, tail->value);
		count++;
		tail = tail->sprev;
	}
	printf("}\n");
}
#include "hash_tables.h"

/**
 * shash_table_delete - function to felete the hash table
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_slist(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_slist - function to free a list
 * @head: The head of the list.
 *
 * Return: void
 */
void free_slist(shash_node_t *head)
{
	shash_node_t *tmp;

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
