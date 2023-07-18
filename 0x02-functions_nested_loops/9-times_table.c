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
			if ((i * j) <= 9)
			{
				_putchar(((i * j) % 10) + 48);
				if (j != 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
			else
			{
				_putchar(((i * j) / 10) + 48);
				_putchar(((i * j) % 10) + 48);
				if (j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			j++;
		}
		_putchar(10);
		i++;
		j = 0;
	}
}
