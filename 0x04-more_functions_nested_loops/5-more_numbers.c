#include "main.h"

/**
 * more_numbers - print 0 to 14 10x
 * Return: 0
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 14; n++)
			_putchar('n');
		_putchar('\n');
	}
	return (0);
}
