#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
