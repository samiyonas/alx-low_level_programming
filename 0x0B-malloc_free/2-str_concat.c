#include <stdlib.h>
#include "main.h"

/**
 * str_concat - string concatenation
 * @s1: firtst string
 * @s2: second string
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, length, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
		;
	}
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	{
		;
	}
	length = len_s1 + len_s2 + 1;

	ptr = malloc(sizeof(char) * length);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
