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
	hash_node_t *curr;

	if (ht == NULL || key == NULL)
	{
		free(new_node);
		return (0);
	}
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index(k, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				free(curr);
				return (1);
			}
			curr = curr->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
