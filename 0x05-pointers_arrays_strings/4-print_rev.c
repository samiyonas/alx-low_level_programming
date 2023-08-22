#include "main.h"

/**
 * print_rev - reverse a string
 * @s: pointer variable
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}
