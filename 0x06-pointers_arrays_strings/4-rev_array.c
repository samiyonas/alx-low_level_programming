#include "main.h"

/**
 * reverse_array - reverse the content of an array of integer
 * @a: pointer variable
 * @n: integer variable
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
