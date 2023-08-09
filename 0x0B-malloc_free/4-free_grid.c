#include "main.h"
/**
 * free_grid - frees grid block of memory allocated to 2D array
 * @grid: double pointer to the 2D array
 * @height: row of the 2D array or its number of 1D array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
