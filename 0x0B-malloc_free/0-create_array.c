#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array and initialize it
 * @size: size of memory location
 * @c: char variable
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (ptr);
}
