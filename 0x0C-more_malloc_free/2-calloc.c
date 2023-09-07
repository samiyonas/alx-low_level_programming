#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant bytes
 * @s: where to fill
 * @b: byte used to fill
 * @n: how many bytes to fill
 * Return: character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

/**
 * _calloc - allocate memory for an array
 * @nmemb: unsigned integer variable
 * @size: unsigned integer variable
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	arr = _memset(arr, 0, nmemb * size);
	return (arr);
}
