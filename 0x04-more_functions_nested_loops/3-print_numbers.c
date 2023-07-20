#include "main.h"

/**
 * print_numbers - prints digit 0 through 9 followed by newline
 * Return: nothing
 */

void print_numbers(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		_putchar(digit);
		digit++;
	}
	_putchar(10);
}
