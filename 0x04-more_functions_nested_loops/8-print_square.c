#include "main.h"
/**
 * print_square - print out a square
 * @size: size of a squaree
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (; j < size; j++)
			{
				_putchar(35);
			}
			j = 0;
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
