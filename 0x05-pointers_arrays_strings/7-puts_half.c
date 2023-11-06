#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer variable
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int j;

	if (str == NULL)
	{
		return;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = i / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar(10);
}
