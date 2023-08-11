#include "main.h"
/**
 * array_range - create an array of integers
 * @min: minimum integre element of an array
 * @max: Maximum integer element of an array
 *
 * Return: A pointer to the newly created array location
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	*ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
