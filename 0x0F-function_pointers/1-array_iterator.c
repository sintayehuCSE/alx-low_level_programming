#include "function_pointers.h"
/**
 * array_iterator - print out element of an array
 * @array: Pointer tot the array whose element is to created
 * @size: Number of element of the array
 * @action: Pointer to function that does the job of iterarting an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i = 0;

		for (; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
