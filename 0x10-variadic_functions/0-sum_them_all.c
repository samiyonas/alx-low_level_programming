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
	int j;
	int add;

	if (n == 0)
	{
		return (0);
	}
	va_list lst_arg;

	va_start(lst_arg, n);

	add = 0;
	for (i = 0; i < n; i++)
	{
		j = va_arg(lst_arg, int);
		add += j;
	}
	va_end(lst_arg);
	return (add);
}
