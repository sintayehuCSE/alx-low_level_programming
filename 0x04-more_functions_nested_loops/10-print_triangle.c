#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of a triangle
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 1;
	int k = 0;
	int space = size;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			space = size - i;
			while (j < space)
			{
				_putchar(32);
				j++;
			}
			j = 1;
			for (; k <= i; k++)
			{
				_putchar(35);
			}
			k = 0;
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
