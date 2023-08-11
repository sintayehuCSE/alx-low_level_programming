#include "main.h"
0;276;0c/**
 * malloc_checked - allocates memory using malloc fun.
 * @b: The size of memory to be allocated by malloc func in byte
 *
 * Return: Pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);

}
