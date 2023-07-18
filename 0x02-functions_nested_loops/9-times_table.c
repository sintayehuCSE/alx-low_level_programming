#include "main.h"
/**
 * times_table - prints 9 times of table
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			_putchar(((i * j) / 10) + 48);
			_putchar(((i * j) % 10) + 48);
			_putchar(44);
			if ((i * j) <= 9)
			{
				_putchar(10);
				_putchar(10);
			}
			else
			{
				_putchar(10);
			}
			j++;
		}
		i++;
		j = 0;
	}
}
