#include "main.h"

/**
 * factorial - a function that calculates a factorial
 * @n: integer variable
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
