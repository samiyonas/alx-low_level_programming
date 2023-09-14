#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a structure members
 * @d: structure pointer
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
