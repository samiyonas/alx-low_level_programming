#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer variable(string literal)
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
