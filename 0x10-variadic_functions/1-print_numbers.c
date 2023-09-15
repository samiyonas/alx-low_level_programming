#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j;
	unsigned int i;

	va_list lst_arg;

	va_start(lst_arg, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(lst_arg, int);
		printf("%d", j);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar(10);
}
