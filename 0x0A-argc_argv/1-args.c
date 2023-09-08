#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	printf("%d", i);
	printf("\n");
	return (0);
}
