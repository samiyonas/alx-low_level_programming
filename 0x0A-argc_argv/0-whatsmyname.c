#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	printf("\n");

	return (0);
}
