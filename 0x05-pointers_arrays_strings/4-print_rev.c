#include "main.h"

/**
 * print_rev - reverse a string
 * @str: pointer variable
 * Return: nothing
 */
void print_rev(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		;
	}
	for (i = i; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
}
