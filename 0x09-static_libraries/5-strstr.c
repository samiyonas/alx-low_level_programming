#include "main.h"

/**
 * _strstr - locate substring in a string
 * @haystack: pointer variable
 * @needle: pointer variable
 * Return: character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int needleLen = 0, i = 0, j, tmp, check;

	while (needle[needleLen] != '\0')
		needleLen++;

	while (haystack[i] != '\0')
	{
		tmp = i;
		check = 0;
		for (j = 0; j < needleLen; j++)
		{
			if (haystack[tmp] == needle[j])
			{
				tmp++;
				check++;
			}
		}
		if (check == needleLen)
			return (haystack + i);
		i++;
	}

	return (0);
}
