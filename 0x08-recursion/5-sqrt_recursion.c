#include "main.h"

/**
 * checker - checks the input number from n to base
 * @n: squared to compare it with base
 * @base: number to check
 * Return: integer
 */
int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}
/**
 * sqrt_recursion - returns square root of a number
 * @n: number to check for square root
 * Return: int
 */
int sqrt_recursion(int n)
{
	return (checker(1, n));
}
