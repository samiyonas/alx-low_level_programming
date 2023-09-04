#include "main.h"

/**
 * _abs - absolute value of the number.
 *
 * @n: the integer.
 *
 * Return: int.
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * -1;
	}
	else
	{
		result = n;
	}
	return (result);
}
