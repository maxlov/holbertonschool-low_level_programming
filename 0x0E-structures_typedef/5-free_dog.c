#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees some dogs
 * @d: pointer to dog_t struct
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != '\0')
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
