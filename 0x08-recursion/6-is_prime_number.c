#include "main.h"

/**
 * prime_helper - helper function
 * @i: integer variable
 * @j: integer variable
 * Return: int
 */
int prime_helper(int i, int j)
{
	int counter = 0;

	if (i <= j)
	{
		if (j % i == 0)
		{
			counter++;
		}
		return (counter + prime_helper(i + 1, j));
	}
	return (counter);
}
/**
 * is_prime_number - checks for prime number
 * @n: integer variable
 * Return : int
 */
int is_prime_number(int n);
{
	if (prime_helper(1, n) == 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
