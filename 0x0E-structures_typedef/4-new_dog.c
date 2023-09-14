#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a structure
 * @name: character pointer
 * @age: float data type
 * @owner: character pointer
 * Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;

	return (new_dog);
}
