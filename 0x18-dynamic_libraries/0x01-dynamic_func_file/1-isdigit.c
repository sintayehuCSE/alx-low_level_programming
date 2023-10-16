#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c: digit to be checked
 *
 * Return: 1 if true. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
