#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = '_', 'p', 'u', 't', 'c', 'h', 'a', 'r';
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
