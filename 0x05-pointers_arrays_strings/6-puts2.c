#include "main.h"

/**
 * puts2 - prints every other character starting from 1
 * @str: pointer variable
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(*(str + i));
	}
}
