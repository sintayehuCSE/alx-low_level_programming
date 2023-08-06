#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to be printed out
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
