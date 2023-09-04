#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer variable
 * @s2: pointer variable
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, difference = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			difference = s1[i] - s2[i];
			break;
		}
	}
	if (difference == 0 && s1[i] == '\0')
	{
		difference = s1[i] - s2[i];
	}
	return (difference);
}
