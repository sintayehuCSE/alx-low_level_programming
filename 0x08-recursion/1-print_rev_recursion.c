#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse order recursively
 * @s: pointer to the string to printed in reveerse order
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
