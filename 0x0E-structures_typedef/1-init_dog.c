#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a struct
 * @d: - structure pointer
 * @name: - character pointer
 * @age: - float data type
 * @owner: - character pointer
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
