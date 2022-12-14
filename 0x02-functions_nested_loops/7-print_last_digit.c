#include "main.h"

/**
 * print_last_digit - prints last digit
 * @h: the integer
 * Return: the last digit
 */
int print_last_digit(int h)
{
	int ld = h % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (0);
}
