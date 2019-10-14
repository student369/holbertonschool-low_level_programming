#include "hash_tables.h"
#include "others.c"

/**
 * shash_table_create - create the SHT
 * @size: size of the shash table
 * Return: pointer to the begin
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *head;

	head = NULL;
	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);
	head->size = size;
	head->array = (shash_node_t **)malloc(
		size * sizeof(shash_node_t *));
	if (head->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		head->array[i] = NULL;
	head->shead = NULL;
	head->stail = NULL;
	return (head);
}

/**
 * shash_table_set - add elements to the SHT
 * @ht: pointer of the SHT
 * @key: key of the SHT
 * @value: value to store
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new, *tmp;

	if (ht == NULL || key == NULL)
		return (0);
	idx = hash_djb2((const unsigned char *) key);
	new = add_snode(&ht->array[idx], &ht->shead, key, value);
	if (new == NULL)
		return (0);
	tmp = ht->shead;
	if (tmp != NULL)
	{
		while (tmp->snext != NULL)
			tmp = tmp->snext;
	}
	ht->stail = tmp;
	return (1);
}

/**
 * add_snode - add node to table
 * @head: head of the DLL
 * @ohead: ordered linked list head
 * @key: key value to store
 * @value: value to store
 * Return: new node
 */
shash_node_t *add_snode(shash_node_t **head, shash_node_t **ohead,
			const char *key, const char *value)
{
	int i = val_replace(head, key, value);
	shash_node_t *nw = malloc(sizeof(shash_node_t)), *tmp = *head,
		*alp_tmp = *ohead;

	if (nw == NULL)
		return (NULL);
	if (i == 1)
		return (*head);
	nw = node_init(nw, key, value);
	if (nw == NULL)
		return (NULL);
	if (tmp != NULL)
		nw->next = tmp;
	*head = nw;
	if (alp_tmp == NULL)
		*ohead = nw;
	else if (strcmp(alp_tmp->key, nw->key) > 0)
	{
		*ohead = nw;
		nw->snext = alp_tmp;
		alp_tmp->sprev = nw;
	}
	else
	{
		while (strcmp(alp_tmp->key, nw->key) < 0 && alp_tmp->snext != NULL)
			alp_tmp = alp_tmp->snext;
		if (strcmp(alp_tmp->key, nw->key) > 0)
		{
			nw->snext = alp_tmp;
			nw->sprev = alp_tmp->sprev;
			nw->sprev->snext = nw;
			nw->snext->sprev = nw;
		}
		else
		{
			alp_tmp->snext = nw;
			nw->sprev = alp_tmp;
		}
	}
	return (nw);
}

/**
 * val_replace - function to verify if exist the value
 * @head: beginning of the list
 * @key: key to verify
 * @value: the value to change
 * Return: 1 or 0
 */
int val_replace(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			if (value == NULL)
				tmp->value = NULL;
			else
			{
				tmp->value = strdup(value);
				return (1);
			}
		}
		tmp = tmp->next;
	}
	return (0);
}
/**
 * node_init - function to init the new node
 * @node: the node
 * @key: the key
 * @val: the value
 * Return: the new node
 */
shash_node_t *node_init(shash_node_t *node, const char *key, const char *val)
{
	node->key = strdup(key);
	if (node->key == NULL)
		return (NULL);
	if (val == NULL)
		node->value = NULL;
	else
	{
		node->value = strdup(val);
		if (node->value == NULL)
			return (NULL);
	}
	node->next = node->snext = node->sprev = NULL;
	return (node);
}
