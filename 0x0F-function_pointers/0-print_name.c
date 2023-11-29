#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
