#include "main.h"

/**
 * print_sign - checks for sign of a number
 *
 * @n: the number.
 *
 * Return: int.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		result = 0;
		_putchar(48);
	}
	else
	{
		result = -1;
		_putchar(45);
	}
	return (result);
}
