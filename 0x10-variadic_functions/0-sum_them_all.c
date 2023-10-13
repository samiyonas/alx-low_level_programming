#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all it's parameters
 * @n: number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list lst_arg;

	va_start(lst_arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst_arg, int);
	}
	
	va_end(lst_arg);
	return (sum);
}
