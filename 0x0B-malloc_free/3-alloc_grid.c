#include "main.h"
/**
 * alloc_grid - allocate grid block of memory to handle 2D array
 * @width: column of an array
 * @height: row of an array
 *
 * Return: Pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **array_2D;
	int i = 0;
	int j = 0;

	if ((width > 0) && (height > 0))
	{
		array_2D = (int **)malloc(height * width * sizeof(int));
		if (array_2D != NULL)
		{
			while (i < height)
			{
				while (j < width)
				{
					array_2D[i][j] = 0;
					j++;
				}
				j = 0;
				i++;
			}
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
	return (array_2D);
}
