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
	int strlen1 = 0, strlen2 = 0;
	char *name_cpy, *owner_cpy;
	dog_t *hot_dog;

	while (name[strlen1] != '\0')
		strlen1++;
	while (owner[strlen2] != '\0')
		strlen2++;
	hot_dog = malloc(sizeof(dog_t));
	name_cpy = malloc((strlen1 + 1) * sizeof(char));
	owner_cpy = malloc(strlen2 * sizeof(char));
	name_cpy = name;
	owner_cpy = owner;
	hot_dog->name = name_cpy;
	hot_dog->age = age;
	hot_dog->owner = owner_cpy;
	return (hot_dog);
}
