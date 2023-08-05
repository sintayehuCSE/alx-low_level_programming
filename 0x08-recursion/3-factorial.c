#include "main.h"
/**
 * factorial - finds factorial of a number
 * @n: number whose factorial is to be determined
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	n = n * factorial(n - 1);
	return (n);
}
