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

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	*ptr = c;

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
