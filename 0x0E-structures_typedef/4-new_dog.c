#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *name_cpy, *owner_cpy;
	dog_t *hot_dog;

	hot_dog = malloc(sizeof(dog_t));
	if (hot_dog == NULL)
	{
		free(hot_dog);
		return (NULL);
	}
	name_cpy = malloc(sizeof(name));
	if (name_cpy == NULL)
	{
		free(name_cpy);
		free(hot_dog);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(owner));
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		free(hot_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';
	hot_dog->name = name_cpy;
	hot_dog->age = age;
	hot_dog->owner = owner_cpy;
	return (hot_dog);
}
