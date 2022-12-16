#include "main.h"

/**
 * print_numbers - prints number
 * Return: 0
 */
void print_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
	return (0);
}
