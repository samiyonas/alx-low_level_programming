#include "main.h"

/**
 * print_triangle - prints "size" size of triangle
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
