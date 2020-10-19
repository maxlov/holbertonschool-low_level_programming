#ifndef dog_h
#define dog_h
/**
 * struct dog - Information for a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner's name
 *
 * Description: A structure that contains a dogs's name, age, and owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
