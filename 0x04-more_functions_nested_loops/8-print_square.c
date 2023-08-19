#include "main.h"

/**
 * print_square - prints square followed by new line
 * @size: the number of # both vertically and horizontally
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
