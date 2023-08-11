#include "main.h"
/**
 * malloc_checked - allocates memory using malloc fun.
 * @b: The size of memory to be allocated by malloc func in byte
 *
 * Return: Pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit[98];
	return (ptr);

}
