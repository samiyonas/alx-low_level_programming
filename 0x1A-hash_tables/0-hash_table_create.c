#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of an array of the table
 *
 * Return: the new created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	return (ht);
}
