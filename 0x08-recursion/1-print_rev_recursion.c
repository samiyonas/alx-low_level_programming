#include "main.h"

/**
 * print_rev_recursion - reverse a string
 * @s: pointer variable
 * Return: nothing
 */
void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		print_rev_recursion(++s);
		_putchar(*s);
	}
}
