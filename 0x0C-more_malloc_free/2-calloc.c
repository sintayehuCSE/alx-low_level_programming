#include "main.h"
/**
 * _calloc - allocate a block of memory to an array using malloc
 * @nmemb: The number of arraye element
 * @size: Size of each array element
 *
 * Return: Pointer to the allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);
	while (i < nmemb)
	{
		alloc[i] = 0;
		i++;
	}
	return (alloc);
}
