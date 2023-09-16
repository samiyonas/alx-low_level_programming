#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: a string to be printed between the strings
 * @n: the number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list lst_arg;

	va_start(lst_arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(lst_arg, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar(10);
	va_end(lst_arg);
}
