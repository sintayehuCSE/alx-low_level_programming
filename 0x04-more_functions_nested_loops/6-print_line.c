#include "main.h"
/**
 * print_line - print a line a number of specified time
 * @n: number of times to print line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar(10);
}
