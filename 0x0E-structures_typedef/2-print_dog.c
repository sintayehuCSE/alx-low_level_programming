#include "dog.h"
/**
 * print_dog - print out the value of struct dog's element
 * @d: Pointer to access value of the dog struct element
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->naem, d->age, d->owner);
	}
}
