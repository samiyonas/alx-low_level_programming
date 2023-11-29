#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: array of integer
 * @size: size of an array
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count = 0;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				count++;
				return (i);
			}
		}
	}
	if (count == 0 || size <= 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
