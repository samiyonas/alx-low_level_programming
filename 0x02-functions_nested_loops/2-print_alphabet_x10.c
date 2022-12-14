#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char b = 'a';

	while (i < 10)
	{
		_putchar('\n');
		i++;

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
	}
}
