#include "main.h"

/**
 * print_diagonal - prints diagonal line on the terminal
 * @n: number of \
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar(10):
		}
	}
}
