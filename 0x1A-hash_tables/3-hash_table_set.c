#include "hash_tables.h"

/**
 * hash_table_set - function to get an index of a key
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: a big number.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *nw;

	if (ht == NULL || strlen(key) == 0 || ht->size <= 0)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	nw = add_node(&ht->array[idx], key, value);
	if (nw != NULL)
		return (1);
	else
		return (0);
}

/**
 * add_node - add a new node to the hash table.
 * @head: the head of the linked list
 * @key: the key
 * @value: the value
 * Return: a new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *nw, *tmp, *tmp2;
	char *tmp_str;

	tmp = *head;
	nw = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (nw == NULL)
		return (NULL);
	nw->key = strdup(key);
	if (nw->key == NULL)
		return (NULL);
	if (value == NULL)
		nw->value = NULL;
	else
	{
		nw->value = strdup(value);
		if (nw->value == NULL)
			return (NULL);
	}
	if (tmp == NULL)
		nw->next = NULL;
	else
	{
		tmp2 = tmp;
		while (tmp2 != NULL)
		{
			if (strcmp(tmp2->key, nw->key) == 0)
			{
				tmp_str = tmp2->value;
				tmp2->value = strdup(value);
				some_frees(nw, tmp_str);
				return (tmp2);
			}
			tmp2 = tmp2->next;
		}
		nw->next = tmp;
		*head = nw;
	}
	*head = nw;
	return (nw);
}

/**
 * some_frees - free some things
 * @nw: the node to frees
 * @s: an string
 *
 * Return: void
 */
void some_frees(hash_node_t *nw, char *s)
{
	free(nw->key);
	free(nw->value);
	free(nw);
	free(s);
}
