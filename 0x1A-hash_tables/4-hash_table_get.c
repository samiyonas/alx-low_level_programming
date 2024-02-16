#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieve a value from a hash table
 * @ht: hash table
 * @key: hashing key
 *
 * Return: string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *res;
	hash_node_t *curr;
	const unsigned char *k = (const unsigned char *)key;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index(k, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	if (ht->array[index]->next == NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			if (strcmp(curr->key, key) == 0)
			{
				res = curr->value;
				curr = NULL;
				free(curr);
				return (res);
			}
			curr = curr->next;
		}
		free(curr);
	}
	return (NULL);
}
