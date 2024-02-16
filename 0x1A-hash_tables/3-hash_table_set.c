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
	hash_node_t *new_node, *curr;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}
	index = key_index(k, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			curr = NULL;
			free(curr);
			return (1);
		}
		curr = curr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
