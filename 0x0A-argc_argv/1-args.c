#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; argv[i]; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
