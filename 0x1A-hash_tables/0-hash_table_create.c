#include "hash_tables.h"

/**
 * hash_table_create - funtion to create a hash table
 * Description: This function create a hash table and
 * returned it.
 * @size: The hash_table size
 *
 * Return: pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *rt;
	int i;

	rt = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (rt == NULL)
		return (NULL);
	rt->size = size;
	rt->array = (hash_node_t **)malloc(
		sizeof(hash_node_t *) * size);
	if (rt->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		rt->array[i] = NULL;
	}
	return (rt);
}
