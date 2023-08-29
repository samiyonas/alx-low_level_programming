#include "main.h"

/**
 * print_diagsums - sum of diagonal of two square matrix
 * @size: integer variable
 * @a: integer pointer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum  = 0, newSize;

	newSize = size * size;
	for (i = 0; i < newSize; i += size + 1)
		sum += a[i];

	printf("%li, ", sum);
	sum = 0;

	for (i = size - 1; i <= newSize - size + 1; i += size - 1)
		sum += a[i];
	printf("%li\n", sum);
}
