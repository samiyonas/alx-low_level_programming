#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	char b;

	a = 'a';
	b = 'A';
	while (b <= 'z')
	{
		putchar(a);
		b++;
	}
	return (0);
}
