#include "main.h"

/**
 * _memset - a fuction fills memory with a constant byte.
 * @s: pointer variable
 * @b: character variable
 * @n: unsigned integer variable
 * Return: character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
