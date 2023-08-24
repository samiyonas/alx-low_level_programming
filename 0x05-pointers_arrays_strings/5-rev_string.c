#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer variable
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	int result;

	result = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		result++;
	}
	int a;

	a = result - 1;
	for (j = 0; j < result / 2; j++)
	{
		char temp;

		temp = *(s + j);
		*(s + j) = *(s + a - j);
		*(s + a - j) = temp;
	}
}
