#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			if (i == j)
				sum_diag1 += *(a + (i * size + j));
		}
		j = 0;
	}
	i = 0;
	j = size - 1;
	while (i < size)
	{
		sum_diag2 += *(a + (i  * size + j));
		i++;
		j--;
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
