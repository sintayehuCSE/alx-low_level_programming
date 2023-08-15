#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: Pointer to store name of new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: Pointer to where data of new dog is stored
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        struct dog *new_dog;

        new_dog = mallo(sizeof(struct dog));
        if (new_dog == NULL)
                return (new_dog);
	new_dog->name = name;
	new_dog->age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}
