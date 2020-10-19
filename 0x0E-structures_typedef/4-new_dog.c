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
	char *name_cpy, *owner_cpy;
	dog_t *hot_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	hot_dog = malloc(sizeof(dog_t));
	if (hot_dog == NULL)
	{
		free(hot_dog);
		return (NULL);
	}
	name_cpy = malloc(sizeof(hot_dog->name));
	if (name_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(hot_dog->owner));
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}
	name_cpy = name;
	owner_cpy = owner;
	hot_dog->name = name_cpy;
	hot_dog->age = age;
	hot_dog->owner = owner_cpy;
	return (hot_dog);
}
