#include "dog.h"
/**
 * init_dog - initialize element of new type struct dog
 * @d: Pointer to a structure
 * @name: Pointer to a dog name
 * @age: Age of a dog
 * @owner: Owner of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
