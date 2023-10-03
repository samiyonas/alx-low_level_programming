#include "main.h"

/**
 * _strchr - a function that locates a char in string
 * @s: pointer variable
 * @c: character variable
 * Return: character pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
