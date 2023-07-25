#include <stdio.h>
/**
 * print_array - prints the element of an array
 * @a: Pointer to the array elemet
 * @n: number of array element
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	putchar(10);
}
