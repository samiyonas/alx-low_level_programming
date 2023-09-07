#include "main.h"
#include <stdlib.h>

/**
 * _abs - absolute value of a number
 * @n: integer variable
 * Return: integer
 */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
/**
 * array_range - create array of integer
 * @min: integer variable
 * @max: integer variable
 * Return: integer pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int range, i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = malloc(range * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; min++, i++)
		p[i] = min;
	return (p);
}
