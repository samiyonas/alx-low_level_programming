#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through integer array
 * @array: array of integer
 * @size: size of an array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
