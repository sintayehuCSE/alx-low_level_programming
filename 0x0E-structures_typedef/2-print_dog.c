#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print out the value of struct dog's element
 * @d: Pointer to access value of the dog struct element
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", (*d).name);
		if (d->age)
			printf("Age: %.6f\n", (*d).age);
		if ((*d).owner)
			printf("Owner: %s\n", d->owner);
	}
}
