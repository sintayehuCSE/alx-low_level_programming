#include "main.h"
/**
 * print_last_digit - find last digit of a number
 * @n: number to be checked
 * Return:Last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		return ((-1) * (n % 10));
	return (n % 10);
}
