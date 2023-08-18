#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number until 98 is reached
 * @n: starting point
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d", 98);
	}
}
