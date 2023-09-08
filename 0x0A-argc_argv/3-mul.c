#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	
	i = atoi(argv[1]) * atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
