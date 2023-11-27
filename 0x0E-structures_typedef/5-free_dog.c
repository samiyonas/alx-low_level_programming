#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a struct
 * @d: struct to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
