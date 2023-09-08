#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
