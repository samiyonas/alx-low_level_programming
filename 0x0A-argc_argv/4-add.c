#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add digits
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum;
	int i, j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j] == 0))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
