#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer variable
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
