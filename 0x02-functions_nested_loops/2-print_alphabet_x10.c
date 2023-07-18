#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letter ten times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int alphabet = 97;

	while (i < 10)
	{
		while (alphabet < 123)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
		alphabet = 97;
	}
}
