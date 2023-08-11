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
	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloc = malloc(nmemb * size);
	if (calloc == NULL)
		return (NULL);
	while (i < nmemb)
	{
		calloc[i] = 0;
	}
	return (calloc);
}
