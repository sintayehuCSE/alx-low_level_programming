#include "main.h"
/**
 * _abs - prints absolute value of integer
 * @n: integer to be checked
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
