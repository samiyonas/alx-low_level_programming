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
	hash_node_t *curr, *s;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		s = ht->array[i];
		while (s != NULL)
		{
			curr = s;
			s = s->next;
			free(curr->key);
			free(curr->value);
			free(curr);
		}
	}
	free(ht->array);
	free(ht);
}
