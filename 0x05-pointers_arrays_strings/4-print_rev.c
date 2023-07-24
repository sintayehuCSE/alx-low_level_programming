#include "main.h"
/**
 * print_rev - prints string in a reverse order to std
 * @s: string to be printed in reverse order
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s++;
	}
	while (len)
	{
		_putchar(*s);
		len -= 1;
		s--;
	}
	_putchar(10);
}
