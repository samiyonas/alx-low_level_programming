#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory space
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		return (NULL);
	}

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
