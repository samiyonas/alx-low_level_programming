#include "main.h"

/**
 * _strncat - a function that returns a pointer
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer byte
 * Return: character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int result;
	int a;
	int j;

	result = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		result++;
	}
	for (a = result, j = 0; *(src + j) != *(src + n); a++, j++)
	{
		*(dest + a) = *(src + j);
	}
	return (dest);
}
