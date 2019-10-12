#include "hash_tables.h"

/**
 * hash_table_print - function to print the hash table
 * @ht: The hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *start;
	unsigned long int i;
	int count;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0, count = 0; i < ht->size; i++)
	{
		start = ht->array[i];
		count = print_list(start, count);
	}
	printf("}\n");
}

/**
 * print_list - print out list
 * @head: the head of the hash table
 * @count: count of elements
 * Return: count
 */
int print_list(hash_node_t *head, int count)
{
	if (head == NULL)
		return (count);
	while (head != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("\'%s\': \'%s\'", head->key, head->value);
		count++;
		head = head->next;
	}
	return (count);
}
