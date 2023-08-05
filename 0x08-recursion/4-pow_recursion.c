#include "main.h"
/**
 * _pow_recursion - finds power of integer to the specified exponent
 * @x: number to be raised to y
 * @y: integer exponent to which x will be raised
 *
 * Return: result of the power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
