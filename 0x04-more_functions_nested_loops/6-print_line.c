#include "main.h"

/**
 * print_line - print straight line
 * @n: the integer
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
		_putchar('_' * n);
	else
		_putchar('\n');
	return (0);
}
