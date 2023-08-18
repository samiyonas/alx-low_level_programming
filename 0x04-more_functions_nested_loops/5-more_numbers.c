#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; j < 10; j++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
	}
}
