#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
