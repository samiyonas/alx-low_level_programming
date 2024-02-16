#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;

	if (ht == NULL || ht->size == 0)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(curr->key);
			free(curr->value);
			free(curr->next);
			curr = NULL;
			free(curr);
		}
		else
		{
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
