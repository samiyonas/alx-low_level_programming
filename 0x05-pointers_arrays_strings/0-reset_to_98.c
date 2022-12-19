#include "main.h"

/**
 * reset_to_98 - a function for dereferencing.
 * @n: the pointer
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int i;

	n = &i;
	*n = 98;
}
