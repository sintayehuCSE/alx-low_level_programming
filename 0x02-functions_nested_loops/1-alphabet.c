#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Return: nothing
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
