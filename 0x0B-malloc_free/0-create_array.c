#include "main.h"
/**
 * create_array - a functions that create an array of char and initialize
 * it with a character
 * @size: number of element of array
 * @c: character to be filled in to the array
 *
 * Return: Pointer to the filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size > 0)
	{
		char *array = malloc(size * sizeof(char));
		if (array != NULL)
		{
			while (i < size)
			{
				*(array + i) = c;
				i++;			}
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (array);
}
