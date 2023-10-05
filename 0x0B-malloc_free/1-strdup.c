#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate of a string
 * @str: string literal
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str) != '\0'; i++)
	{
		;
	}
	i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + i) = '\0';

	return (ptr);
}
