#include "main.h"

/**
 * print_numbers - print single digit numbers
 *
 * Return: nothing.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);
}
