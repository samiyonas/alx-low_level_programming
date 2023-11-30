#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - print everything
 * @format: string of format specifiers
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str, separator = "";

	va_list fptr;

	va_start(fptr, format);
	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(fptr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(fptr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(fptr, double));
					break;
				case 's':
					str = va_arg(fptr, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			separator = ", ";
		}
	}
	printf("\n");
	va_end(fptr);
}
