#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array
 * @min: starting number
 * @max: last number
 * Return: int *
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * ((max - min) - 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ((max - min) - 1); i++)
	{
		ptr[i] = min + j;
		j++;
	}

	return (ptr);
}
