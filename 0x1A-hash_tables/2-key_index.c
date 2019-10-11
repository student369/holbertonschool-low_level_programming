#include "hash_tables.h"

/**
 * key_index - function to get an index of a key
 * @key: The key
 * @size: the hash table size
 *
 * Return: a big number.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
