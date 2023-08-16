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

	_putchar(n % 10);
	result = n % 10;
	return (result);
}
