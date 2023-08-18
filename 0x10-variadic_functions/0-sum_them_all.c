#include "variadic_functions.h"
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
/**
 * sum_them_all - Add all the argument passed to it
 * @n: The number of argument to passed in
 *
 * Return: The sum of it argument or 0 if none
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
