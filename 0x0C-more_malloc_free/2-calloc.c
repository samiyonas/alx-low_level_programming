#include <stdlib.h>
#include "main.h"

/**
 * _calloc - replica of standard library function calloc
 * @nmemb: size of the array
 * @size: size of data type
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
