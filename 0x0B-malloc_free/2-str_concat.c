#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenat two strings
 * @s1: the first string
 * @s2: the second string
 * Return: character pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int count1;
	unsigned int count2;
	unsigned int size;
	unsigned int i;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (count1 = 0; s1[count1]; count1++)
	{
		;
	}
	for (count2 = 0; s2[count2]; count2++)
	{
		;
	}
	size = count1 + count2 + 1;
	concat = malloc(size * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		i < count1 ? (concat[i] = s1[i]) : (concat[i] = s2[i - count1]);
	}
	return (concat);
}
