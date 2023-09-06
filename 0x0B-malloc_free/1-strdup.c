#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate of a string
 * @str: character pointer
 * Return: character pointer
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	len++;
	if (len < 1)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * len);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
