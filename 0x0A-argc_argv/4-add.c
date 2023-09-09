#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive numbers
 * @argc: - argument count
 * @argv: - argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
