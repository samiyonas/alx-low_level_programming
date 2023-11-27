#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;

	dog->name = malloc(sizeof(char) * i);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		;

	dog->owner = malloc(sizeof(char) * i);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
