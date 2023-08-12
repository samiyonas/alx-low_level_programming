#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 122;
	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
