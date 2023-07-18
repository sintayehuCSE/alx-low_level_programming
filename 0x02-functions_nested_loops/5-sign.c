#include "main.h"
/**
 * print_sign - prints a sign of number
 * @n: number whose sign is to be checked
 * Return: 1 if +ve, -1 if -ve and 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
