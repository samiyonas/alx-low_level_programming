#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: character pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, counter = 0;
	char *ptr;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			counter++;
		}
	}

	ptr = malloc(sizeof(char) * (counter + 1 + ac));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[j] = av[i][j];
		}
		ptr[j] = '\n';
	}
	return (ptr);
}
