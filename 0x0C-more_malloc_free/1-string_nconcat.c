#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: the amount of byte to merge
 * Return: char pointer
 */
char *string_nconcat(char *s1, char s2, unsigned int n)
{
	char *ptr;
	int len_s1, len_s2, length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1] != '\0; len_s1++)
	{
		;
	}
	for (len_s2 = 0; len_s2 < n; len_s2++)
	{
		;
	}
	length = len_s1 + len_s2 + 1;
	ptr = malloc(sizeof(char) * length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
		ptr[len_s1] = s1[len_s1];
	}
	for (len_s2 = 0; len_s2 < n; len_s2++)
	{
		ptr[len_s1] = s2[len_s2];
		len_s1++;
	}
	ptr[len_s1] = '\0';
	return (ptr);
}
