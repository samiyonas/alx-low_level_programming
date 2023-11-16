#include "main.h"

/**
 * sqrt_helper - helper function
 * @i: integer variable
 * @j: integer variable
 * Return: int
 */
int sqrt_helper(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	sqrt_helper(i + 1, j);
}
/**
 * _sqrt_recursion - square root of a number
 * @n: integer variable
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int a;

	a = 1;

	sqrt_helper(a, n);
}
