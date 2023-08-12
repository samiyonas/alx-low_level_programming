#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	n = 65;
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
