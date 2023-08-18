#include "main.h"

/**
 * print_line - print _ n times
 * @n: _ is printed n times
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
