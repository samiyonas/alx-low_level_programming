#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of integer
 * @size: size of an array
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int num;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			num = cmp(array[i]);
			if (num)
			{
				return (i);
			}
		}
	}
	if (size <= 0 || i == size)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
