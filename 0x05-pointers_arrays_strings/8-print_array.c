#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: integer pointer
 * @n: integer variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
