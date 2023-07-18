#include "main.h"
/**
 * print_last_digit - find last digit of a number
 * @n: number to be checked
 * Return:Last digit of n
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
	{
		num *= -1;
		_putchar(num + 48);
		return (num);
	}
	_putchar(num + 48);
	return (num);
}
