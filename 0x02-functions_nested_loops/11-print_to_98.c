#include "main.h"

/**
 * print_to_98 - print number until 98 is reached
 * @n: starting point
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		putchar(n + '0');
		if (n < 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
}
