#include "main.h"
/**
 * jack_bauer - prints every time and minute of a day
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		while (j <= 59)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(58);
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar(10);
			j++;
		}
		i++;
		j = 0;
	}
}
