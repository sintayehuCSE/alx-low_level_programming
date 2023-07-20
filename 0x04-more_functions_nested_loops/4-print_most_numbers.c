#include "main.h"
/**
 * print_most_numbers - prints digit 0 through 9 except 2 and 4
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c >= 48 && c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
