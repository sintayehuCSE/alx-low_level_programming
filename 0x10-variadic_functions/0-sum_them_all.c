#include "variadic_functions.h"
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
