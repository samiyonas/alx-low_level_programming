#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	c = 32;
	b = 44;
	a = 48;
	while (a <= 57)
	{
		putchar(a);
		if (a == 57)
		{
			break;
		}
		putchar(b);
		putchar(c);
		a++;
	}
	putchar(10);
	return (0);
}
