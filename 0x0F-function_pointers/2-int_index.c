#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searchs for an integer
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 *
 * Return: -1 -> if no element match, or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
