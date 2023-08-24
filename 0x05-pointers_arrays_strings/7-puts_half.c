#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer variable
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int result;
	int a;

	result = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		result++;
	}
	for (a = result / 2; *(str + a) != '\0'; a++)
	{
		_putchar(*(str + a));
	}
	_putchar(10);
}
