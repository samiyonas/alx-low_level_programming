#include "main.h"

/**
 * _print_rev_recursion - reverse a string
 * @s: pointer variable
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
