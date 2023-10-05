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

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
