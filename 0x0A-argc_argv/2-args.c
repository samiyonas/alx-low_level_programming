#include <stdio.h>
#include "main.h"

/**
 * main - print all the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
