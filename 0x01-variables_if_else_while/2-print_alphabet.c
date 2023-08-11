#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Alwas 0 (Success)
 */
int main(void)
{
	char i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
