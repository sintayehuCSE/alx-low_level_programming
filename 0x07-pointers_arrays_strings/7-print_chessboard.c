#include "main.h"
/**
 * print_chessboard - print element of a chessboard
 * @a: element of a chessbaord to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
		j = 0;
	}
}
