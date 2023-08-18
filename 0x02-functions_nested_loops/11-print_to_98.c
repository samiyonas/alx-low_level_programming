#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number until 98 is reached
 * @n: starting point
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d", 98);
}
