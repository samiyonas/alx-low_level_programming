#include <stdio.h>

/**
 * add - adds two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divide two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Devision by 0 is not allowed");
		return (0);
	}
	return (a / b);
}
/**
 * mod - remainder of two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Modulo by 0 is not allowed");
		return (0);
	}
	return (a % b);
}
