#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all the parameters
 * @n: number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add;

	va_list lst_arg;

	va_start(lst_arg, n);

	add = 0;
	for (i = 0; i < n; i++)
	{
		add += va_arg(lst_arg, int);
	}
	va_end(lst_arg);
	return (add);
}
