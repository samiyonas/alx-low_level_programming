#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy chars from one string to another
 * @dest: string to copy to
 * @src: string to copy from
 * Return: character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
