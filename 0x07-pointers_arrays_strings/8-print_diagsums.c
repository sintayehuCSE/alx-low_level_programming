#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
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
