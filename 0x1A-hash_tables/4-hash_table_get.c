#include "hash_tables.h"

/**
 * hash_table_get - function to get a value by the key
 * @ht: The hash table
 * @key: The key
 *
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *crnt;
	int res;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	crnt = ht->array[idx];
	if (crnt == NULL)
		return (NULL);
	while (crnt != NULL)
	{
		res = strcmp(key, crnt->key);
		if (res == 0)
			return (crnt->value);
		crnt = crnt->next;
	}
	return (NULL);
}
