#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer to previously allocated memory area by call to malloc fun
 * @old_size: Size in byte of previously reserved space
 * @new_size: New size in byte to alocated by the fun
 *
 * Return: A pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_block;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_block = malloc(new_size);
		return (new_block);
	}
	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_block = malloc( new_size);
		if (new_block == NULL)
			return (new_block);
		while (ptr[i])
		{
			*(new_block + i) = *(ptr + i);
			i++;
		}
		free(ptr);
	}
	if (new_size < old_size)
	{
		new_block = malloc(new_size);
		if (new_block == NULL)
			return (NULL);
		while (i < new_size)
		{
			new_block[i] = ptr[i];
			i++;
		}
		free(ptr);
	}
	return (new_block);
}
