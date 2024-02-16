#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - insert a node to a hash table
 * @ht: hash table
 * @key: used to hashing
 * @value: value of the node
 *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *k = (const unsigned char *)key;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (key == NULL)
	{
		return (1);
	}

	index = key_index(k, ht->size);

	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (0);
}
