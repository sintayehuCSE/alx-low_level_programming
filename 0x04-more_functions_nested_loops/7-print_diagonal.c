#include "main.h"
/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: number of times the character \ shoud be printed
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(92);
			_putchar(10);
			if (n > 1 && i != n)
			{
				while (j <= i - 1)
				{
					_putchar(32);
					j++;
				}
			}
			i++;
			j = 0;
		}
	}
	else
	{
		_putchar(10);
	}
}
