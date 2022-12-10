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

	a = 'a';

	while (a <= 'z')
	{
		if ((a != 'e' && a != 'q') && a <= 'z')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
