#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: array to be reversed
 * @n: element of the array
 */

void reverse_array(int *a, int n)
{
	int *right = *(a + (n - 1));
	int temp;
	int i = 0;

	for (; i < (n / 2); i++)
	{
		temp = *(a + i);
		*(a + i) = *(end - i);
		*(end - i) = temp;
	}
}
