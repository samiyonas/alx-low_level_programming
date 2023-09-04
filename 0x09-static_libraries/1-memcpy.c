#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer variable
 * @src: pointer variable
 * @n: unsigned integer variable
 * Return: character pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
