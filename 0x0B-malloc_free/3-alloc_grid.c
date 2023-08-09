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
		array_2D = (int **)malloc(height * sizeof(int *));
		if (array_2D != NULL)
		{
			while (i < height)
			{
				array_2D[i] = (int *)malloc(width * sizeof(int));
				i++;
				if (array_2D[i] == NULL)
				{
					for (i--; i >= 0; i--)
					{
						free(array_2D[i]);
					}
					free(array_2D);
					return (NULL);
				}
			}
			i = 0;
			for (; i < height; i++)
			{
				for (; j < width; j++)
					array[i][j] = 0;
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
