#include "main.h"

/**
 * more_numbers - prints 10 times the number
 * Return: 0
 */
void more_numbers(void)
{
	char a;
	char i = 0;

	while (i < 10)
	{
		a = 0;

		while (a < 14)
		{
			_putchar('0' + a);
			a++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
