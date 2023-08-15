#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Deallocate heap area used to create a new dog
 * @d: A pointer to the heap area that hold a new dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
