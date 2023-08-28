#include "main.h"

/**
 * _memset - a fuction fills the first n bytes of the memory area pointed to by s with constant byte b.
 * @s: pointer variable
 * @b: character variable
 * @n: unsigned integer variable
 * Return: character pointer
 */
char *_memset(char *s, char b, unsigned int n){
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
