#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
