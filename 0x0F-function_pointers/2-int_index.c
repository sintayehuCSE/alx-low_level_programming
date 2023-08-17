#include "function_pointers.h"
/**
 * int_index - searches for particular element in an array
 * @array: A pointer to the array that hold the element
 * @size: Number of element of the array
 * @cmp: Pointer to the function that does a comparison
 *
 * Return: Index at which the element is found if any. or 0 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cmp_result;
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp_result = cmp(array[i]);
			if (cmp_result != 0)
				return (i);
		}
	}
	return (-1);
}
