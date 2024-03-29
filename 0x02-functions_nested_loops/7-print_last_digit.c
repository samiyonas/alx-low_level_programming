#include "main.h"

/**
 * print_last_digit - prints the last digit of the number.
 *
 * @n: the integer.
 *
 * Return: int.
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (n < 0)
	{
		result = result * -1;
	}
	_putchar(result + '0');
	return (result);
}
