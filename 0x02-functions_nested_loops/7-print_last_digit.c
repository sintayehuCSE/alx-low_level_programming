#include "main.h"
/**
 * print_last_digit - find last digit of a number
 * @n: number to be checked
 * Return:Last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int num = -1 * (n % 10);

		_putchar(num);
		return (num);
	}
	_putchar(n % 10);
	return (n % 10);
}
