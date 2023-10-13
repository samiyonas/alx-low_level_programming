#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers, followed by new line
 * @separator: comma to separate the numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list lst_arg;

	va_start(lst_arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst_arg, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lst_arg);
}
