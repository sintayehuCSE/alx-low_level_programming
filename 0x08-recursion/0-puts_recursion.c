#include "main.h"
/**
 * _puts_recursion - prints string to std output
 * @s: pointer to the string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
