#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * key_index - returns the index of the key
 * @key: the key to find the index to
 * @size: size of hash table array
 *
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code, index;

	hash_code = hash_djb2(key);

	index = hash_code % size;
	if (index > size - 1)
	{
		exit(EXIT_FAILURE);
	}

	return (index);
}
