#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
