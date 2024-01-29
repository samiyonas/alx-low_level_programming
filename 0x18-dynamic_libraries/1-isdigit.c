#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: ascii values of digit
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
