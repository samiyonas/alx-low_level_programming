#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i, count = 0;

	printf("{");
	if (ht != NULL && ht->size != 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL && ht->array[i]->next == NULL)
			{
				if (count == 0)
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				else
					printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				count++;
			}
			else if (ht->array[i] != NULL)
			{
				curr = ht->array[i];
				while (curr != NULL)
				{
					if (count == 0)
						printf("'%s': '%s'", curr->key, curr->value);
					else
						printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					count++;
					curr = curr->next;
				}
			}
		}
	}
	printf("}\n");
}
