#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer variable
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char k[1000];

	i = j = 0;
	while (s[i] != '\0')
	{
		s[i] = k[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		k[j] = s[i];
		i--;
		j++;
	}
	s[j++] = '\0';
}
