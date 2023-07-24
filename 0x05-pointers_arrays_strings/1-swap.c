#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: 1st integer pointer
 * @b: 2nd integer pointer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
